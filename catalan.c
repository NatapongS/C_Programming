#include <stdio.h>
int main(){
int i;
scanf("%d",&i);
int a[i+1];
a[0]=1;
a[1]=1;
int m,n,o;
for(n=1;n<=i;n++){
o=0;
for(m=0;m<=n-1;m++){
o=o+a[m]*a[n-m-1];
}
a[n]=o;
}
printf("%d",a[i]);
}

