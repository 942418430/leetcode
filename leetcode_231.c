bool isPowerOfTwo(int n) {
    int count = 0;
    int i = 1;
    if(n > 0)
    {
        for(i=0; i<31; i++)
        {
            if((n>>i) &1 == 1)
            {
                count++;
            }
        }
        if(count == 1)
        {
            return 1;
        }
    }
    return 0;
}
