#include<vector>
#include<iostream>
#include<map>
using namespace std;
#include <algorithm> 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int maxprof = 0;

        for(int i=1;i<prices.size();i++){
            maxprof = max(maxprof,prices[i]-min_price);
            min_price = min(prices[i],min_price);
        }

        return maxprof;
    }
};

int main()
{
vector <int> vec1={7,2,3,5,8,6,1};
Solution sol;
int profit = sol.maxProfit(vec1);
cout<<"the profit is->"<<profit;

}