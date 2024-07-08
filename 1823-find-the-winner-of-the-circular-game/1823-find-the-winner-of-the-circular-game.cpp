class Solution {
public:
    int findTheWinner(int n, int k) {
        int x=0,i;
        vector<int> v(n,0);
        for(i=0;i<n;i++)
        v[i]=i;
        while(n!=1)
        {
            x=(x+k-1)%n;
            v.erase(v.begin()+x);
            n--;
        }
        return v[0]+1;
    }
};