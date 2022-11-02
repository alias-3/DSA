// Time:  O(n)
// Space: O(1)
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        unordered_map<char,int> mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };       
        //i = length or lenght +1 is blank output, but i = -1 gives undefined overflow
        for(int i=0;i<s.length();i++) { 
            if(mp[s[i]]<mp[s[i+1]]) {
                sum -= mp[s[i]];
            }   
            else {
                sum += mp[s[i]];
            }                              
        }
        
        return sum;
    }
};