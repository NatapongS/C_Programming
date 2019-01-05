#include<bits/stdc++.h>
using namespace std;
bool s1(int x,int y){
    return x>y;
}
int a[5000000];
vector<int> v;
int main()
{
    int n,k;
    unordered_set<int> us;
    scanf("%d",&n);
    scanf("%d",&k);
    us.reserve(5*n);
    v.reserve(n);
    for(int i=0; i<n; i++) scanf("%d",&a[i]);
    if(a[0]>a[1])
    {
        v.push_back(a[0]);
        us.insert(a[0]);
    }
    int i=1;
    while(i<n-1)
    {
        if((a[i]>a[i-1]&&a[i]>a[i+1]))
        {
            if(us.find(a[i])==us.end())
            {
            v.push_back(a[i]);
            us.insert(a[i]);
            i+=2;
            }
            else i++;
        }
        else i++;
    }
    if(a[n-1]>a[n-2]&&us.find(a[n-1])==us.end()) v.push_back(a[n-1]);
    if(v.empty()) printf("-1");
    else
    {
        if(v.size()>=k)
        {
            sort(v.begin(),v.end(),s1);
            for(int i=0; i<k; i++)
            {
                printf("%d\n",v[i]);

            }
        }
        else
        {
            sort(v.begin(),v.end());
            for(auto i=v.begin();i!=v.end();i++){
                printf("%d\n",*i);
            }

        }
    }





}
