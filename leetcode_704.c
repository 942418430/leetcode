int search(int* nums, int numsSize, int target) {
    int z = 0;
    int y = numsSize-1;
    int i = 0;
    while(z<=y)
    {
        i = (y-z)/2 +z;
        if(nums[i] == target)
        {
            return i;
        }
        else if(nums[i] > target)
        {
            y = i-1;
        }
        else
        {
            z = i+1;
        }
    }
     return -1;
}
