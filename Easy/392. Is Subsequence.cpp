class Solution {
public:
    bool isSubsequence(string s, string t) {
        //**approach 2
        
        
        int lengthS = s.length();
        int lengthT = t.length();        
        int j = 0; 
        for (int i = 0; i < lengthT and j < lengthS; i++)
            if (s[j] == t[i])
                j++;
                
        
        return (j == lengthS);
        
        //j is iterator for s            
        //remember j is not incremented by for loop, it has its own counter, only                   i is getting incremented from for
        
        
        
        //---------------------------------------------------------------------------
        
        
//         //**approach 1 
//         if (s.empty()) {
//             return true;
//         }

//         int i = 0;
        
//         //auto& c iterator modifies value of base container/array as well, but is effiient as no copy is created (as in case of auto c). To get the efficiency of auto&, without modifications, we use 'const' auto&
//         for (const auto& c : t) {
            
//             //compare each char in t, with s..and because we're using i iterator, automatically the order of comparison of s with t is retained..s[0],s[1],s[2]..
//             if (c == s[i]) { 
//                 i++;
//             }
            
//             //complete s found
//             if (i == s.length()) {
//                 break;
//             }
//         }
//         return i == s.length();
     
                
    }
};