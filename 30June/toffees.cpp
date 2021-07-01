#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>kids;
for(int i=0;i<n;++i)
{
    int k;cin>>k;
    kids.push_back(k);
}
int toffees;
cin>>toffees;
vector<string>v;
for(int i=0;i<kids.size();++i)
{   int maxele=*max_element(kids.begin(),kids.end());
    if(kids[i]+toffees>=maxele)
        v.push_back("true");
    else
        v.push_back("false");
}
    for(int i=0;i<v.size();++i)
        cout<<v[i]<<" ";
}
