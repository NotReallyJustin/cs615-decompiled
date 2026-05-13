import (
        "bufio"
        "fmt"
        "log"
        "log/syslog"
        "os"
        "os/exec"
        "strings"
)

func slog(file string, logger *syslog.Writer) error {
        f, err := os.Open(file)
        if err != nil {
                return fmt.Errorf("Unable to open %s: %v", file, err)
        }
        defer f.Close()

        scanner := bufio.NewScanner(f)
        for scanner.Scan() {
                line := scanner.Text()
                logger.Info(line)
        }
        if err := scanner.Err(); err != nil {
                return fmt.Errorf("Error reading file: %v", err)
        }
        return nil
}

func dig(resolver, domain string) (string, error) {
        cmd := exec.Command("/usr/bin/dig", "+short", "@"+resolver, "A", domain)
        output, err := cmd.Output()
        if err != nil {
                return "", fmt.Errorf("Unable to run dig: %v", err)
        }
        ip := strings.TrimSpace(string(output))
        return ip, nil
}

func main() {
        if len(os.Args) != 2 {
                fmt.Fprintln(os.Stderr, "Usage: broom <file>")
                os.Exit(1)
        }
        file := os.Args[1]
        resolver := "9.9.9.9"
        syslogHost := "syslog.cs615.dotwtf.wtf"

        if len(os.Getenv("DEBUG")) > 0 {
                res := os.Getenv("RESOLVER")
                if len(res) > 0 {
                        resolver = strings.TrimSpace(res)
                }
        }

        if _, err := os.Stat(file); err != nil {
                fmt.Fprintf(os.Stderr, "Unable to read %s.\n", file)
                os.Exit(1)
        }

        ip, err := dig(resolver, syslogHost)
        if err != nil {
                log.Fatalf("Unable to resolve syslog host: %v\n", err)
        }

        logger, err := syslog.Dial("udp", ip+":514", syslog.LOG_LOCAL0, "broom")
        if err != nil {
                log.Fatalf("Unable to open log socket: %v\n", err)
        }
        defer logger.Close()

        if err := slog(file, logger); err != nil {
                log.Fatalf("Error logging file: %v\n", err)
        }
}