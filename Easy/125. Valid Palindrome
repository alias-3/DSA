
class Solution {
public:
    bool isPalindrome(string s) {                 
        //size(s) and s.length() can both be used to calculate len of string 
        //cout<<size(s)<<'\t'<<'\t'<<s.length()<<endl;
        
        if(s=="" || size(s)==1) return true;
        
        string p;
        
        //add alphabets and numerals to new string, strip all special chars
        for(auto i:s)
            if(isalnum(i))                
                p+=tolower(i);
        
        
        //reverse and compare strings
        // string p1 = p;
        // cout<<p;
        // reverse(p.begin(), p.end());
        // if(p1 != p) return false;
        //
        // return true;
        
                
        //Two pointer aproach
        int i = 0, j = size(p)-1;
        while(i<j) {
            if(p[i]!=p[j]) return false;
            i++;
            j--;
        }
        
        return true;
    }
};