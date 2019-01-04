#include<bits/stdc++.h>

using namespace std;
int con[3][3]= {{2,1,0},{2,1,1},{1,2,1}};
int main()
{
    int n;
    char c[258];
    for(int tc=0; tc<20; tc++)
    {
        scanf("%d%s",&n,c);
        int a[n][n][3];
        memset(a,0,sizeof(a));
        for(int i=n-1; i>=0; i--)
        {
            a[i][i][c[i]-'0']=1;
            for(int j=i; j<n; j++)
            {
                for(int k=i+1; k<n; k++)
                {
                    for(int l=0; l<3;l++){
                        for(int m=0;m<3;m++){
                            if(a[i][k-1][l]==1&&a[k][j][m]==1) a[i][j][con[l][m]]=1;
                        }
                    }
                }
            }
        }
        if(a[0][n-1][0]==1) printf("yes");
        else printf("no");
        printf("\n");
    }
}






