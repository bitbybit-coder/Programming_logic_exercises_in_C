int searchInsert(int* nums, int numsSize, int target) {
   int position = -1;

    for(int i = 0; i < numsSize; i++){
        if(target == nums[i]){
            position = i;
            return position;
        }
    }
    
    for(int i = 0; i < numsSize; i++){
        if(target < nums[i]){
            position = i;
            break;
        }
    }

   if(target > nums[numsSize-1]){
        position = numsSize;
   }
    return position;
}
