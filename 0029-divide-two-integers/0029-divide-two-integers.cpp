class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

        if (dividend == INT_MIN && divisor == 1) {
        return INT_MIN;
    }

        if (dividend == INT_MAX && divisor == -1) {
        return INT_MIN;
    }

        if (dividend == INT_MAX && divisor == -1) {
        return INT_MAX;
    }
       unsigned int x=abs(dividend);
       unsigned int y=abs(divisor);
       int neg = (dividend<0) ^ (divisor<0);
       unsigned int ans=0;
      
       while(x>=y){
        int i=0;
        while(y<<(i+1)<=x)
         i++;
         ans +=1U<<i;
         x-=(y<<i);
       }
       return neg ? -ans : ans;
    }
};