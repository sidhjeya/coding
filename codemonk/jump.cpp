#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string str="112301";
    int start=0,s,s1;
    cout<<"enter the string "<<endl;
    // cin>>str;
   
 
    for(int i =0 ;i<str.length();i++)
    {
        s=abs(49-int(str[i]))+1;
        start=i+s;
        if (start == str.length()-1)
        {
            cout<<"yest e"<<endl;
            break;

        }


    }


}