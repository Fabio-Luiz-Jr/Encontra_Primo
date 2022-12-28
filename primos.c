#include <stdio.h>
#include <stdlib.h>
#include "primos.h"

void Imprime(int Op, int Primo, int Posicao){
    if(Op)
        printf("\nO %dº número primo é %d.\n", Posicao, Primo);
    else
        printf("\nO número %d é o %dº número primo.\n", Primo, Posicao);
}

int *Aloca_memoria(int Size){
    int *Novo;
    Novo = malloc(Size * sizeof(int));
    
    if(Novo == NULL){
        printf("Memória insuficiente.");
        exit(0);
    }
    return Novo;
}

void Procura_primo(int Posicao){
    int Primo, *Array_primos;
    double pct = -1.00;

    if(Posicao < 1){
        printf("Posição inválida.");
        return;
    }

    Array_primos = Aloca_memoria(Posicao);

    for(int i = 2, p = 0; p < Posicao; i++){
        if(p * 100.00 / Posicao > pct){
            pct = p * 100.00 / Posicao;
            printf("%.2lf%% concluido.\n", pct);
        }

        if(i > 2)
            for(int j = 0; j < p; j++){
                if(i % Array_primos[j] == 0)
                    break;
                else if(j + 1 == p){
                    Array_primos[p] = i;
                    p++;
                }
            }
        else{
            Array_primos[p] = i;
            p++;
        }
    }
    Primo = Array_primos[Posicao - 1];
    free(Array_primos);
    
    Imprime(1, Primo, Posicao);
}

void Procura_posicao(int Primo){
    int Posicao = 0, *Array_primos;
    double pct = -1.00;

    if(Primo < 2){
        printf("%d Não é primo.\n", Primo);
        return;
    }

    Array_primos = Aloca_memoria(Primo / 2 + 1);

    for(int i = 2, p = 0; i <= Primo; i++){
        if(i * 100.00 / Primo > pct){
            pct = i * 100.00 / Primo;
            printf("%.2lf%% concluido.\n", pct);
        }

        if(i > 2)
            for(int j = 0; j < p; j++){
                if(i % Array_primos[j] == 0)
                    break;
                else if(j + 1 == p){
                    Array_primos[p] = i;
                    p++;
                    if(i == Primo)
                        Posicao = p;
                }
            }
        else{
            Array_primos[p] = i;
            p++;
            if(i == Primo)
                Posicao = p;
        }
    }
    free(Array_primos);

    if(Posicao > 0)
        Imprime(0, Primo, Posicao);
    else
        printf("O número %d não é primo.\n", Primo);
}