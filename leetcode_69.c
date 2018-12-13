int mySqrt(int x) {
    int i = 0;
    for(i=0; i<46340; i++)
    {
        if((i*i <= x) && ((i+1)*(i+1)>x))
            return i;
    }
    return i;
}
