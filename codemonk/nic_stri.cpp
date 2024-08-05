#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
int n,ct;
vector <char> str;
char ch;
cout<<"enter the number of strings"<<endl;
cin>>n;
cout<<"enter the strings"<<endl;
for (int i = 0;i<n;i++)
{   
    cin>>ch;  
    str.push_back(ch);
}

for (int j = 0;j<n;j++)
{

   for (int k = j;k!=0;k--)
   {

        cout<<"str[k]-->"<<str[j]<<"str[k-1]->"<<str[k-1]<<endl;
        if (str[j]> str[k-1] and j!=0)
        {
            ct++;
        }
        else if (j==0)
        {
            ct=0;
        }
   }
   cout<<"comp -->>"<<ct<<endl;
   ct=0;


}


}