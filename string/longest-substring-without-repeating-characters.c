int lengthOfLongestSubstring(char* s) {
    int best = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int seen[256] = {0};
        int j = i;

        while (s[j] != '\0') {
            int idx = (unsigned char)s[j];
            if (seen[idx]) break;
            seen[idx] = 1;
            j++;
        }
        int len = j -i;
        if (len > best){
            best = len;
        }
    }
    return best;
}