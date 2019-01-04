#include<bits/stdc++.h>

using namespace std;
char c[2005][2005];
int main()
{
    int n,m,ans=0,x,y;
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%s",c[i]);
    }
    queue<pair<int,int>> p;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(c[i][j]=='1')
            {
                ans++;
                c[i][j]='0';
                p.push(make_pair(i,j));
                while(!p.empty())
                {
                    x=p.front().first;
                    y=p.front().second;
                    p.pop();
                    for(int l=-1; l<=1; l++)
                    {
                        for(int k=-1; k<=1; k++)
                        {
                            if((x+l>=0&&x+l<n&&y+k>=0&&y+k<m)&&c[x+l][y+k]=='1')
                            {
                                c[x+l][y+k]='0';
                                p.push(make_pair(x+l,y+k));
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d",ans);
}
