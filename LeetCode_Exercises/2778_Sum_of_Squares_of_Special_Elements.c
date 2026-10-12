int sumOfSquares(int* nums, int numsSize) {
    int aux = 0, square = 0;
    for (int i = 0; i < numsSize; i++){
        aux = numsSize % (i+1);
        if(aux == 0){
            square += nums[i] * nums[i];
        }
    }
    return square;
}
