#include <stdio.h>

int interno=0, externo=0, trocas=0;

void booblesort(int *vetor, int n){
   interno=0, externo=0, trocas=0;
    int i, j, aux;
    for(i=0; i<n-1; i++){
    externo++;
        for(j=0; j<n-i-1; j++){
        interno++;
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                trocas++;
            }
        }
    }
}

void selection(int *vetor, int n){
   interno=0, externo=0, trocas=0
   int i, j, me, troca;
   for(i=0;i<n-1;i++){
      me=i;
      externo++;     
      for(j=i+1;j<n;j++){
      interno++;
         if(vetor[j]<vetor[me]){
            me = j; 
            trocas++;   
         }
      }
      if(me!=i){
         troca=vetor[i];
         vetor[i]=vetor[me];
         vetor[me]=troca;
      }   
   }
}

