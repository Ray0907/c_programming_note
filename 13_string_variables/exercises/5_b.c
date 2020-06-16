void capitalize(char *str) {
    char *c = str;
    while (c != '\0') {
        if (isalpha(c))
            toupper(c);
        c++;
    }
}