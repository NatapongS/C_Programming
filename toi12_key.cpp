#include<stdio.h>
int dp[1001][1001];

int main()
{
    char a[1003],b[1003],c[2003];
    scanf("%s%s",a,b);
    int n,l=0,ll=0,j;
    for(l=0;a[l]!='\0';l++);
    for(ll=0;b[ll]!='\0';ll++);
    bool io;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",c);
        for(int j=0;j<=l;j++){
            for(int k=0;k<=ll;k++){
                dp[j][k]=0;
            }
        }
        dp[0][0]=1;
        for(int j=0;c[j]!='\0';j++){
            for(int k=0;k<j+1&&k<=l;k++){
                if(dp[k][j-k]==1){
                    if(a[k]==c[j]) dp[k+1][j-k]=1;
                    if(b[j-k]==c[j]) dp[k][j-k+1]=1;
                }
            }
        }
       /* for(int j=0;j<=l;j++){
            for(int k=0;k<=ll;k++){
                printf("%d ",dp[j][k]);
            }
            printf("\n");
        }*/
        printf("%s\n",dp[l][ll]?"Yes":"No");
    }

}
