void moveZeroes(int* nums, int numsSize) {
    int aux, j = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != 0){
            aux = nums[i];
            nums[i] = nums[j];
            nums[j] = aux;
            j++;
        }
    }
}
