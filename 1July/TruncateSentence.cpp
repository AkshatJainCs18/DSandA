int l=s.length(),i;
        for(i=0;i<=l&& k>0;++i)
            k=(s[i]==' ')?k-1:k+0;
        return s.substr(0,i-1);