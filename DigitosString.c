#include<stdio.h>
#include<string.h>

int main(void){
    char frase[100];
    int tamanho;

    printf("Entre com uma frase: \n");
    gets(frase);

    tamanho = strlen(frase);

    printf("A frase possui %d caracteres\n", tamanho);
    printf("A variavel tem tamanho %d caracteres\n", sizeof(frase));
    return 0;
}