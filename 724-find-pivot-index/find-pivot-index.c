int pivotIndex(int* nums, int n) {
    int i,a=0,b=0,j;
    for(i=0;i<n;i++){
        a=0;
        b=0;
        for(j=i+1;j<n;j++)
        {
            a+=nums[j];
        }
         for(j=0;j<i;j++)
        {
            b+=nums[j];
        }
        if(a == b)
            return i;
    }
    return -1;
    }
