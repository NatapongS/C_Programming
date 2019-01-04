#include<stdio.h>
int itos(char *a,int n,int m)
{
    if(n==0)
    {
        *(a+m)='\0';
        return m;
    }
    char x=n%10+'0';
    int k=itos(a,n/10,m+1);
    *(a+k-m-1)=x;
    return k;

}
int main(){
int n;
char a[100];
scanf("%d",&n);
if(n<0) {
    n=-n;
    a[0]='-';
    itos(a+1,n,0);
}
else if(n==0){
    a[0]='0';
    a[1]='\0';
}
else itos(a,n,0);
for(int i=0;a[i]!='\0';i++){
    printf("%c ",a[i]);
}
}
