#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    unordered_map<int,int>m;
    int gdp=0;
    for(int i=0;i<n;++i)
        gdp+=m[arr[i]]++;
    cout<<gdp-1;
}

