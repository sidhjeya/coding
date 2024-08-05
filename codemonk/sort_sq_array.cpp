#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string str1;
    vector <unsigned int> arr;
    int n,a;
    cin>>n;
    for (int i=0;i<n;i++)
    {
       cin>>a;
    arr.push_back(a*a);

    }


for(int i =0 ;i< arr.size();i++)
        {
        for (int j=i;j!=0;j--)
        {
            if(arr[j-1]>arr[j])
            {
                swap(arr[j-1],arr[j]);
            
            }
        }
}

for(int j=0;j<arr.size();j++)
{
        cout<<arr[j];
}
}