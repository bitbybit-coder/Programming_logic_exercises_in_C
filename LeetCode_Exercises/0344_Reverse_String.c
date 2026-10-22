void reverseString(char* s, int sSize) {
    int i = 0, j = sSize-1;
    do{
        char aux;
        aux =  s[i];
        s[i] = s[j];
        s[j] = aux;
        i++;
        j--;
    }while(i < j);
}
