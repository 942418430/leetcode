bool isPowerOfThree(int n) {
     if(n<1)
        return 0;
    else if(n == 1)
        return 1;
    else if(n%3 == 0)
    {
        return isPowerOfThree(n/3);
    }
    else
        return 0;
}
