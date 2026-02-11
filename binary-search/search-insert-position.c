int searchInsert(int* nums, int numsSize, int target) {
    for(int i = 0; i < numsSize; i++){
        if (i+1 < numsSize){
            if (target > nums[i] && target <= nums[i+1]){
            return i+1;
            }
        }
        else if (i+1 == numsSize){
            if (target > nums[i]){
                return i+1;
            }
        }
    }
    return 0;
}