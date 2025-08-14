class Solution {
public:
    bool isVowel(char c){
        return tolower(c) == 'a' || tolower(c) =='e' || tolower(c)== 'i' || tolower(c) =='o' || tolower(c) == 'u';
    }
    bool halvesAreAlike(string s) {
        int i,n=s.length(),c=0;
        for(i=0;i<n/2;i++){
            if(isVowel(s[i]))
            c++;
        }
        for(i=n/2;i<n;i++){
            if(isVowel(s[i]))
            c--;
        }
        // cout<<c;
        return c==0; 
    }
};