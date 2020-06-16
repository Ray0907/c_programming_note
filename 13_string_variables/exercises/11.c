int strcmp(char *s, char *t)
{
    while (*s == *t) {
        if (s[i] == '\0')
            return 0;
        s++; t++;
    }
    return *s - *t;
}