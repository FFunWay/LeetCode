char* addBinary(char* a, char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    int len_total = len_a > len_b ? len_a : len_b;
    int max_len = len_total + 2;
    int carry = 0;
    char *result = malloc ((max_len)* sizeof(char*));
    int k = 0;
    result[--max_len] = '\0';
    int i = len_a - 1;
    int j = len_b - 1;
     while (i >= 0 || j >= 0 || carry) {
        int bit_a = (i >= 0) ? a[i] - '0' : 0; 
        int bit_b = (j >= 0) ? b[j] - '0' : 0; 
        int sum = bit_a + bit_b + carry;  
        result[k++] = (sum % 2) + '0';  

        carry = sum / 2; 
        i--;  
        j--; 
    }
    result[k] = '\0';

    for (int start = 0, end = k - 1; start < end; start++, end--) {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
    }

    return result; 
}