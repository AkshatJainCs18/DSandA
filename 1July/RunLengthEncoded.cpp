   vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i+=2)
        {
            if((i+1)<n){
                int k=nums[i];
                for(int j=0;j<k;++j)
                    v.push_back(nums[i+1]);
        }
    }return v;