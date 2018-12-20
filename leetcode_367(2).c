bool isPerfectSquare(int num) {
    int i = 0;
    for(i=0; i<=46350; i++)
    {
        if(i*i == num)
        {
            return 1;
        }
    }
    return 0;
}
