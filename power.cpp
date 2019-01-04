#include<stdio.h>
long long power(int a,int b){
    printf("b=%d\n",b);
    if(b==1) return (long long) a;
    long long x=power(a,b/2);
    printf("b=%d x=%lld\n",b,x);
    if(b%2==0) return x*x;
    return a*x*x;
}

int main(){
int a,b;
scanf("%d%d",&a,&b);
printf("%lld",power(a,b));


}
