void reverse(int* nums, int left, int right)
{
    while(left < right)
    {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;

        left++;
        right--;
    }
}

void rotate(int* nums, int numsSize, int k)
{
    k = k % numsSize;

    // Reverse entire array
    reverse(nums, 0, numsSize - 1);

    // Reverse first k elements
    reverse(nums, 0, k - 1);

    // Reverse remaining elements
    reverse(nums, k, numsSize - 1);
}