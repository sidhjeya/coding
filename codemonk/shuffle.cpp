#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> arr1;
    vector <int> arr2;
    string a1,b1,total;
    int a,n;
    cin>>n;
    cout<<"enter the string"<<endl;
    for(int i=0;i<2*n;i++)

    {
    cin>>a;
    arr1.push_back(a);

    }
    for (int j=0;j<n;j++)
    {
    a1=to_string(arr1[j]);
    b1=to_string(arr1[j+n]) ; 
    total=total+(a1+b1);  
    }

cout<<"the shuffled: "<<total<<endl;


}