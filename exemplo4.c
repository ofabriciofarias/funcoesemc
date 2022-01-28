/*

Calculando a raiz quadrada usando uma funcao

*/

#include <stdio.h>
#include <math.h>

//Prototipo de funcao
float raiz(int valor);
void imprime(float r);
float media(int contador, float soma);
void imprimeInt(int r);
int somaDoisNumeros();
void somaDoisNumerosEApresenta();

int main(){

    int a = 4;
    float r;

    r = raiz(a);
    imprime(r);

    a = 16;
    r = raiz(a);
    imprime(r);

    int cont = 10;
    float s = 150;

    r = media(cont, s);
    imprime(r);

    imprimeInt(cont);

    scanf("%d", &a);
    imprimeInt(a);

    /* Opcao 1
    int resultado = somaDoisNumeros();
    imprimeInt(resultado); */

    /*Opcao 2
    imprimeInt(somaDoisNumeros());
    */
    //Opcao 3
    somaDoisNumerosEApresenta();



return 0;
}

float raiz(int valor){
    return sqrt(valor);
}

void imprime(float r){
    printf("Resultado = %f\n", r);
}

void imprimeInt(int r){
    printf("Resultado = %d\n", r);
}

float media(int contador, float soma){
    return soma/contador;
}

void somaDoisNumerosEApresenta(){
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    imprimeInt((a+b));

}

int somaDoisNumeros(){

    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    return (a+b);
}


