#include<stdio.h>
#include<vector>
#include<string>
#include<iostream>


using namespace std;
void revers(vector<string> v,int i){
if(i==0) return;
printf("%s\n",v[i-1].c_str());
revers(v,i-1);
}
int main(){
int n;
vector<string> v;
string s;
while(getline(cin,s)&&s.compare("-1")!=0){
v.push_back(s);
}
revers(v,v.size());


}
