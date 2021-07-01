#include <bits/stdc++.h>
using namespace std;
int main()
{   int m,n;
    cin>>m>>n;
    vector<vector<int>>accounts;
    vector<int>sum;
    for(int i=0;i<m;++i){
            vector <int>temp;
        for(int j=0;j<n;++j)
        {   int k;
            cin>>k;
            temp.push_back(k);
        }
        accounts.push_back(temp);
    }
    for(int i=0;i<accounts.size();++i)
        sum.push_back(accumulate(accounts[i].begin(),accounts[i].end(),0));
    cout<<1+max_element(sum.begin(),sum.end())-sum.begin();
}
