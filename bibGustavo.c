#include <stdio.h>
#include <stdlib.h>

void preecheMatriz(int linhas, int colunas, int vet[][1]){
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      scanf("%d",&vet[i][j]);
    }
  }
}

void imprimeMatriz(int l, int c, int vet[][1]){
  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      printf("%d", vet[i][j]);
    }
  }
}

int somaTsMatriz (int l, int c, int vet[][1]){
  int soma = 0;
  
  for(int i = 0; i < l; i++){
    for(int j = 0; j < c - 1; j++){
      if( i + j < c  - 1){
        soma += vet[i][j];
      }
    }
  }
  
  return soma;
}

int *preencherMatriz(int l, int c){
  
  int *array = (int *) malloc(l * c * sizeof(int));
  
  for(int i = 1; i <= l; i++){
    for(int j = 1; j <= c; j++){
      scanf("%d", array + i * l + j);
    }
  }
  
  return array;
  
}

int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  preencherMatriz(a,b);
  
  
}