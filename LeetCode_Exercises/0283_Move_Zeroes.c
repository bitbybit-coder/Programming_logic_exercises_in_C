void moveZeroes(int* nums, int numsSize) {
   for(int i = 0; i < numsSize-1; i++){
       for(int j = i+1; j < numsSize; j++){
            int aux;
            if(nums[i] == 0){
                aux = nums[i];
                nums[i] = nums[j];
                nums[j] = aux;
            }
       }
    }
}
