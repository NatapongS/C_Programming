#include<stdio.h>
int a;
struct st{
bool io;
}b[2][50005];
int ab(int a){
    return a>0?a:-a;
}
void clr(){
    b[0][0].io=true;
    b[1][0].io=true;
    for(int i=1;i<50005;i++){
        b[0][i].io=false;
        b[1][i].io=false;
    }
}
int main(){
    int t,n,qs=0,dif=-1;
    scanf("%d",&t);
    while(t--){
        clr();
       // printf("b[0]=%c ",b[0].io?'T':'F');
        dif=-1,qs=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&a);
            qs+=a;
            for(int j=a;j<=qs;j++){
                if(b[(i+1)%2][j].io)
                    b[i%2][j].io=true;
                else if(j>=a&&b[(i+1)%2][j-a].io){
                    b[i%2][j].io=true;
                }
            }
        }
      //  printf("qs=%d\n",qs);
        for(int i=0;i<=qs;i++){
            if(b[n%2][i].io){
                if(dif==-1||ab(2*i-qs)<dif)
                {
                        dif=ab(2*i-qs);
                     //   printf("get dif at %d = %d\n",i,dif);
                }
            }
        }
        printf("%d\n",dif);
    }


}
