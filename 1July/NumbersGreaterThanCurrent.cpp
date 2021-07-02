int n=nums.size();
        vector<int>v=nums;
        sort(v.begin(),v.end());
        unordered_map<int,int>mp;
        for(int i=n-1;i>=0;--i)
            mp[v[i]]=i;
        for(int i=0;i<n;++i)
            nums[i]=mp[nums[i]];
      return nums;