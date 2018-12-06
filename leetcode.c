int singleNumber(int* nums, int numsSize) {
    int i = 0;
    int s = 0;
    for(i=0; i<numsSize; i++)
    {
       s ^= nums[i];
    }
    return s;
}
