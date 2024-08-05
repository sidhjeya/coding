#include<vector>
#include<iostream>
#include<map>
using namespace std;
#include <algorithm> 
class Solution {
public:
    int mv=0;
    bool canJump(vector<int>& nums) {

   while (mv<nums.size()-1)
   {
    mv=nums[mv]+mv;
    if(nums[mv]==0)
    {
        return false;
    }
   }
   if(mv==nums.size()-1)
   {    
    return true;
   }
    return false;
        
    }
};
int main()
{
vector <int> vec1={2,0};
Solution sol;
bool can =sol.canJump(vec1);
cout<<"max profit->"<<can<<endl;
}