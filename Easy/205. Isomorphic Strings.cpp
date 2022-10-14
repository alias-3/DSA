class Solution {
public:
    bool isIsomorphic(string s, string t) {
//         if(s.length() != t.length()) {
//             return false;
//         }
//         else {
//             map<char,int> mps;
//             map<char,int> mpt;
            
//             for(int i=0 ; i< s.length();i++) {    
                
//                 bool bothExist = (mps.count(s[i]) == 1) && (mpt.count(t[i]) == 1);
//                 bool bothNotExist = (mps.count(s[i]) == 0) && (mpt.count(t[i]) == 0);                                         
//                 //cout << bothExist << "bothExist\t"<<bothNotExist<<"bothNotExist"<<endl;
//                 if(bothExist && mps[s[i]]==mpt[t[i]]){
//                     continue;
//                 }
//                 else if(bothNotExist){
//                     mps[s[i]] = mpt[t[i]] = i;      
//                 }
//                 else {
//                     return false;
//                 }            
//             }                    
//         }        
//         return true;
        
        
        
        if (s.length() != t.length()) {
            return false;
        }
        vector<int> s2t(256, 0), t2s(256, 0);
        for (int i = 0; i < s.length(); ++i) {
            if (s2t[s[i]] == 0 && t2s[t[i]] == 0) {
                s2t[s[i]] = t[i];
                t2s[t[i]] = s[i];
            } else if (s2t[s[i]] != t[i]) {
                // Contradict mapping.
                return false;
            }
        }
        return true;
        
        
        
    }
};