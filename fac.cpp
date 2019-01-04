#include<stdio.h>

long long fac(int n)
{
    if(n==0) return 1;
    return n*fac(n-1);


}
main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d",&n);
        printf("%lld\n",fac(n));
    }

}
