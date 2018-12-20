bool isPerfectSquare(int num) {
    int i = 0;
    int s = 0;
    for(i=1; i<=46350; i++)
    {
        s =s + 2*i-1;
        if(s == num)
        {
            return 1;
        }
    }
    return 0;
}
