#include<bits/stdc++.h>

using namespace std;
struct par{
int f;
int s;
bool operator < (const par p) const{
    return s<p.s;
}

};
int a[200002];
vector<pair<int,int>> gr[200002];
int main(){
    int n,m,x,y,z,t,ct=0;
    long long sum=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d%d%d",&x,&y,&z);
        gr[x].push_back(make_pair(y,z));
        gr[y].push_back(make_pair(x,z));
    }
    priority_queue<par> pq;
    pq.push({1,0});
    par p;
    while(!pq.empty()&&ct<n){
        p=pq.top();
        pq.pop();
        x=p.f;
        y=p.s;
        if(a[x]==0){
            a[x]=y;
            ct++;
            sum+=y;
            for(auto it=gr[x].begin();it!=gr[x].end();it++){
                z=it->first;
                t=it->second;
                if(a[z]==0&&z!=1){
                    pq.push({z,t});
                }
            }
        }
    }
    printf("%lld",sum-n+1);



}

