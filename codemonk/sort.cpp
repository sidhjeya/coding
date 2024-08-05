#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
int a;
vector <int> vec;
for( int k=0;k<5;k++)
    {
    cin>> a;
    vec.push_back(a);
    }
    for(int i =0 ;i< vec.size();i++)
            {
            for (int j=i;j!=0;j--)
            {
                if(vec[j-1]>vec[j])
                {
                    swap(vec[j-1],vec[j]);
                
                }
            }
    }

for( int k=0;k<5;k++)
    {
        cout<<vec[k];
   
    }

}