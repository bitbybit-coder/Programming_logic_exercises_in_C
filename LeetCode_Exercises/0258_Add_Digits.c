int addDigits(int num) {
    if(num == 0){
    return 0;
    }
    int resto, sum, div = num;
    do{
        sum = 0;
        do{
            resto = div%10;
            div = div/10;
            sum = sum + resto;
        }while(div > 0);
        div = sum;
    }while(sum >= 10);
    return sum;
}
