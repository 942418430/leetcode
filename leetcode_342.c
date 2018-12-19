bool isPowerOfFour(int num) {
    if(num>0)
    {
        while(num>1)
        {
            if(num%4 == 0)
                num /= 4;
            else
                return 0;
        }
        return 1;
    }
    return 0;
}
