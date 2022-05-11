int Solution::isPrime(int val) {
    if(val <= 1){
        return false;
    }
    
    for(int i=2; i<=sqrt(val); i++){
        if(val%i == 0){
            return false;
        }
    }
    return true;
}
