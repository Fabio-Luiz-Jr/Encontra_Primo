#include <stdio.h>
#include "primos.h"

int main(){
    int Operacao, Posicao, Primo;
    printf("Insira a operação desejada:\n");
    printf("Encontrar primo: (1)\n");
    printf("Encontrar posição: (2)\n");
    scanf("%d", &Operacao);

    if(Operacao == 1){
        printf("Digite a posição do primo: ");
        scanf("%d", &Posicao);
        Procura_primo(Posicao);
    } else{
        printf("Digite o primo que deseja procurar: ");
        scanf("%d", &Primo);
        Procura_posicao(Primo);
    }

    return 0;
}