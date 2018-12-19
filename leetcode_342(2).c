bool isPowerOfFour(int num) {
     if(num<1)
        return 0;
    else if(num == 1)
        return 1;
    else if(num%4 == 0)
    {
        return isPowerOfFour(num/4);
    }
    else
        return 0;
    
}
