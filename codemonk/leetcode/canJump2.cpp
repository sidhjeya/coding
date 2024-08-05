
#include<vector>
#include<iostream>
#include<map>
using namespace std;
#include <algorithm> 
class Solution {
public:

    int jump(vector<int>& nums) {

      for(int i = 1; i < nums.size(); i++)
      {
        nums[i] = max(nums[i] + i, nums[i-1]);
      }

      int ind = 0;
      int ans = 0;

      while(ind < nums.size() - 1)
      {
        ans++;
        ind = nums[ind];
      }

      return ans;
    }
};

int main()
{
vector <int> vec1={2,3,0,1,4};
Solution sol;
int can=sol.jump(vec1);
cout<<"max profit->"<<can<<endl;
}