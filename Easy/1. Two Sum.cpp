#include<algorithm>
#include<map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // Brute force
       // for (int i = 0; i < nums.size(); i++)
       // {
       //     for (int j = i + 1 ; j < nums.size(); j++){
       //         if(nums[j]==target - nums[i]){
       //             return {j,i};
       //         }
       //     }
       // }
       //  return {};
        
        
   
        unordered_map<int, int> lookup;
        for (int i = 0; i < nums.size(); ++i) {
            if (lookup.count(target - nums[i])) {
                return {lookup[target - nums[i]], i};
            }
            lookup[nums[i]] = i;          
        }
        return {};
    }
};