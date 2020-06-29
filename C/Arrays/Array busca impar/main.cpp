#include <stdio.h>

int main()
{
    int arr[10] = {44,2,2,4,17,6,30,8,4,7};
    int i=0;
    while(arr[i]%2 ==0){
        printf("el num del dice %d es:%d\n",i,arr[i]);
        i++;
    }

printf("me encontre con el impar:%d",arr[i]);


}
