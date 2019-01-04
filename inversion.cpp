#include<stdio.h>
int inv=0;
void mergSort(int beg,int ter,int a[])
{
    if(beg==ter) return;
    int k=(beg+ter)/2;
    mergSort(beg,(beg+ter)/2,a);
    mergSort((beg+ter)/2+1,ter,a);
    int m[ter-beg+2];
    int it1=beg,it2=k+1,cn=0;
    while(it1<=k|it2<=ter)
    {
        if(it2>ter || (a[it1]<a[it2]&&it1<=k))
        {
            m[cn++]=a[it1++];
            inv+=it2-k-1;
        }
        else
        {
            m[cn++]=a[it2++];
        }
    }
    for(int i=beg; i<=ter; i++) a[i]=m[i-beg];
    return;
}

int main()
{
    int x;
    scanf("%d",&x);
    int a[x+1];
    for(int i=0; i<x; i++)
    {
        scanf("%d",&a[i]);
    }
    mergSort(0,x-1,a);
    printf("%d\n",inv);



}
