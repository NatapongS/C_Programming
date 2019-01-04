#include<stdio.h>
#include<string>
bool isPalindrome(char c[],int l,int r){
if(l>=r) return true;
if(c[l]!=c[r]) return false;
return isPalindrome(c,l+1,r-1);
}

int main(){
char c[1000];
scanf("%s",&c);
int x;
for(x=0;c[x]!='\0';x++);
printf("%s",isPalindrome(c,0,x-1)?"true":"false");
}
