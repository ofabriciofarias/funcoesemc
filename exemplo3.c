/*
Funções que calculam subtracao e soma */

#include <stdio.h>
//Prototipos das funções
void soma(int a, int b);
int subtracao(int a, int b);
void divisao(float a, float b);

int main(){
    int v1, v2, sub;

    v1 = 5;
    v2 = 2;

    soma(v1, v2);

    sub = subtracao(v1, v2);
    printf("Subtracao = %d\n", sub);

    divisao(v1, v2);

    v1 = 7;
    soma(v1, v2);
    divisao(v1,v2);
}

void soma(int a, int b){
    printf("Soma = %d\n", (a+b));
}

int subtracao(int a, int b){
    return a - b;
}

void divisao(float a, float b){
    if(b == 0){
        printf("Impossivel Dividir\n");
    }else{
        float res = a/b;
        printf("Divisao = %.2f\n", res);
    }
}

