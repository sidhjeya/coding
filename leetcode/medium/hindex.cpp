
#include<vector>
#include<iostream>
#include<map>
using namespace std;
#include <algorithm> 
class Solution {
public:
    int length=0;
    int hIndex(vector<int>& citations) 
    {
        sort(citations.begin(),citations.end());
        length=citations.size();
        int maxi=0;
        for(int i = 0 ;i<citations.size();i++)
        {
            // cout<<"citations[i]"<<citations[i]<<endl;
            // cout<<"length-i"<<length-i<<endl;
       
           if (citations[i]>=length-i)
           {

            maxi = max(maxi, length - i);

           }

        }
        return maxi;
    }
};
int main()
{
vector <int> vec1={1,3,4,5,5,4,5,5,5,6};
Solution sol;
int hindex=sol.hIndex(vec1);
cout<<"max profit->"<<hindex<<endl;
}