#include <conio.h>


int main()
{
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int A[5];
int B[5];
int i;
int j=0;
int k=0;
for(i=0; i<10; i++) {  //recorrido el arreglo arr
    if(arr[i]%2 ==0){ //si arr^[i] es par
    A[j] = arr[i];
    j++;
}else{
    B[k] = arr[i]; //si no, arr[i] es impar
    k++;
 }}




return 0;
}


