void rotate(int* nums, int numsSize, int k) {
    int tep = 0;
    int i = 0;
    while(k--)
    {
        i = numsSize - 1;
        tep = *(nums+i);
        for(; i>0; i--)
        {
            *(nums+i) = *(nums+i-1);
        }
        *(nums) = tep;
    }
}
