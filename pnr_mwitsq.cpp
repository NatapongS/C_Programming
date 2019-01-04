#include <stdio.h>
int a[15],b[15],c[10]={4,10,3,8,7,5,9,1,6,2},x,ct=0;
bool io=true;;
void pnr(int n){
   if(n==0) {
        ct++;
        {
        io=true;
        for(int i=0;i<=x-1;i++) if(c[i]!=a[x-i-1])io=false;
        if(io) printf("%d",ct);
        }
        return;
   }
    else{
    for(int i=1;i<=x;i++){
        if(b[i-1]==0){
            b[i-1]=1;
            a[n-1]=i;
            pnr(n-1);
            b[i-1]=0;
        }
    }
}
}

int main(){
int n;
scanf("%d",&n);
x=n;
for(int i=0;i<=n-1;i++) b[i]=0;
pnr(n);
return 0;
}
