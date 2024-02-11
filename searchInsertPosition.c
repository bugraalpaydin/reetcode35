
int searchInsert(int* nums, int numsSize, int target) {
    // Binary Search 
    int low = 0;
    int high = numsSize - 1;
    int mid = low + ((high - low) / 2);

    
    while (low <= high) {
        int mid = low + ((high - low) / 2);

        if (target == nums[mid]) 
            return mid;
        else if (target > nums[mid])
            low = mid + 1;
        else if (target < nums[mid])
            high = mid - 1;
    }
    return low;
}
