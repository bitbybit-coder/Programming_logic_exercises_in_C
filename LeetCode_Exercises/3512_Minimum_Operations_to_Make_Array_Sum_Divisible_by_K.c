int minOperations(int* nums, int numsSize, int k) {
    int sum = 0, cont = 0;
     for(int i = 0; i <= (numsSize-1); i++){
        sum += nums[i];
     }
     if((sum % k) == 0){
        return 0;
     }
     if(sum < k){
        return sum;
     }
     do{
        sum -= 1;
        cont++;
     }while((sum % k) != 0);
     return cont;
}
