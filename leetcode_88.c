void merge(int* nums1, int m, int* nums2, int n) {
    int i = m;
    int j = 0;
    int tmp = 0;
    while(j<n)
    {
        nums1[i] = nums2[j];
        i++;
        j++;
    }
    for(i=0; i<m+n-1; i++)
    {
        for(j=0; j<m+n-i-1; j++)
        {
                if(nums1[j]>=nums1[j+1])
                {
                    tmp = nums1[j];
                    nums1[j] = nums1[j+1];
                    nums1[j+1] = tmp;
                }  
        }
    }
}
