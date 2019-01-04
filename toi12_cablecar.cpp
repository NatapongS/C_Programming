#include<bits/stdc++.h>
using namespace std;

int a[2502];
vector<pair<int,int>> gr[2502];

struct node
{
    int nd;
    int val;
    bool operator < (const node &rhs) const
    {
        return val<rhs.val;
    }

};

int main()
{
    int n,m,x,y,z,t,beg,tar,tst;
    scanf("%d %d",&n,&m);
    for(int i=0; i<m; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        gr[x].push_back(make_pair(y,z));
        gr[y].push_back(make_pair(x,z));
    }
    scanf("%d%d%d",&beg,&tar,&tst);
    priority_queue<node> pq;
    node ndd;
    pq.push({beg,1000001});
    while(!pq.empty()){
        ndd=pq.top();
        pq.pop();
        x=ndd.nd;
        z=ndd.val;
        if(a[x]==0){
            a[x]=z;
            for(auto it=gr[x].begin();it!=gr[x].end();it++){
                y=it->first;
                t=it->second;
                if(a[y]==0) pq.push({y,min(t,z)});
            }
        }
        if(x==tar) break;
    }
    printf("%d",tst/(a[tar]-1)+(tst%(a[tar]-1)>0? 1:0));







}
