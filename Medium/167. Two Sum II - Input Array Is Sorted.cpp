class Solution {
public:
    /*
    - actual arrat is always 0 indexed, u need to 
      return as per 1 indexed by adding 1 to indices
    - lower_bound returns iterator pointer address, use distance difference between 
      begin address and itr to get index
    */
    
    vector<int> twoSum(vector<int>& numbers, int target) {                
        for(int i=0; i<numbers.size();i++){                   
            
            if(binary_search(numbers.begin()+(i+1),numbers.end(),target-numbers[i])) {
                
                auto itr = lower_bound(numbers.begin()+(i+1),numbers.end(),target-numbers[i]);                 
                int j = distance(numbers.begin(), itr);    
                
                return {i+1,j+1};
            }                        
        }
        return {};
    }
};