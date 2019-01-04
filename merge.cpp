#include<stdio.h>


int main()
{
    int la,lb;
    scanf("%d%d",&la,&lb);
    int a[la+1],b[lb+1],c[la+lb];
    for(int i=0; i<la; i++) scanf("%d",&a[i]);
    for(int i=0; i<lb; i++) scanf("%d",&b[i]);
    int it1=0,it2=0,cn=0;
    while(it1<la||it2<lb)
    {
        printf("it1=%d it2=%d a=%d b=%d\n",it1,it2,a[it1],b[it2]);
        if(it2==lb ||(a[it1]<b[it2] &&it1!=la))
        {
            c[cn++]=a[it1++];
        }
        else
        {
            c[cn++]=b[it2++];
        }
    }
    for(int i=0;i<la+lb;i++) printf("%d ",c[i]);




}
