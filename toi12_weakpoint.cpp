#include<bits/stdc++.h>

using namespace std;
vector<int> gr[500002];
int cnt[500002],ma=0,pos;
int dfs(int n,int m,int beg){
    if(n==beg) cnt[n]=beg;
    else{
        if(m==beg) cnt[n]=n;
        else cnt[n]=m;
    }

    bool freedom=false;
    int sum=0;
    for(auto it=gr[n].begin();it!=gr[n].end();it++){
        if(cnt[*it]==0){
            int x=dfs(*it,cnt[n],beg);
            if(x!=-1) sum+=x+1;
            else freedom=true;
        }
        else{
        if(cnt[*it]!=cnt[n]) freedom=true;
        }
    }
    if(freedom&&n!=beg){
        cnt[n]=n;
        if(sum>ma){
            ma=sum;
            pos=n;
        }
        else if(sum==ma){
            if(pos==0||pos>n) pos=n;
        }

    }
   // printf("at:%d sum=%d head=%d\n",n,sum,cnt[n]);
    if(freedom) return -1;
    else return sum;

}



int main(){
    int n,m,x,y;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    dfs(m,m,m);
    printf("%d\n%d",pos,ma);

}
