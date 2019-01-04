#include<stdio.h>
void rn(int n)
{
    if(n==0)
    {
        printf("\n");
        return;
    }
    printf("%d",n%10);
    rn(n/10);
    return;
}

int main()
{
    int n;
    scanf("%d",&n);
    rn(n);

}
