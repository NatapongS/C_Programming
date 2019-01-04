#include<bits/stdc++.h>

using namespace std;
long long sum,a[1000005],i;
bool bs(long long m,long long n,long long k)
{
    sum=0;
    for(i=0;i<m;i++){
        sum+=k/a[i];
    }
    return sum>=n?true:false;
}

int main()
{
    long long m,n,mi=0,ma,mid,ct=0;
    scanf("%lld%lld",&m,&n);
    for(i=0; i<m; i++)
    {
        scanf("%lld",&a[i]);
        if(mi==0||a[i]<mi){
            mi=a[i];
            ct=1;
        }
        else if(a[i]==mi){
            ct++;
        }

    }
    ma=(n*mi)/ct+((n*mi)%ct==0 ? 0:n);
    while(ma>mi)
    {
        mid=(ma+mi)>>1;
        if(bs(m,n,mid))
        {
            ma=mid;
        }
        else
        {
            mi=mid+1;
        }
    }
    printf("%lld",mi);



}
