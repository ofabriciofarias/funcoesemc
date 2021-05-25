/*
Funções
Protótipo de funçao e sua implementação

Problema: Somar dois números e aprensentar o resultado
*/

#include <stdio.h>

//Criando um prototipo da funcao
//Tipo_de_retorno void, significa que ela não vai retornar nada para o meu programa principal
//Nome da função: soma
//Argumentos: dois do tipo inteiro
void soma(int var1, int var2);

int main(){

    int a, b, r;

    a = 3;
    b = 4;

    /*r = a + b;

    printf("Soma = %d\n", r);*/

    //Simplificando ao chamar a função soma
    soma(a,b);

    a = 6;
    b = 9;

    /*r = a + b;

    printf("Soma = %d\n", r);*/
    //Simplificar chamando a função soma outra vez
    soma(a, b);


return 0;
}

//Implementando a função que foi definida no prototipo
void soma(int var1, int var2){
    int aux;
    aux = var1 + var2;
    printf("Soma = %d\n", aux);
}
