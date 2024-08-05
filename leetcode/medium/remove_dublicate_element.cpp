#include<vector>
#include<iostream>
#include<map>
using namespace std;
#include <algorithm> 
class Solution {
public:
    map<int,int> mp;
    int removeElementdu(vector<int>& nums) {
        std::vector<int> temp = nums;
        nums.erase(nums.begin(), nums.end());

        for(int i=0; i<temp.size(); i++){
            mp[temp[i]]=mp[temp[i]]+1;
            if( mp[temp[i]] == 1 || mp[temp[i]] == 2 ){
               nums.push_back(temp[i]);
            }
        }
                for (int i=0;i<nums.size();i++)
        {
            cout<<nums[i];
            cout<<",";
        }
        return nums.size();
    }
};

int main()
{
vector <int> vec1={0,0,1,1,1,2,2,3,3,4};
int val=3;
Solution sol;
int k = sol.removeElementdu(vec1);
cout<<"number of elements are -->"<<k<<endl;
}