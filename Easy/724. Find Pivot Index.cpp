class Solution {
    
    //remember to check the begin and end in the accumulate function. they should be iterator/pointers not integers like i. use nums.begin()+i instead
    //accumulate can also be replaced by totalSum += nums[i] but kep in mind the correct range
    // ++i or i++ are same in case of a loop, but differnt in other cases
public:
    int pivotIndex(vector<int>& nums) {        
//         int leftSum, rightSum = 0;
//         int total = accumulate(nums.begin(),nums.end(),0);
//         for (int i=0; i<nums.size(); i++) {
//             leftSum = accumulate(nums.begin(),nums.begin()+i,0);
//             //cout<<leftSum<<endl;            
            
//             //int rightSum = accumulate(nums.begin()+i+1,nums.end(),0);
//             rightSum = total - nums[i] - leftSum;            
//             //cout<<rightSum<<endl;            
        
//             if(leftSum == rightSum) return i;        
//         }
//         return -1;
        
        
        
        const auto total = accumulate(nums.begin(), nums.end(), 0);
        auto left_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (left_sum == (total - left_sum - nums[i])) {
                return i;
            }
            left_sum += nums[i];
        }
        return -1;
    }
};