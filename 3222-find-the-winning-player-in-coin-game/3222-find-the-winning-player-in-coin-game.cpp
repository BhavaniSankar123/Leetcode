class Solution {
public:
    string winningPlayer(int x, int y) {
        int m = min(x,y/4);
        return m&1 ?   "Alice" : "Bob" ;
    }
};