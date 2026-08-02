class Solution {
public:
    string winningPlayer(int x, int y) {
        int f=0;
        while(x>=1 && y>=4)
        {
            x--;
            y-=4;
            f=!f;
        }
        return f==0 ?  "Bob" : "Alice";
    }
};