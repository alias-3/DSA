class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k = k % nums.size(); //done as multiples of nums.size will mean the same amount of rotation
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        
        
        
        /*  approach 2 -  T(n), S(n)         
            12,3,43,11,5 - k=2
            43 will be replaced by 12, 11->3, 5->43..and so on         
         */        
        // vector<int> temp(nums);        
        // for(int i=0;i<nums.size();i++) {                         
        //     nums[(i+k)%nums.size()] = temp[i];                
        // }        
    }
};
