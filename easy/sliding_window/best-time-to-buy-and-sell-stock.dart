class Solution {
  int maxProfit(List<int> prices) {
        if(prices.length == 1) return 0;

        int l = 0;
        int mx = 0;
        int r = 1;

        while(r < prices.length) {
            if(prices[l] < prices[r]) {
                mx = max(mx,prices[r]-prices[l]);
            }else{
                l = r;
            }
            r++;
        }
        return mx;
  }
}
