int* twoSum(int* nums, int numsSize, int target) {
    int i = 0;
    int j = 0;
    for(; i<numsSize-1; i++)
    {
        for(j=i+1; j<numsSize; j++)
        {
            if((*(nums+i) + *(nums+j)) == target)
            {
                nums[0] = i;
                nums[1] = j;
            }   
        }
    }
    return nums;
    
}
