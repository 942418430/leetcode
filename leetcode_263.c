bool isUgly(int num) {
    if(num < 1)
    {
        return 0;
    }
    while(num>1)
    {
        if((num%2!=0) && (num%3!=0) && (num%5!=0))
            return 0;
        if(num%2==0)
            num /= 2;
        if(num%3==0)
            num /= 3;
        if(num%5==0)
            num /= 5;
    }
        return 1;
}
