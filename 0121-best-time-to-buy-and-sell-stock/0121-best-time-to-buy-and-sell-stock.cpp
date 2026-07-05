class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int stock=0;
        int r=1;
        int l=0;
        while(r!=prices.size())
        {
            if(prices[r]<prices[l])
            {
                l=r;
            }else{
                 stock=max(stock,prices[r]-prices[l]);
            }
           
            r++;
        }
        return stock;
        
    }
};