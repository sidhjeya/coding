#include<vector>
#include<iostream>
#include<map>
#include<set>
using namespace std;
#include <random>
#include <algorithm> 
class Solution {
public:
    vector <int> vec2;
    int max;
    int sum=0,i;
    int candy(vector<int>& ratings) {

        for (i=0;i<ratings.size();i++)
        {
            if(i==0 && (ratings[i]> ratings[i+1]))
            {
                sum=sum+2;
            }
            else if(((ratings[i]> ratings[i+1])|| ratings[i-1]< ratings[i])&& i!=0 && i!=ratings.size()-1 )
            {
                sum=sum+2;
            }
            else if(i==ratings.size()-1 && ratings[i-1]< ratings[i])
            {
                sum=sum+2;
            }
            else{
                sum=sum+1;
            }
            
        }
        // cout<<"hi"<<endl;
    return sum;
        
    }
};

int main()
{
Solution sol;
int sum;
vector <int> vec1={60, 80, 100, 100, 100, 100, 100};
sum=sol.candy(vec1);
cout<<sum<<endl;
}