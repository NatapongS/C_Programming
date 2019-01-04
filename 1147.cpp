#include<bits/stdc++.h>
using namespace std;
int st[524289],x,y,z;

int update(int a,int beg,int tar)
{
    //printf("at %d beg=%d y=%d\n",a,beg,tar);
    if(beg==tar){
        st[a]=y;
        //printf("st[%d]=%d",a,st[a]);
        return y;
    }
    if(x<=(beg+tar-1)/2){
        z=update(2*a,beg,(beg+tar-1)/2);
    }

    else z=update(2*a+1,(beg+tar-1)/2+1,tar);
    st[a]=max(st[2*a],st[2*a+1]);
    //printf("st[%d]=%d\n",a,st[a]);
}
int query(int a,int x,int y,int beg,int tar)
{
     // printf("at %d beg=%d tar=%d x=%d y=%d\n",a,beg,tar,x,y);

    if(x==beg&&y==tar){
        return st[a];
    }
    if(x<=(beg+tar-1)/2){
        if(y>(beg+tar-1)/2)return max(query(2*a,x,(beg+tar-1)/2,beg,(beg+tar-1)/2),query(2*a+1,(beg+tar-1)/2+1,y,(beg+tar-1)/2+1,tar));
        else return query(2*a,x,y,beg,(beg+tar-1)/2);
    }
    else return query(2*a+1,x,y,(beg+tar-1)/2+1,tar);

}
int main()
{
    int n,m,bi;
    char c[2];
    fill(st,st+524289,-1e9-10);
    scanf("%d%d",&n,&m);
    for(bi=1;bi<n;bi*=2);
    fill(st,st+2*bi,0);
    for(int i=0; i<m; i++)
    {
        scanf("%s%d%d",c,&x,&y);
        if(c[0]=='U'){
            update(1,1,n);
        }
        else{
            printf("%d\n",query(1,x,y,1,n));
        }
    }

}
