#include<vector>
#include<iostream>
#include<map>
using namespace std;
#include <algorithm> 
    class Solution {
    public:
        int mx_profit=0;
        int maxProfit(vector<int>& prices) {
            for (int i =0;i<prices.size()-1;i++)
            {
                if(prices[i]<prices[i+1])
                {
                    int sum = -prices[i]+prices[i+1];
                    if(sum>0)
                    {
                        mx_profit=sum+mx_profit;
                    }   
                }
            }
            return mx_profit;
            
        }
    };