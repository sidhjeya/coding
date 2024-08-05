#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main (){
vector <int> vec;
string str;
int start=0,end=0,max=0,len=0;
map <char,int> map1;
cin>>str;
    for(int j=0;j<str.length();j++)
    {
            if(map1.find(str[j])!=map1.end())
            {
                start=map1[str[j]]+1;
                map1[str[j]]=j;
                
            }

            if(map1.find(str[j])==map1.end())
            {
                map1[str[j]]=j;
            } 
            end=j;
            len=end-start;
            if (max<len)
            {
                max=len;
            }
    }
cout<<"the max lenght is "<<max<<endl;
}