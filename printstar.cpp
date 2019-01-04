#include<stdio.h>
void printstar(int n){
if(n==0){
    printf("\n");
    return;
}
printf("*");
printstar(n-1);
return;
}
int main(){
int a;
scanf("%d",&a);
printstar(a);

}
