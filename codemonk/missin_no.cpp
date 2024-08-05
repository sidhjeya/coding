#include<iostream>
#include<string>

using namespace std;
int main()
{

int num;
string a;
    cout<<"enter the sting :"<<endl;
    cin>>a;
    for(int i =0 ;i< a.length();i++)
    {
        for (int j=i;j!=0;j--)
        {
            if(a[j-1]>a[j])
            {
                swap(a[j-1],a[j]);
            }
        }
    }
    cout<<"sorted array : "<<a<<endl;

    for(int i=0;i<a.length()-1;i++)
    {
        if(a[i+1]-a[i]>=2)
        {
            num =a[i]+1;
            char asciiChar = static_cast<char>(num);
            cout<<asciiChar<<endl;

        }
    }
}