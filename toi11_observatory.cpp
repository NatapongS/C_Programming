#include<bits/stdc++.h>

using namespace std;
int qs[2002][2002];
int main(){
int n,m,k,pos1,pos2,pat;
long long s1,s2,ma=-1e12;
scanf("%d%d%d",&n,&m,&k);
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        scanf("%d",&qs[i][j]);
        qs[i][j]+=qs[i][j-1];
    }

}
for(int i=1;i<=n-k+1;i++){
    for(int j=1;j<=m-k+1;j++){
        s1=0,s2=0;
        for(int l=0;l<k;l++){
            s1+=qs[i+l][j+l]-qs[i+l][j-1];
            s2+=qs[i+l][j+k-l-1]-qs[i+l][j-1];
        }
        if(s1>ma) {
            ma=s1;

        }
        if(s2>ma){
            ma=s2;

        }
    }

}
printf("%lld",ma);


}

