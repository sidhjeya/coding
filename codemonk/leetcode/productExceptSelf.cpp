#include<vector>
#include<iostream>
#include<map>
#include<set>
using namespace std;
#include <random>
#include <algorithm> 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        output[0] = 1;
        for(int i=1; i<n; i++){
            output[i] = output[i-1] * nums[i-1];
        }
        int right = 1;
        for(int i=n-1; i>=0; i--){
            output[i] *= right;
            right *= nums[i];
        }
        return output;
    }
};
int main()
{
vector <int> vec1={5,2,3,4};
vector <int> vec2;
Solution sol;
vec2=sol.productExceptSelf(vec1);
for (int i ;i<vec2.size();i++)
{
    cout<<vec2[i]<<endl;
}
}