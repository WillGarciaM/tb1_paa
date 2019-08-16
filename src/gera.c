/*********************************************************
*          PROJETO E ANALISE DE ALGORITMOS               *
*********************************************************/
#include <time.h>
#include <stdio.h>
#include <dos.h>
#include <malloc.h>
#include <stdlib.h>

typedef int TDATA;
typedef int TSIZE;



grava_vetor(TDATA *vetor, TSIZE n)
{
FILE *arq;
TSIZE i;

  arq = fopen("saida.dat","wt");
  if (arq==NULL) {
    printf("O ARQUIVO entrada.dat NAO PODE SER CRIADO\n");
    return 0;
  }
  for(i=0; i<n; i++)
    fprintf(arq,"%d\n",vetor[i]);
  fclose(arq);
}

int main(void)
{	
TDATA *vetor;
TSIZE n, i,j;

    n = 200000;
	vetor = (TDATA *) malloc(n*sizeof(TDATA));

    
    j=0;
  	for(i=n;i>=1; i--) {
		vetor[j] = i;  
		j++;
	}
  
    grava_vetor(vetor,n); 
  
  	free(vetor); 	
}
