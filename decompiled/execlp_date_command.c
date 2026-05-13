void execlp_date_command(void)
{
    char str[8];
    char *cmd_char;
    char *next_str_ptr;

    // This isn't actually what was in the Ghidra originally
    // I just manually decoded/decrypted this and converted everything to ascii
    // and forcibly set this
    str[0] = 'd';
    str[1] = 'a';
    str[2] = 't';
    str[3] = 'e';
    
    // After decoding script
    //
    str[4] = 0;
    printf("\nProcess terminated at: ");
    fflush((FILE *)(__sF + 0x98));
    cmd_char = str;
    // negative bits are weird.
    // all this does is remove the highest bit of that negative hex
    //
    while (*cmd_char != '\0')
    {
        next_str_ptr = cmd_char + 1;
        *cmd_char = *cmd_char + -0x80;
        cmd_char = next_str_ptr;
    }
    // Uses $PATH on system
    //
    execlp(str, str, 0);
    perror("execlp");
    return;
}