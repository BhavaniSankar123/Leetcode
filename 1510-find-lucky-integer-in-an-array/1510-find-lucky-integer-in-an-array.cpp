class Solution {
public:
    int findLucky(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       int ans=-1,n=arr.size(),c=1;
       for(int i=1;i<n;i++)
       {
        if(arr[i-1]==arr[i])
        c++;
        else
        {
            if(arr[i-1]==c)
            ans=c;
            c=1;
        }
       }
       if(arr[n-1]==c)
       ans=c;
       return ans;
    }
};