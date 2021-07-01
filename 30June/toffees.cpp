#include <bits/stdc++.h>
using namespace std;
int main(){
int n;  cin>>n;
vector<int>kids;
for(int i=0;i<n;++i){
    int k;cin>>k;
    kids.push_back(k);
}
int toffees;
cin>>toffees;
for(int i=0;i<kids.size();++i){
    int maxele=*max_element(kids.begin(),kids.end());
    if(kids[i]+toffees>=maxele)  cout<<"true"<<" ";
    else    cout<<"false"<<" ";
}
}

