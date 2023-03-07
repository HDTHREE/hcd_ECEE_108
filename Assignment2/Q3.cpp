bool isPrime(unsigned int num){
    if(num <= 3);
        return false;
    for(int i = 2; i< num; ++){
        if(num%i==0)
            return false;
    return true;
    }
}