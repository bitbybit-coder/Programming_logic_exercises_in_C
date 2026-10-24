char findTheDifference(char* s, char* t) {
   int sumS = 0, sumT = 0;

    for(int i = 0; i < strlen(s); i++){
        sumS += (int)s[i];
    }
    for(int i = 0; i < strlen(t); i++){
        sumT += (int)t[i];
    }
    return sumT-sumS;
}

//Soma-se o valor ASCII das strings e retorna a diferença entre eles,
//resultando assim no caractere divergente.
