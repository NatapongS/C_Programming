#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a=2*n-1;
    for(int i=1; i<=a*a; i++)
    {
        if((i-1)/a<n)
        {
            if(i%a+i/a==n || i%a-i/a==n ) printf("0");
                else printf("%d",(i-1)/a+1);
        }
        else
        {
            if(i%a+(a-i/a-1)==n ||i%a-(a-i/a-1)==n)  printf("0");
            else printf("%d",(i-1)/a+1);
        }
        if(i%a==0) printf("\n");
    }



}
