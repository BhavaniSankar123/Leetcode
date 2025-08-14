class Solution {
public:
    string largestGoodInteger(string num) {
        // cout<<num.length();
        int ma=-1;
        for(int j=0;j<num.length()-2;j++){
            if(num[j]== num[j+1] && num[j+1] == num[j+2])
                ma= max(ma,num[j]-'0');
        }
        if(ma==-1) return "";
        char c= ma + '0';
        string ans="";
        for(int i=0;i<3;i++)
        ans+=c;
        return ans;
    }
};