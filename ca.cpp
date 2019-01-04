#include<stdio.h>
int fac[11];
int main()
{
    int x=1;
    fac[0]=1;
    int sum=0;
    for(int i=1; i<=10; i++)
    {
        fac[i]=fac[i-1]*i;
        printf("%d ",fac[i]);

    }
    for(int i=1; i<=10; i++)
    {
        scanf("%d",&x);
        printf("%d\n",x*fac[10-i]);
        sum+=x*fac[10-i];
    }
    printf("%d",sum);


}
