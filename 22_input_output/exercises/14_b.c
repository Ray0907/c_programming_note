int my_fputs(const char *s, FILE *stream)
{
    while (*s != '\0')
    {
        if (putc(*s, stream) == EOF)
            return EOF;
        s++;
    }
    return 0;
}
