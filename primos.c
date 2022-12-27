#include <stdlib.h>
#include "primos.h"

int *Aloca_memoria(int Size){
    int *Novo;
    Novo = malloc(Size * sizeof(int));
    
    if(Novo == NULL){
        printf("Memória insuficiente.");
        exit(0);
    }
    return Novo;
}

int Procura_primo(int Posicao){
    int Primo, *Array_primos;
    Array_primos = Aloca_memoria(Posicao);
    for(int i = 2, p = 0; p < Posicao; i++){
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
    return Primo;
}

int Procura_posicao(int Primo){
    return 0;
}