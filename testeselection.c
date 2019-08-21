#include <stdio.h>

int interno=0, externo=0, trocas=0;

void selection(int *vetor, int n){
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

void main(){
   int v[5]={54,40,3,2,1};

   for(int i=0;i<5;i++)
      printf("%d-", v[i]);
   printf("\n");
   
   selection(v,5);

   for(int i=0;i<5;i++)
      printf("%d-", v[i]);
   printf("\n");  
   printf("externo: %d\n", externo);
   printf("interno: %d\n", interno);
   printf("trocas: %d\n", trocas);
}
