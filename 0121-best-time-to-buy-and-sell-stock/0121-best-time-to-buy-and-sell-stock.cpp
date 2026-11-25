class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int maxpro=0;
        for(int i=1;i<prices.size();i++)
        {
            int profit=prices[i]-minprice;
            maxpro=max(maxpro,profit);
            minprice=min(minprice,prices[i]);
        }
        return maxpro;
    }
};