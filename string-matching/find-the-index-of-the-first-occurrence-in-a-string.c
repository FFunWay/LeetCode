int strStr(char* haystack, char* needle) {
    int len_hay = strlen(haystack);
    int len_needle = strlen(needle);
    for (int i = 0; i <= len_hay - len_needle; i++) {
        int j = 0;
        while (j < len_needle && haystack[i+j] == needle[j]) {
            j ++;
        }
        if (j == len_needle) {
            return i;
        }
        
    }
    return -1;
}