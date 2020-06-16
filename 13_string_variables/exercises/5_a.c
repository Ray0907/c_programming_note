void capitalize(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i]))
            toupper(str[i]);
        i++;
    }
}