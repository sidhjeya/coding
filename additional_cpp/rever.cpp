#include<iostream>
#include<vector>
using namespace std;
int n=5,dn=0;
string b="12345",b1,bc,b1p;


int main()
{
    b1=b;
    bool y=0;
cout<<b<<"-"<<bc<<endl;
        for( int i = n-1 ; b!=bc;i--)
        {

        if (i-1 > -1)
                {
                    if (y==1)
                    {
                     b=b1p;
                     y=0;
                    }
                    b1[i-1]=b[i];
                    cout<<b1<<"<<->>"<<b<<endl;
                    // bc=b1;
                }
                else
                {
                 cout<<b[i]<<endl;   
                    b1[n-1]=b[i];
                    cout<<"the string at the end is"<<b1<<endl;
                    bc=b1;
                    b1p=b1;
                    i=n-1;
                    y=1;
                    
                }
        }
}