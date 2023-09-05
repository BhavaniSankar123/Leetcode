class Solution {
public:
    string convert(string s, int numRows) {
        string x="";
        if(numRows==1)
      return s;
        int n,i,pos,s1,s2;
        n=s.size();
        for(i=0;i<numRows;++i){
            s1=(numRows-i-1)*2;
            s2=(i)*2;
             pos=i;
            if(pos<n)
                x+=s.at(pos);
            while(true)
            {
                pos+=s1;
                if(pos>=n)
                    break;
          if(s1)
          x+=s.at(pos);
                pos+=s2;
                if(pos>=n)
                    break;
        if(s2)
          x+=s.at(pos);
            }
        }
        return x;
    }
};