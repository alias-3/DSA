class Solution {
public:
    
    // https://www.youtube.com/watch?v=34WE6kwq49U - anuj bhaiya video
    // 3,1,5,6
    // minbuyprice= (3,3)=3 -> (3,1)  =1->(1,5)  =1->(1,6)=1,......
    // maxpofit = (0,3-3)=0 -> (0,1-1)=0->(0,5-1)=4->(4,6-1)=5,....
    // T = O(n) for loop, S= O(1) as no extra vctor/container used
    
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for (auto c:prices){
            minPrice = min(minPrice, c);
            maxProfit = max(maxProfit, c - minPrice);
        }
        
        return maxProfit;
    }
};