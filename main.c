#include <stdio.h>
#include "primos.h"

int main(){
    int Operacao, Posicao;
    printf("Insira a operação desejada:\n");
    printf("Encontrar primo: (1)\n");
    printf("Encontrar posição: (2)\n");
    scanf("%d", &Operacao);

    if(Operacao == 1){
        printf("Digite a posição do primo: ");
        scanf("%d", &Posicao);
        Procura_primo(Posicao);
    }

    return 0;
}