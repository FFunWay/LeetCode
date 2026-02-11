int lengthOfLongestSubstring(char* s) {
    if (s == NULL || s[0]== '\0')
        return 0;

    int last[256] = {0};
    int start = 0;
    int len = 0;

    for (int i =0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char) s[i];
        last[c] ++;
        while (last[c] > 1) {
            unsigned char c1 = (unsigned char) s[start];
            last[c1] --;
            start ++;
        }

        int currlen = i - start +1;
        if (currlen > len) {
            len = currlen;
        }
    }
    return len;
}