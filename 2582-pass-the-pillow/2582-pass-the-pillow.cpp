class Solution {
public:
    int passThePillow(int n, int time) {
        if(n>time)
        return time+1;
        int m=2*n-2;
        if(time<=m)
        return m-time+1;
        time=time%m;
        if(time>=n)
        return m-time+1;
        return time+1;
    }
};