#include <stdio.h>

int externo, interno, trocas;

void booblesort(int *vetor, int n){
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

void main() {
    int v1[5] = {5,4,3,2,1}, i=0;
    //size_t n = (sizeof(v1)/sizeof(int)); //tamanho do vetor
   for(i=0;i<5;i++)
      printf("%d ", v1[i]); 
   
   printf("\n");
   booblesort(v1, 5);

   for(i=0;i<5;i++)
      printf("%d ", v1[i]); 

   printf("\nexterno: %d", externo);
   printf("\ninterno: %d", interno);
   printf("\ntrocas: %d\n", trocas);
}
