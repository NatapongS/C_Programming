#include<stdio.h>

char c[5000005];
int main(){
int n;
bool io=false;
scanf("%d",&n);
scanf("%s",c);
for(int i=1;i<n;i++){
    if(n%i==0){
        io=true;
        for(int j=0;j<i;j++){
           for(int k=1;k<n/i;k++){
                if(c[i*(k-1)+j]!=c[i*k+j]){
                    io=false;
                    break;
                }
           }
           if(!io) break;
        }
    }
    if(io){
        printf("%d",i);
        break;
    }

}
if(!io) printf("%d",n);

}
