#include <stdio.h>
int arreglo(int A[100]);
int main(){
int A[100];
int a;
arreglo(A);
for(int i=0;i<100;i++){ //Lo unico que hago es recorrer el arreglo para imprimirlo
A[i];
printf("%d ",A[i]);

}

printf("\nHay %d",arreglo(A));
}


int arreglo(int A[100]){ // caargas el arreglo, cuando pasa 15, se rellena con -1
int cantidad;
for(int i=0;i<100;i++){
  if(i<16){
   A[i]=i;
cantidad=i;
  }else
  A[i]=-1;
}
return cantidad;
}

