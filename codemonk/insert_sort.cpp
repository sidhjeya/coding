#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
vector <int> a = {3,4,2,1,6};
for(int i =0 ;i< a.size();i++)
{
    for (int j=i;j!=0;j--)
    {
        if(a[j-1]>a[j])
         {
            swap(a[j-1],a[j]);
         }
         cout<<j<<endl;
    }
}
for(int i =0 ;i< a.size();i++)
{
//   cout<<a[i]<<endl;
}

}