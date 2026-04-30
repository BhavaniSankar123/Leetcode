class Solution {
public:
    int pivotInteger(int n) {
        double sum = (n * (n+1))/2;
        double x = sqrt(sum);
        if(x == int(x))
        return x;
        return -1;
    }
};