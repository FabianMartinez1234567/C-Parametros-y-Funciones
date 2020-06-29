#include <stdio.h>
#include <random>
int Array1(int A[100]);
int Array2(int B[100]);
int Array3(int A[100],int B[100],int C[100]);
int main(){
int A[100];
int C[100];
int B[100];
Array1(A);
Array2(B);
Array3(A,B,C);
for(int i=0;i<100;i++){
printf("en la posicion %d tengo %d\n",i,i[C]);
}

}
int Array1(int A[100]){
int num,i;
    for(i=0;i<100;i++){
  if(i<75){
  num=1+rand()%(1000);
  A[i]=num;
    }else{
    A[i]=-1;
    }
}}
int Array2(int B[100]){
int num,i;
    for(i=0;i<100;i++){
  if(i<50){
  num=1+rand()%(1000);
  B[i]=num;
    }else{
    B[i]=-1;
    }
}}
int Array3(int A[100],int B[100],int C[100]){
    int ord;
    for(int i=0;i<100;i++){
    C[i]=A[i]+B[i];

}
	for (int i = 0; i < 100; i++) {
		for (int j; j < 100; j++) {
			if (C[j] > C[j + 1]) {
				ord = C[j];
				C[j] = C[j + 1];
				C[j + 1] = ord;
			}if else(C[j] == C[j + 1]) {
				ord = C[j];
				C[j] = C[j + 1];
				C[j + 1] = -1;

			}
		}
	}

}

}
