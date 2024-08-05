#include<vector>
#include<iostream>
#include<map>
#include<set>
using namespace std;
#include <random>
#include <algorithm> 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count=0;
       int element;
       for(int i=0;i<nums.size();i++){
            if(count==0){
                element=nums[i];
                count=1;
            }
            else if(nums[i]==element){
                count++;
            }
            else
            count--;
       }   
       int c=0;
       for(int i=0;i<nums.size();i++){
            if(nums[i]==element){
                c++;
            }
            if(c>nums.size()/2){
                return element;
            }
       }
       return -1;
    }
};
int main()
{
    Solution sol;
    vector <int> vec1={1,5,2,2,1,2,1,5,2,2,2};
    int num = sol.majorityElement(vec1);
    cout<<num<<endl;
}