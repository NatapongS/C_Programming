#include<stdio.h>

int as(int a){
printf("%d",a);
a++;
return a;
}

int main(){
int a=10;
a=as(a);
printf("%d",a);
}
