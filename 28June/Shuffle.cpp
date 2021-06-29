#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    int brr[n] ;
    int x=0;
    for(int i=0;i<n/2;++i)
    {
    brr[x] =arr[i] ;
    brr[x+1]=arr[i+n/2];
    x+=2;
    }
    for(int i=0;i<n;++i)
        cout<<brr[i]<<" ";
    cout<<endl;
}
