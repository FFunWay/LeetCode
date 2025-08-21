bool isPalindrome(int x) {
    if (x < 0 || x % 10 == 0 && x != 0) {
        return false;
    }
    int ori = x;
    long long reverse = 0;

    while (x > 0){
        int n = x%10;
        reverse = reverse * 10 + n;
        x /= 10;
    }
    return ori == reverse;
}