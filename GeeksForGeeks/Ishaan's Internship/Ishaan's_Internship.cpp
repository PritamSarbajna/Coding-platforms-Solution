int getCandidate(int n, int k){
    int count = 0;
    while(n>=k){
        n /= k;
        count++;
    }
    return pow(k, count);
}
