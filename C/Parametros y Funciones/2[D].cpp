#include<stdio.h>
int Array(int A[100],int num);
int main(){
int A[100];
int num=21;
int c;
c=Array(A,num);

printf("%d ",c);
}

int Array(int A[100],int num){
for(int i=0;i<100;i++){
if(i<17){
A[i]=i;
}
else if(i==55){
A[i]=num;
return i;
}
else{
A[i]=-1;
}

}


}
