#include <stdio.h>
#include "primos.h"

int main(){
    int Operacao, Posicao, Primo;
    printf("Insira a operação desejada:\n");
    printf("Encontrar primo: (1)\n");
    printf("Encontrar posição: (2)\n");
    scanf("%d\n", &Operacao);

    if(Operacao == 1){
        printf("Digite a posição do primo: ");
        scanf("%d\n", &Posicao);
        Primo = Procura_primo(Posicao);
    }

    printf("%d", Primo);

    return 0;
}