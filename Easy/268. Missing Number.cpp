class Solution {
public:
    int missingNumber(vector<int>& nums) {        
        //vector<int> tt;
        // for(int i=0;i<nums.size();i++){
        //     tt.push_back(i+1);
        // }
        int sumNums = accumulate(nums.begin(),nums.end(),0);        
        //int totalSumOfRange = accumulate(tt.begin(),tt.end(),0);    
        int totalSumOfRange = (nums.size())*(nums.size()+1)/2;
        return totalSumOfRange-sumNums;
        
    }
};