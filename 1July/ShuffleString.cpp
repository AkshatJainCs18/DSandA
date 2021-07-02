 int n=indices.size();
       
        string temp=s;
        for(int i=0;i<n;++i)
            temp.at(indices[i])=s.at(i);
        return temp;