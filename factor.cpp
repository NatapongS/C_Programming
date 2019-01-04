#include<stdio.h>


int main(){
    int ma=0,fa;
    for(int i=1;i<=5000000;i++){
        fa=0;
        for(int j=1;j<=i;j++){
            if(i%j==0) fa++;
        }
        printf("%d:%d\n",i,fa);
        if(fa>ma) ma=fa;
    }
    printf("%d",ma);



}
