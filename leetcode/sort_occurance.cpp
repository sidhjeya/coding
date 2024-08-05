#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main ()
{
    vector <int>  vec1={-1,3,3,2,2,2,2,-1,-1,1};
    vector <int> vec2;
    map <int,int> map1;
    map <int,int> map2;
    int cnt=0;
    for(int i = 0;i<vec1.size();i++)
    {
        map1[vec1[i]]=map1[vec1[i]]+1;

    }

    for( const auto& pair : map1)
    {
        map2[pair.second]=pair.first;
    }
    for( const auto& pair1 : map2)
    {
        
        while(pair1.first !=cnt)
        {
            cout<<pair1.second<<"--> "<<endl;
            cnt+=1;
        }
        cnt=0;
    }


}