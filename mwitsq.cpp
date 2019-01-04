#include<stdio.h>
int a[20],sum=0;
int main()
{

    int n,l,r;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=1; i<n-1; i++)
    {
        l=0,r=0;
        for(int j=0; j<i; j++)
            if(a[j]>a[i])
                l++;
        if(l!=0)
            for(int j=i+1; j<n; j++)
                if(a[j]<a[i])
                    r++;
        sum+=l*r;
        printf("%d: %d %d\n",i,l,r);
    }
    printf("sum:%d",sum);

}
