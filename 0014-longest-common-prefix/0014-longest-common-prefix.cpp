class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int k=0;
        string x="";
        if( strs.size()==1)
        return strs[0];
       string y=strs[0];
       for(int i=0;i<y.length();i++)
       {
           for(auto j:strs)
           {
               if(y[i]!=j[i])
               return x;
           }
           x+=y[i];
       }
       return x;

    //  int i,f=0,n=strs.size();
    // string s="";
    // for(i=0;i<strs[0].length();i++)
    // {
    //     int x=strs[0][i];
    //     f=0;
    //     for(auto j:strs)
    //     {
    //         if(i>j.length())
    //         return s;
    //         if(j[i]!=x)
    //         {
    //             f=1;
    //             break;
    //         }
    //     }
    //     if(f==0)
    //     s+=x;
    //     else
    //     break;
    // }
    // return s;

    }
};