#include<stdio.h>
int a[2005],ht[2005];
long long b[2005],c[2][2005],mod=1e9+7;
int main(){
    int n;
    long long sum=0,gat=0,ct=0,pv;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]!=-1) ht[a[i]]++;
        else ct++;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==-1&&ht[i]<1) gat++;
    }
    b[0]=1;
    for(long long i=1;i<=ct;i++){
        b[i]=i*b[i-1];
        b[i]%=mod;
    }
    c[0][1]=1;
    for(long long i=1;i<=gat;i++){
        for(long long j=1;j<=i+1;j++){
            c[i%2][j]=(c[(i+1)%2][j]+c[(i+1)%2][j-1])%mod;
        }
    }
    for(long long i=0;i<=gat;i++){
        sum+=c[gat%2][i+1]*b[ct-i]*(i%2==0?1:-1);
        sum%=mod;
        while(sum<0) sum+=mod;
    }
    printf("%lld",sum);






}
