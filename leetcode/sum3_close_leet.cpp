#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<string>
#include <algorithm> 
struct num 
{
    int a,b,c;
} ;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int front;
        int sum=nums[0]+nums[1]+nums[2],sum1=0;
        for(int i=0;i<nums.size();i++){
            front=i+1;
            int back=nums.size()-1;
            while(front<back){
                
                    sum1=nums[front]+nums[back]+nums[i];
                    if(abs(sum1-target)<=abs(sum-target)){
                        sum=sum1;
                    }
                    if(sum1>target) 
                        back--;
                    else if(sum1<target) 
                    front++;
                    else return sum1;
            }
        }
        return sum;
    }
};

int main()
{
    Solution sol;
    vector <int> vec={-1,2,1,-4};
    int clso=sol.threeSumClosest(vec,1);
    cout<<"the minimum is -->"<<clso<<endl;
    
}