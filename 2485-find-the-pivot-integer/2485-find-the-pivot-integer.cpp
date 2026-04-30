class Solution {
public:
    int pivotInteger(int n) {
        double sum = (n * (n+1))/2;
        int x = sqrt(sum);
        if(x * x == sum)  return x;
        return -1;
    }
};