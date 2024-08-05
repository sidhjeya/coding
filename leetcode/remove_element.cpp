#include<vector>
#include<iostream>
using namespace std;
#include <algorithm> 
class Solution {
public:
    int count=0,size,i=0,k=0;
    int front,back;
    vector <int> vec1;
    int removeElement(vector<int>& nums, int val) 
    {
       size=nums.size();
       back=size-1;
       
       while(i < back)
       {
          if(nums[i]==val)
          {
            if(nums[back]==val)
            {
                back=back-1;
                
            }
            swap(nums[i],nums[back]);
           }

         i=i+1;
       }
       int k=nums.size()-1;
       while( nums[k]==val)
       {
            nums.pop_back();
            k=k-1;
    
       }
        for (int i=0;i<nums.size();i++)
        {
            cout<<nums[i];
            cout<<",";
        }
        return count; 
    }
};

int main()
{
vector <int> vec1={3,2,2,3};
int val=3;
Solution sol;
int k = sol.removeElement(vec1,val);

}