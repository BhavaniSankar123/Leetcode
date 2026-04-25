class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,_=0,i=0,n=moves.length();
        while(i<n)
        {
            l+= (moves[i] == 'L');
            _+= (moves[i] == '_');
            i++;
        }
        if(2 * l< n - _)
        return n- l- l;
        return 2 * (l + _) - n;
    }
};