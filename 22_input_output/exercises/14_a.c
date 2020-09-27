char *my_fgets(char *s, int n, FILE *stream)
{
    int c, len = 0;
    while (len < n - 1)
    {
        if ((c = getc(stream)) == EOF)
        {
            if (len == 0 || ferror(stream))
                return NULL;
            break;
        }
        s[len++] = c;
        if (c == '\n')
            break;
    }
    s[len] = '\0';
    return s;
}
