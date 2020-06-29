#include <stdio.h>
void Array(int A[100]);
int main(){
int A[100];
int prom,ord,num,i,j=0;
int d=1;
Array(A);
for(int i=0;i<100;i++){
prom=d*A[i];
}
prom/100;
printf("El promedio del array es:%d\n",prom);
for (j = 0; j< 100; j++){
		for (i = 0; i< 100; i++){
			if (A[i] > A[i+1]){
			ord = A[i];
			A[i] = A[i+1];
			A[i+1] = ord;
			}
		}}
for (i = 0;i < 100; i++){
printf("en la posicion %d tengo %d\n",i,A[i]);
}
}
void Array(int A[100]){
    int par=0;
    int impar=0;
    int i=0;
    bool ran=false;
for(i=0;i<100;i++){
    if(ran==false){
    A[i]=4*i;
    ran=true;
    }else{
    A[i]=3*i;
    ran=false;
}}
for(i=0;i<100;i++){
    if(A[i]!=0){
    if(A[i]%2==0){
    par++;
    }
    else{
    impar++;
    }}
printf(" %d",A[i]);
}
printf("hay %d pares\n",par);
printf("hay %d impares\n",impar);
}


