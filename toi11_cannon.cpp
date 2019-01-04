#include<bits/stdc++.h>

using namespace std;
int a[1000002],b[1005];
int main()
{
    int n,m,k,l,itr,sum;
    scanf("%d%d%d%d",&n,&m,&k,&l);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    sort(a,a+n);
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&b[j]);
        }
        sort(b,b+m);
        itr=0,sum=0;
        for(int j=0; j<m; j++)
        {
            if(itr>=n) break;
            while(itr<n && a[itr]<=b[j]+l){
                if(a[itr]>=b[j]-l) sum++;
                itr++;
            }
        }
        printf("%d\n",sum);


    }




}
