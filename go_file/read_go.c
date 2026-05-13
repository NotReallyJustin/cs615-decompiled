#include <stdio.h>

int main()
{
    // File wrapper (wraps a file descriptor)
    FILE* read_file = fopen("/home/veronika/broom.go", "r");

    char code[1028];

    while(fgets(code, 100, read_file)) 
    {
        printf("%s", code);
    }

    fclose(read_file);
}