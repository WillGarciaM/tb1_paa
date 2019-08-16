#include <stdio.h>

void booblesort(int *v, int n){
    int i, j, aux;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void main() {
    int v1[14] = {7,3,4,5,6,7,10,19,20,56,45,23,2,1};
    size_t n = (sizeof(v1)/sizeof(int)); //tamanho do vetor
    printf("%d", n);
    booblesort(v1, 14);

    int i=0; printf("1 = \n");
    while(i < 14){
        printf("%d ", v1[i]);
        i++;
    }
}
