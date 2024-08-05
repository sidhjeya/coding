#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    private:
       int start= 0,cnt=0;
       int nxt=1;
       int diff=0;
    public:
        void summary(vector <int> vec1)
        {
            int size=vec1.size();
            while(start < size)
            {
                diff=vec1[start+1]-vec1[start];
                if(diff==1)
                {
                       start+=1;
                    cnt+=1;
                                    
                }
                else
                {
                    cout<<""<<endl;
                    cout<<vec1[start - cnt]<<"->>"<<vec1[start];
                    cnt=0;
                    start+=1;

                }
                
            }

        }


};

int main()
{
 vector <int> vec2={0,2,3,4,6,8,9};
 Solution sol;
 sol.summary(vec2);
}