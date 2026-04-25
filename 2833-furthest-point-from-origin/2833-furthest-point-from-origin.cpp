class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,_=0,i=0,n=moves.length();
        while(i<n)
        {
            l+= (moves[i] == 'L');
            r+= (moves[i] == 'R');
            _+= (moves[i] == '_');
            i++;
            // cout<<l<<r<<_<<"\n";
        }
        if(l<r)
        return r + _ - l;
        return l + _ - r;
    }
};