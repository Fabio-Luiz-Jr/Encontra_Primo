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
    return Primo;
}

int Procura_posicao(int Primo){

}