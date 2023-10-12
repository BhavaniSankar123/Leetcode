/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int i,j,m,n=mountainArr.length();
        i=0,j=n-1;
         m=(i+j)/2;
        while(i<=j and m!=0 and m!=n-1)
        {
           
            if(mountainArr.get(m-1)<mountainArr.get(m) and mountainArr.get(m)>mountainArr.get(m+1))
            break;
            else if(mountainArr.get(m-1)<mountainArr.get(m) and mountainArr.get(m)<mountainArr.get(m+1))
            i=m+1;
            else
            j=m-1;
             m=(i+j)/2;
        }
        i=0,j=m;
        int x=-1,y=0,p=m;
        while(i<=j)
        {
            m=(i+j)/2;
            y=mountainArr.get(m);
            if(y==target)
            {
                x=m;
                j=m-1;
            }
            else if(y<target)
            i=m+1;
            else
            j=m-1;
        }
        if(x!=-1)
        return x;
        i=p+1,j=n-1;
        x=-1,y=0;
        while(i<=j)
        {
            m=(i+j)/2;
            y=mountainArr.get(m);
            if(y==target)
            {
                x=m;
                j=m-1;
            }
            else if(y<target)
            j=m-1;
            else
            i=m+1;
        }
        return x;
    }
};