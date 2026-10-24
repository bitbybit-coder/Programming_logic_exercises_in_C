char findTheDifference(char* s, char* t) {
   int sumS = 0, sumT = 0;

    for(int i = 0; i < strlen(s); i++){
        sumS += (int)s[i] - 'a';
    }
    for(int i = 0; i < strlen(t); i++){
        sumT += (int)t[i] - 'a';
    }
    return (char)sumT-sumS + 'a';
}

//Soma-se o valor ASCII das strings e retorna a diferença entre eles,
//resultando assim no caractere divergente.
