#include <stdio.h>
int Max(int num1,int num2);
int Min(int num3,int num4);
bool espar(int num5);

int Max(int num1,int num2){
if(num1<num2){
return num2;
}}

int Min(int num3,int num4){
if(num3<num4){
return num3;
}}

bool espar(int num5){
if(num5%2==0){
return true;
}else{
return false;
}
}

int main(){
int num1=2;
int num2=4;
int num3=-2;
int num4=0;
int num5=7;
int a,b,c;
a=Max(num1,num2);
printf("El mayor es :%d\n",a);
b=Min(num3,num4);
printf("El menor es :%d\n",b);
c=espar(num5);
printf("Devuelve:%d",c);
}
