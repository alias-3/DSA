#include<vector>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        if(nums1.size()==0) nums=nums2;
        if(nums2.size()==0) nums=nums1;
        if(nums1.size() || nums2.size()) {
            nums1.insert(nums1.end(),nums2.begin(),nums2.end());
            nums=nums1;            
            sort(nums.begin(),nums.end());
            if(nums.size()%2 == 0) {
                cout<<nums[nums.size()/2]<<'\t'<<nums[(nums.size()/2)-1]<<endl;                
                double med = nums[(nums.size()/2)-1] + nums[nums.size()/2];
                return med/2;
            }
            else {
                double med = nums[nums.size()/2];
                return med;
            }
        }
        return 0.0;
    }
};