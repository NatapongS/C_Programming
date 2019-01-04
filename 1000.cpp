#include<stdio.h>
int b;
bool stcomp(char* a,char* d)
{
    int count=0;
    for(int i=0; i<=b-1; i++)
    {
        if(a[i]!=d[i]){
                count++;
        if(count==3) return false;
        }

    }
    return true;
}

int main()
{
    int a;
    scanf("%d%d",&b,&a);
    char d[b],c[b];
    scanf("%s",d);
    int i;
    for(i=2; i<=a; i++)
    {
        scanf("%s",c);
        if(stcomp(c,d)==false)
        {
            break;
        }
        else for(int j=0; j<=b-1; j++)
            {
                d[j]=c[j];
            }

    }

    while(++i<=a)
    {
        scanf("%s",c);

    }


    printf("%s",d);
}
