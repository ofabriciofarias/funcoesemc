/*
Fun��es e tipo de retorno inteiro
*/

#include <stdio.h>

//Prototipo da nossa fun��o
//Tipo de retorno: inteiro
//Nome da fun��o: soma
//Argumentos: Recebe de dois argumentos inteiros
int soma(int var1, int var2);

int main(){

    int a, b, r;

    a = 10;
    b = 3;

    r = soma(a, b);

    printf("Soma = %d\n", r);

return 0;
}

int soma(int var1, int var2){
    int aux;
    aux = var1 + var2;
    return aux;
}
