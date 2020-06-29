#include <stdio.h>
int main(){
int arr[1000];
int j,i;
int c=0;
for(i=0;i<=999;i++)
{
arr[i]=i;
printf("%d   ", i);
c++;
if(c == 10){
printf("\n");
c = 0;
}
}
}
