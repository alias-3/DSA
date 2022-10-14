#include <algorithm>
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // //approach 1 brute force
        // vector<int> result ={};
        // int sum ;
        // for (int i = 0 ; i< nums.size(); i++) {
        //     sum = 0;
        //     for (int j = 0 ; j <= i; j++) {
        //         sum +=nums[j];
        //     }
        //     result.push_back(sum);
        // }
        // return result;
        
        
        // // approach 2 
        // int maxSum = accumulate(nums.begin(), nums.end(), 0 );
        // vector<int> res = {};
        // int element = *(nums.end()-1);
        // for (int i = 0; i< nums.size(); i++) {
        //     //cout<<accumulate(nums.begin(), i+1, 0 );
        //     res.push_front(maxSum);
        //     element  += nums[nums.size()-i] ;
        // }
        // return res; 
        
        //apporach 3
        int sum = 0;
        vector<int> res = {};
        for (int i = 0; i< nums.size(); i++) {
            sum += nums[i];
            res.push_back(sum);
        }
        return res;
    }
};