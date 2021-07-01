#include <bits/stdc++.h>
using namespace std;
int main(){
int n,toffees;  cin>>n;
int kids[n];
for(int i=0;i<n;++i)   cin>>kids[i];
cin>>toffees;
for(int i=0;i<n;++i){
    int maxele=*max_element(kids,kids+n);
    if(kids[i]+toffees>=maxele)  cout<<"true"<<" ";
    else    cout<<"false"<<" ";
}
}

