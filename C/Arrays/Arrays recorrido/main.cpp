#include <stdio.h>


int main()
{
//int arr[10] = {1,2,3,4,5,6,7,8,9,10}
int arr[100];
int i;
for(i=0;i<100;i++){
    arr[i] = i;
}
for(i=0;i<10;i++){
    printf("El arreglo en la posicion %d tengo:%d\n",i,arr[i]);
}



return 0;
}
