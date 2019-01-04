#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100005],n,c,ma,mi,mid;
void clr()
{
    for(int i=0; i<100005; i++)
    {
        a[i]=0;
    }
}
bool cow(int x)
{
    int k=c-1,itr=1,pre=a[0];
    //printf("at distance %d\n",x);
    while(k>0&&itr<n)
    {
        for(; itr<n&&a[itr]-pre<x; itr++);
        if(itr<n)
        {
            k--;
            //printf("cow %d at %d\n",c-k,a[itr]);
        }
        pre=a[itr];
        itr++;

    }
    if(k>0)
    return false;
    return true;
}
int bs()
{
    mi=1,ma=a[n-1],mid=(ma+mi)>>1;
    while(ma>mi)
    {
        mid=(ma+mi)>>1;
        if(mid==mi)
            mid++;
        if(cow(mid))
            mi=mid;
        else
            ma=mid-1;
    }
    return mi;


}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        clr();
        scanf("%d%d",&n,&c);
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        sort(a,a+n);
        //for(int j=0;j<n;j++) printf("%d ",a[j]);
        printf("%d\n",bs());

    }



}
