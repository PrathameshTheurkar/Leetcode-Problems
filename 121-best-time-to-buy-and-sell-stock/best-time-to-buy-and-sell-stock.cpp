class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy[prices.size()];

        int mi = INT_MAX;

        for(int i=0;i<prices.size();i++){
            mi = min(mi , prices[i]);

            buy[i]=mi;   
        }
        int mx = INT_MIN;
        for(int i=0;i<prices.size();i++){
            mx = max(mx, prices[i] - buy[i]);
        }

        return mx;
    }
};