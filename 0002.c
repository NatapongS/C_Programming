#include <stdio.h>
int main(){
int i,j,k,l=0,mi,ma;
scanf("%d",&i);
int a[i];
for(j=0;j<=i-1;j++){
scanf("%d",&a[j]);
}
while(l<=i-1){
k=0;
while(a[l]<=a[k]){
k++;
if(k==i){
mi=a[l];
}
}
k=0;
while(a[l]>=a[k]){
k++;
if(k==i){
ma=a[l];
}
}
l++;
}
printf("%d\n%d",mi,ma);
}
