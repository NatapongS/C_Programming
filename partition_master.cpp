#include<stdio.h>
int a[45],n;
int mini(int a,int b){
    return a<b?a:b;
}
void par(int val,int pos){
    if(val>=n){
      for(int i=1;i<pos;i++){
            printf("%d ",a[i]);
      }
      printf("\n");
      return;
    }
    for(int i=mini(a[pos-1],n-val);i>0;i--){
        a[pos]=i;
        par(val+i,pos+1);
    }
}
int main(){
    scanf("%d",&n);
    a[0]=999;
    par(0,1);

}
