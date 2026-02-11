

char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int len_merged = len1 + len2 + 1;
    char* merged = (char*)malloc(sizeof(char)*len_merged);
    int i = 0, j = 0, k = 0;
    
    for(;i < len1 && j<len2;){
        merged[k++] = word1[i++];
        merged[k++] = word2[j++];
    }
    for(;i < len1;){
        merged[k++] = word1[i++];
    }
    for(;j < len2;){
        merged[k++] = word2[j++];
            
    }
    merged[k]= '\0';
    return merged;
}