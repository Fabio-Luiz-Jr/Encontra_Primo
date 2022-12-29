#include <stdio.h>
#include <stdlib.h>
#include "primos.h"

int main(){
    int Operacao, Posicao, Primo, Aux;
    char Repete = 'S';

    while((Repete == 'S') || (Repete == 's')){
        system("clear");
        printf("Insira a operação desejada:\n");
        printf("Encontrar primo: (1)\n");
        printf("Encontrar posição: (2)\n");
        Aux = scanf("%d", &Operacao);
        if(Aux){
            if(Operacao == 1){
                printf("Digite a posição do primo: ");
                Aux = scanf("%d", &Posicao);
                if(Aux)
                    Procura_primo(Posicao);
                else
                    printf("Valor inválido.\n");
            } else if(Operacao == 2){
                printf("Digite o primo que deseja procurar: ");
                Aux = scanf("%d", &Primo);
                if(Aux)
                    Procura_posicao(Primo);
                else
                    printf("Valor inválido.\n");
            } else
                printf("Valor inválido.\n");
            printf("\nDeseja continuar?(S/N): ");
            scanf(" %c", &Repete);
        } else{
            printf("Valor inválido.\n");
            exit(0);
            }
    }
    return 0;
}
