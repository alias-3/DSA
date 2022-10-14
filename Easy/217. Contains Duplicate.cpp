class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //approach 1 - unordered map using..similar to two-sum prob
        unordered_map<int, int> lookup;
        for(int i=0; i< nums.size(); i++) {
            if(lookup.count(nums[i])) {
                return true;
            }
            lookup[nums[i]] = i;
        }
        return false;
        
        
        
        
        //approach 2 - first sort to make things fast, then unique combines the consectuve duplicates and relaces them with single element {1,2,2,4,5} -> {1,2,4,5,?} ..size of vector remains same after unique. unique returns an iterator to the last+1 elment(the question mark)
        //begin returns iterator(pointer to first element), end returns iterator(pointer to last+1) element
        // sort(nums.begin(), nums.begin());
        // printing last elemnt//cout<<*(nums.end()-1);
        // return unique(nums.begin(), nums.end()) != nums.end();
        
        
        
        
        //approach 3 - unordered/ordered set..as set can only contain unique element..then comapre the size
        // unordered_set<int> myset;
        // for(int i=0; i< nums.size(); i++) {
        //     myset.insert(nums[i]);
        // }
        // if (myset.size() != nums.size()) {
        //     return true;
        // }
        // else {
        //     return false;
        // }
    }
};