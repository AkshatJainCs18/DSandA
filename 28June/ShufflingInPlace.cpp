#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;++i)
    cin>>arr[i];
  int j=n/2;
  for(int i=0;i<n;i+=2)
  {
    int k=arr[j];
    for(int l=j;l>i+1;--l)
        arr[l]=arr[l-1];
    arr[i+1]=k;
    j++;
   }
   for(int i=0;i<n;++i)
    cout<<arr[i]<<" ";
  
   cout<<endl;
   return 0;
}