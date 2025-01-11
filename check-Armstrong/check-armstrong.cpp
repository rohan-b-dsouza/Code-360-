bool checkArmstrong(int n){
    int sum = 0;
    int original = n;
    int cnt = log10(n) + 1;
    n = original;
    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, cnt);
        n = n / 10;
    }
    if (sum == original) return true;
    return false;
}

// T.C =>  O(log N)
// S.C => O(1)
