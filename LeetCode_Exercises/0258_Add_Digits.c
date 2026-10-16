int addDigits(int num) {
    if(num == 0){
    return 0;
    }
    int sum, div = num;
    do{
        sum = 0;
        do{
            sum = sum + div%10;
            div = div/10;
        }while(div > 0);
        div = sum;
    }while(sum >= 10);
    return sum;
}
