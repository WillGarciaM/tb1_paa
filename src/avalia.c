/*********************************************************
*          PROJETO E ANALISE DE ALGORITMOS               *
*                ORDENA��O DE VETOR                      *
*                                                        *
*            METODO:BUBLE SORT		                     *
*********************************************************/
#include <time.h>
#include <stdio.h>
#include <dos.h>
#include <malloc.h>
#include <stdlib.h>

typedef int TDATA;
typedef int TSIZE;

//adicionar custo para comparacao e troca
//este e o codigo de um bubblesort
/*********************************************************
* M�todo de ordena��o a ser implementado pelo grupo      *
/********************************************************/
int ordena(TDATA *vetor, TSIZE n)
{
	TSIZE i, j;
	TDATA aux;
  int custo;
	for (i = 0; custo++, i < n-1; i++)      
       // Last i elements are already in place   
       for (j = 0; custo++, j<n-i-1; j++) 
           custo++; if (vetor[j] > vetor[j+1]) {
			   custo++; aux = vetor[j]; vetor[j]=vetor[j+1]; vetor[j+1] = aux;
		   }
}

/*********************************************************
* Funcao Max      *
/********************************************************/
int custo;
TDATA Max(TDATA *vetor, TSIZE n) {
TDATA tmpMax;
int i;
  custo++; tmpMax = vetor[0];
  for (i = 1; custo++, i < n; i++)  {
  	custo++; if (tmpMax < vetor[i]) {
  	  custo++; tmpMax = vetor[i];
    }
  }
  custo++; return tmpMax;
}


le_vetor(TDATA *vetor, TSIZE n)
{
FILE *arq;
TSIZE i;
TDATA dado;

  if (vetor==NULL) {
    printf("Erro de alocacao de mem�ria!!\n");
    exit(0);
  }
  arq = fopen("dados.dat","rt");
  if (arq==NULL) {
    printf("O ARQUIVO entrada.dat NAO ESTA NO DIRETORIO CORRENTE\n");
    return 0;
  }
  for(i=0; i<n; i++) {
    if(fscanf(arq,"%d\n",&dado)==0)
    {
      printf("ERRO NA LEITURA DOS DADOS VERIFIQUE O ARQUIVO entrada.dat\n");
      exit(1);
    }
    vetor[i] = dado;
  }
  fclose(arq);
}

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
TDATA *origem, *destino;
TSIZE n, i, j, total;
clock_t clock0, clock1;
int nv;
int result;

  // obtem tempo inicial
  clock0 = clock();

  	for(nv=1;nv<=100; nv++) {
  
  
  		n = n + 100; // define vetor com 100000 posicoes
  
  		vetor = (TDATA *) malloc(n*sizeof(TDATA));

  		le_vetor(vetor, n);
      custo = 0;
  		//printf("Iniciando Ordenacao...\n");
  
  		result = Max(vetor,n);

  		//printf("Ordenacao Finalizada!!!\n");
  		//printf("%d\tTamanho\t%d\t%e\tsegundos\n",result,n,((double)((clock1 - clock0))/CLOCKS_PER_SEC));
      printf("%d\tTamanho\t%d\t%d\toperacoes\n",result,n,custo);
  		free(vetor);
   }
    // obtem tempo final
    clock1 = clock();
    printf("tempo de duracao: %d", ((double)((clock1 - clock0))/CLOCKS_PER_SEC));
}
