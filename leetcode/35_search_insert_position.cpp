int searchInsert(int* nums, int numsSize, int target) {
    int k = 0;
    for(int i=0; i<numsSize; i++){
        if(nums[i]==target){
            k=i;
        }
        else if(i<numsSize-1 && target>nums[i] && target<nums[i+1]){
            k=i+1;
        }
        else if(target>nums[i] && numsSize-1==i){
            k=i+1;
        }
    }
    return k;
}