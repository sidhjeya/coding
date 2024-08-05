#include<iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,ct,k;
vector <string> str;
string ch,sub;
cout<<"enter the number of strings"<<endl;
cin>>n;
cout<<"enter the kth"<<endl;
cin>>k;
cout<<"enter the strings"<<endl;
cin>>ch; 
sub=ch;
str.push_back(sub);
for( int i=1;i<n;i++)
 {
  sub=ch.substr(i);
 str.push_back(sub);
//  cout<<"sub string -- >"<<sub<<endl;
 
 }

sort(str.begin(),str.end());
for(auto x : str)
{
    cout<<x<<endl;
}
cout<<"the kth-->"<<str[k];
}