  int n=encoded.size();
        vector<int> v(n+1);
        v[0]=first;
        
        for(int i=1;i<n+1;++i)
          v[i]=v[i-1]^encoded[i-1];
        return v;