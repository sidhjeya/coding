#include <iostream>
#include<vector>
using namespace std;

int main()
{
vector <int> vec;
vector <int> vec1;
int inc =2,cnt=0,sum=0,j=0,inc1=0;
vec = {1,2,3,4};
int sizee = vec.size();
while (inc < vec.size())
{
    while (cnt< inc)
    {
        sum=sum+vec[j];
        j++;
          cnt++;
    }
    // inc1++;
    j=inc1+1;
    inc1++;
    vec1.push_back(sum);
    sum=0;
   
    cnt=0;
    if (j == vec.size()-1)
    {
        inc = inc+1;
        inc1=0;
        j=0;
    }

}


}