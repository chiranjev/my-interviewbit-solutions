int Solution::maxProfit(const vector<int> &A) {

    int minprice = INT_MAX; // minimum price
    int maxprofit = 0;  // maximum profit that can be achieved
    for (int i = 0; i < A.size(); i++) {
        if (A[i] < minprice)
            minprice = A[i];
        else if (A[i] - minprice > maxprofit)
            maxprofit = A[i] - minprice;
    }
    return maxprofit;
}
