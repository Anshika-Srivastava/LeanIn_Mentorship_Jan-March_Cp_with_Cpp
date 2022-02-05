class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(int i=0;i<s.length();i++){
            if((s[i]>='A'&&s[i]<='Z') || (s[i]>='a'&&s[i]<='z') || (s[i]>='0'&&s[i]<='9'))
                t+=tolower(s[i]);
        }
        int len=t.length();
        for(int i=0;i<len/2;i++)
        {
            if(t[i]!=t[len-i-1])
                return false;
        }
        return true;
    }
};
