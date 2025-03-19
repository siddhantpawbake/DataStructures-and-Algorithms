/* 
#A1 (BruteForce):
Time Complexity: O(N^2)
*/
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int size=prices.size();
            int maxi=INT_MIN;
            for(int i=0;i<size;i++){
                int curr=0;
                for(int j=i;j<size;j++){
                    curr=prices[j]-prices[i];
                maxi=max(curr,maxi);
                }
            }
        return maxi;
        }
    };

/*
#A2 (Optiomal):
Time Complexity:O(n)
*/
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int maxPro = 0;
        int n = prices.size();
        int minPrice = INT_MAX;
    
        for (int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            maxPro = max(maxPro, prices[i] - minPrice);
        }
        
        return maxPro;
            }};