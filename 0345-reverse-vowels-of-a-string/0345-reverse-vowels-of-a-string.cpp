class Solution {
public:
    bool isVowel(char c)
    {
        return c=='a' or c=='e' or c=='i' or c=='o' or c=='u' 
        or c=='A' or c=='E' or c=='I' or c=='O' or c=='U';
    }
    string reverseVowels(string s) {
        int l=0,r=s.length()-1;
        string vowels="aeiouAEIOU";
        while(l<=r)
        {   
            while(l<=r and !isVowel(s[l]))
            l++;
            if(l>r)
            break;
            while(l<=r and !isVowel(s[r]))
            r--;
            if(l>r)
            break;
            swap(s[l],s[r]);
            l++,r--;
        }
        return s;
    }
};