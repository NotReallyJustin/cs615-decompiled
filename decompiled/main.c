void main(void)
{
    int groupid_set_status;
    int *errno;
    char *err_str;
    __sighandler_t sigint_handler;

    groupid_set_status = setegid(1003);
    if (groupid_set_status != 0)
    {
        errno = (int *)__errno();
        err_str = strerror(*errno);
        fprintf((FILE *)(__sF + 0x130), "Unable to setegid: %s\n", err_str);
        // WARNING: Subroutine does not return
        exit(1);
    }
    sigint_handler = signal(2, stop_quitting);
    if (sigint_handler == (__sighandler_t)18446744073709551615)
    {
        errno = (int *)__errno();
        err_str = strerror(*errno);
        fprintf((FILE *)(__sF + 0x130), "Unable to establish signal handler: %s\n", err_str);
        // WARNING: Subroutine does not return
        exit(1);
    }
    sigint_handler = signal(0x12, stop_quitting);
    if (sigint_handler == (__sighandler_t)18446744073709551615)
    {
        errno = (int *)__errno();
        err_str = strerror(*errno);
        fprintf((FILE *)(__sF + 0x130), "Unable to establish signal handler: %s\n", err_str);
        // WARNING: Subroutine does not return
        exit(1);
    }


    // Send a SIGQUIT
    // JUSTIN NOTE: WE SHOULD PROBABLY WAIT IN PAUSE() LOOP, AND GO ON ANOTHER INSTANCE TO SEND A SIGQUIT
    sigint_handler = signal(3, execlp_date_command);
    if (sigint_handler == (__sighandler_t)0xffffffffffffffff)
    {
        errno = (int *)__errno();
        err_str = strerror(*errno);
        fprintf((FILE *)(__sF + 0x130), "Unable to establish signal handler: %s\n", err_str);
        // WARNING: Subroutine does not return
        exit(1);
    }

    do
    {
        pause();
    } while (true);
}