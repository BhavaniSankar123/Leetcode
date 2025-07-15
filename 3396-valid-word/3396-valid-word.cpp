class Solution {
public:
    bool isalphadigit(char c){
        return (c>='0' and c<='9') or (c>='a' and c<='z') or (c>='A' and c<='Z');
    }
    bool isvowel(char c){
        return tolower(c) == 'a' or tolower(c) == 'e' or tolower(c) == 'i' or tolower(c) == 'o' or tolower(c) == 'u';
    }
    bool isdigit(char c){
        return c>='0' and c<='9';
    }
    bool isValid(string word) {
         int cnt=0,v=0,c=0;
         for(char letter : word)
         {
            if(isalphadigit(letter))
            {
                cnt++;
                if(!isdigit(letter))
                {
                    if(isvowel(letter)) v++;
                    else c++;
                }
            }
            else
            return false;
         }
         
         return  cnt>=3 and v and c;
    }
};