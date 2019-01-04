#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=2553;
int n,k;
int dp[500][500];
main()
{

    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<500;i++) for(int j=0;j<500;j++) dp[i][j]=0;
        cin>>n>>k;
        dp[0][0]=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                for(int v=1; v<=k; v++)
                {
                    if(i>=v)
                        dp[i][j]+=dp[i-v][j-1];
                    dp[i][j]%=mod;
                }
            }
        }
        int x=0,v=0;
        for(int i=1; i<=n; i++)
        {
            printf("at %lld=%lld\n",i,dp[n][i]);
            v=dp[n][i]*dp[n][i]*dp[n][i];
            x+=v;
            x%=mod;
        }
        x%=mod;
        cout<<x<<"\n";
    }
}
