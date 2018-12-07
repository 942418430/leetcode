bool isMonotonic(int* A, int ASize) {
    int i = 0;
    int n = 0;
    int m = 0;
    for(i=0; i<ASize-1; i++)
    {
        if(A[i]<=A[i+1])
        {
            n++;
        }
        if(A[i]>=A[i+1])
        {
            m++;
        }
    }
    if(n == ASize-1 || m ==ASize-1 )
    {
        return true;
    }
    return false;
}
