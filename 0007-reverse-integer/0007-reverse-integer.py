class Solution:
    def reverse(self, x: int) -> int:
        n=str(x)
        n=n[::-1]
        if x>=0:
            x=int(n) 
        else:
            m='-'+n[:-1]
            x=int(m)
        if x<-2**31 or x>2**31:
            return 0
        else:
            return x
      
        