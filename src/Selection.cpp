#include "Selection.hpp"

void selection(int vet[], int tam){

    int aux, smaller;

    if(tam > 1){

        for(int i = 0; i < tam-1; i++){
        
            smaller = i;

            for(int i2 = i+1; i2 < tam; i2++){
            
                if(vet[i2] < vet[smaller]){
                    smaller = i2;
                }

            }
    
            aux = vet[i];
            vet[i] = vet[smaller];
            vet[smaller] = aux;

        }

    }

    for(int i = 0; i < tam; i++){
        cout << vet[i] << ", ";
    }

}