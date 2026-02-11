int lengthOfLastWord(char* s) {
    char *token;
    char *last = NULL;
    int lentoken = 0;
    token = strtok(s, " ");
    while (token != NULL) {
        last = token;
        token = strtok(NULL, " ");
        if (last != NULL) {
            lentoken = strlen(last);
        }
    }
    return lentoken;
}