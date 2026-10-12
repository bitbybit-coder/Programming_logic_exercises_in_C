/*
 Note: The returned array must be malloced, assume caller calls free().
*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *vetor = (int*) malloc(2 * sizeof(int));
    for(int i = 0; i < (numsSize-1); i++){
        for(int j = (i+1); j < numsSize; j++){
            if((nums[i] + nums[j]) == target){
                *returnSize = 2;
                vetor[0] = i;
                vetor[1] = j;
                return vetor;
            }
        }
    }

    *returnSize = 0;
    free(vetor);
    return NULL;
};
