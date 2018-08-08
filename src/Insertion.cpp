#include "Insertion.hpp"

void insertion(int vet[], int tam){

    int i = 0, j = 0, value = 0;

    //I começando do 1, pois o primeiro caso precisa ser fixo, de modo a ter a parte do vetor ordenada.
    for(i = 1; i < tam; i++){

        value = vet[i];
        j = i - 1; 
    
        //Move os elementos que são maiores que o valor obtido, uma casa à frente.
        while(j >= 0 && vet[j] > value){
            vet[j+1] = vet[j];
            j = j - 1;
        }

        vet[j+1] = value;
    }

    for(int i = 0; i < tam; i++){
        cout << vet[i] << ", ";
    }

}