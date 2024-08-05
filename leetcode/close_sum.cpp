#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<string>
#include<algorithm>
struct num 
{
    int a,b,c;
} ;
class Solution {
public:
    int threeSumClosest(vector <int>& vec1, int target)
    {
        int left,right;
        map <int,int> mp;
        int min;
        num nu;
        vector <num> triples;
        vector <int> nums;
        
        sort(vec1.begin(),vec1.end());

       
        for (int i=0;i<vec1.size()-2;i++)
        {
            if (i > 0 and vec1[i] == vec1[i - 1])
            {
                    continue;
            }

     
            left = i+1;
            right =i+2;
            while (left<vec1.size()-1)
            {
                // cout<<"i-->"<<i<<"left-->"<<left<<"right-->"<<right<<endl;
                int total= vec1[i]+vec1[left]+vec1[right];
                int diff =  abs(total - target );
                int str1 =vec1[i]+vec1[left]+vec1[right];
                mp[diff]= str1;
                right+=1;
                if(right>vec1.size()-1) 
                 {
                 left+=1;
                 right = left+1;
                 }
                 if(min > diff)
                 {
                    min=diff;
                 }

            }


        }

        return mp[min];
    }
};

int main()
{
    Solution sol;
    vector <int> vec={-1,2,1,-4};
    int clso=sol.threeSumClosest(vec,1);
    cout<<"the minimum is -->"<<clso<<endl;
    
}