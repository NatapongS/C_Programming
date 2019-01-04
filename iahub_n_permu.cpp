#include<stdio.h>
long long ex[2002],a[2002],cnr[2][2002],ans=0,mod=1e9+7;
int main(){
    long long n,x,ct=0,k=0;
    scanf("%lld",&n);
    for(long long i=1;i<=n;i++){
        scanf("%lld",&x);
        if(x==-1){
            ex[i]=1;
            k++;
        }
        else{
            a[x]=1;
        }
    }
    for(long long i=1;i<=n;i++){
        if(a[i]==0&&ex[i]==1) ct++;
    }
    cnr[0][0]=1,cnr[1][0]=1;
    for(long long i=1;i<=ct;i++){
        for(long long j=1;j<=i;j++){
            cnr[i%2][j]=(cnr[(i+1)%2][j]+cnr[(i+1)%2][j-1])%mod;
        }
    }
    a[0]=1;
    for(long long i=1;i<=k;i++){
        a[i]=(a[i-1]*i)%mod;
    }
    for(long long i=0;i<=ct;i++){
        ans+=(cnr[ct%2][i]*a[k-i])*(i%2==0?1:-1);
        ans%=mod;
        if(ans<0) ans+=mod;
    }
    printf("%lld",ans);
}
