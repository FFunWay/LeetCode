/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0;i--){
        if (digits[i] < 9){
            digits[i] += 1;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
        
    }
    int * newdigits = (int*)malloc((digitsSize+1)*sizeof(int));
    newdigits[0] = 1;
    for (int i = 1; i <= digitsSize; i++){
        newdigits[i] =0;
    }
    *returnSize = digitsSize +1;
    return newdigits;
}