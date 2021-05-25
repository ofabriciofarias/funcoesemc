/*
Fun��es
Prot�tipo de fun�ao e sua implementa��o

Problema: Somar dois n�meros e aprensentar o resultado
*/

#include <stdio.h>

//Criando um prototipo da funcao
//Tipo_de_retorno void, significa que ela n�o vai retornar nada para o meu programa principal
//Nome da fun��o: soma
//Argumentos: dois do tipo inteiro
void soma(int var1, int var2);

int main(){

    int a, b, r;

    a = 3;
    b = 4;

    /*r = a + b;

    printf("Soma = %d\n", r);*/

    //Simplificando ao chamar a fun��o soma
    soma(a,b);

    a = 6;
    b = 9;

    /*r = a + b;

    printf("Soma = %d\n", r);*/
    //Simplificar chamando a fun��o soma outra vez
    soma(a, b);


return 0;
}

//Implementando a fun��o que foi definida no prototipo
void soma(int var1, int var2){
    int aux;
    aux = var1 + var2;
    printf("Soma = %d\n", aux);
}
