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
        int canCompleteCircuit(vector<int>& A, vector<int>& B) {
            int tank=0,total=0,index=0;
        for(int i=0;i<A.size();i++){
            int consume=A[i]-B[i];
            tank+=consume;
            if(tank<0){
                tank=0;
                index=i+1;
            }
            total+=consume;
            
        }
        if(total>=0)return index;return -1;
        }
    };


int main()
{
vector <int> vec1={1,2,3,4,5};
vector <int> vec2={3,4,5,5,2};
Solution sol;
int hi=sol.canCompleteCircuit(vec1,vec2);
cout<<hi<<endl;
}