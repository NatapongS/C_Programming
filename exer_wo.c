#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
int a=2*n-1;
for(int i=0;i<=n*n;i++)
{
if((i/n-i%n)%n==0 || (i/n-i%n)%n==0) printf("0");
else printf(i-1/a);
if(i%a==0) printf("\n");
}



}
