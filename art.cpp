#include<bits/stdc++.h>
using namespace std;
struct st
{
    int pos;
    int h;
    int w;
    bool operator < (const st pp) const
    {
        return pos<pp.pos;
    }


} c[200005];
int a[200005],ft[100005],sum,x,ma,mi,mid;

void update(int a,int b,int l)
{
    for(; a<=b; a+=a&-a)
    {
        ft[a]+=l;
    }

}
int query(int pos)
{
    sum=0;
    for(; pos>0; pos-=pos&-pos)
    {
        sum+=ft[pos];
    }
    return sum;

}
int lbound(int a)
{
    ma=1,mi=x;
    while(ma<mi)
    {
        mid=(ma+mi)>>1;
        if(mid==ma) mid++;
     //   printf("before mi=%d ma=%d mid=%d",mi,ma,mid);
       // printf(" get %d ",query(mid));
        if(query(mid)>=a) ma=mid;
        else mi=mid-1;
     //   printf("after mi=%d ma=%d mid=%d\n",mi,ma,mid);
    }
    if(mi==0) return -1;
    if(query(mi)!=a) return -1;
    return mi;

}
int ubound(int a)
{
    ma=1,mi=x;
    while(ma<mi)
    {
        mid=(ma+mi)>>1;
        if(mid==ma) mid++;
        if(query(mid)>a) ma=mid;
        else mi=mid-1;
    }
  //  printf("get %d ",mi);
    if(query(mi)<=a) mi--;
  //  printf("after get %d\n",mi);
    return mi;


}

int main()
{
    int n,s,h,w,o,t,*pt,mt,u,l;
    long long ss=0;
    scanf("%d%d",&n,&t);
    for(int i=0; i<n; i++)
    {
        scanf("%d%d%d%d",&s,&h,&o,&w);
        a[i]=h;
        c[i]= {s,h,w};
        c[n+i]= {s+o,h,-w};
    }
    sort(a,a+n);
    pt=unique(a,a+n);
    x=pt-a;
    sort(c,c+2*n);
    for(int i=0; i<2*n; i++)
    {
        s=c[i].pos;
        h=lower_bound(a,pt,c[i].h)-a+1;
        w=c[i].w;
        update(1,x,w);
        update(h+1,x,-w);
        if(i==2*n-1||s!=c[i+1].pos)
        {
            l=lbound(t);
            if(l!=-1)
            {
                l=a[l-1];
                u=ubound(t);
                u=u>0?a[u-1]:0;
                if(i==2*n-1) mt=1;
                else mt=c[i+1].pos-s;
                ss+=(long long)((long long)mt*((long long)l-(long long)u));
            }
        }
      //  printf("at %d mt=%d l=%d u=%d ss=%lld\n",s,mt,l,u,ss);

    }
    printf("%lld",ss);



}
