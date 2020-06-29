#include <stdio.h>
int main()
{
int i,j,c=0;
int num=0;
int matriz[100][10];
for(i=0;i<100;i++){
for(j=0;j<10;j++){
matriz[j][i]=num;
num++;
}
}
for(i=0;i<100;i++){
for(j=0;j<10;j++){
printf("%d ",matriz[j][i]);
c++;
if(c==10){
printf("\n");
c=0;
}

}}}
