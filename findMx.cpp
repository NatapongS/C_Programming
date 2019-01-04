#include<stdio.h>
int findMx(int be,int fi,int a[])
{
    if(be==fi) return a[be];
    int m=findMx(be,(fi+be-1)/2,a);
    int n=findMx((fi+be-1)/2+1,fi,a);
    return  m>n?m:n;
}
int main()
{
    int x;
    scanf("%d",&x);
    int a[x+1];
    for(int i=1; i<=x; i++)
    {
        scanf("%d",&a[i]);
    }
    if(x!=0)printf("%d",findMx(1,x,a));
}
