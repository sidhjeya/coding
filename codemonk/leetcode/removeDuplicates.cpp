#include<vector>
#include<iostream>
#include<map>
#include<set>
using namespace std;
#include <random>
#include <algorithm> 

class Solution 
{
public:
    vector <int> vec1;
    set <int> se;
    int maxi=0,premaxi=0;

    int removeDuplicates(vector<int>& nums) 
    {  
        vec1=nums;
        nums.erase(nums.begin(),nums.end());
        for(int i =0;i<vec1.size();i++)
        {    
           se.insert(vec1[i]);
        //    nums.push_back(se[i]);
        
        } 
        for (auto itr: se)
        {
            nums.push_back(itr);

        }
        
    }
};
int main()
{
    Solution sol;
    vector <int> vec1={0,0,1,1,1,2,2,3,3,4,4};
    sol.removeDuplicates(vec1);
}