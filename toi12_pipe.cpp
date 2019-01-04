#include<bits/stdc++.h>
using namespace std;

int pm[15002];
pair<int,int> nd[15002];
int main()
{
    int n,k,x,y,sum=0,mi=-1,pos,s;
    scanf("%d%d",&n,&k);
    priority_queue<int> pq;
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&x,&y);
        nd[i]=make_pair(x,y);
    }
    for(int i=0; i<n; i++)
    {
        mi=-1;
        for(int j=0; j<n; j++)
        {
            if(pm[j]!=-1&&(mi==-1||pm[j]<mi))
            {
                mi=pm[j];
                pos=j;
            }
        }
        sum+=mi;
        pm[pos]=-1;
        if(pq.empty()||pq.size()<k-1)pq.push(-mi);
        else if(-pq.top()<mi){
            pq.pop();
            pq.push(-mi);
        }
        x=nd[pos].first;
        y=nd[pos].second;

        for(int j=0; j<n; j++)
        {

            if(pm[j]!=-1)
            {
                s=max(x,nd[j].first)-min(x,nd[j].first)+max(y,nd[j].second)-min(y,nd[j].second);
                if(s<pm[j]||pm[j]==0) pm[j]=s;
            }
        }

    }
    for(int i=0; i<k-1; i++)
    {
        sum+=pq.top();
        pq.pop();

    }
    printf("%d",sum);

}
