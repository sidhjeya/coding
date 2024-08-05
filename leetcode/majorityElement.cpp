#include<vector>
#include<iostream>
#include<map>
using namespace std;
#include <algorithm> 
class Solution {
public:
    map<int,int> mp;
    int majorityElement(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]=mp[nums[i]]+1;
            if( mp[nums[i]] > (nums.size()/2) )
            {
               return nums[i];
            }
        }
        return 0;
    }
};

int main()
{
vector <int> vec1={0,0,1,2,2,2,2,2,3,2};
int val=3;
Solution sol;
int k = sol.majorityElement(vec1);
cout<<"number of elements are -->"<<k<<endl;
}