#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    int j=0;
    for(int i=0;i<n;++i)
    {   if(i!=n-1){
        if((arr[i]!=arr[i+1]))

            arr[j++]=arr[i];
    }
        else
            arr[j++]=arr[i];
    }
    for(int i=0;i<j;++i)
        cout<<arr[i]<<" ";
    cout<<endl;
}
