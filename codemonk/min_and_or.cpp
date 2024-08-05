#include<iostream>
#include<vector>
#include<bitset>
#include<string>
#include <algorithm> 
using namespace std;
struct pairs {
    int x;
    int y;
};
int binaryToDecimal(int binaryNum) {
    int decimalValue = 0;
    int base = 1; // 2^0

    while (binaryNum > 0) {
        int lastDigit = binaryNum % 10;
        binaryNum = binaryNum / 10;
        decimalValue += lastDigit * base;
        base = base * 2;
    }

    return decimalValue;
}
int main()
{
vector <int> arr;
pairs p1;
vector<pairs> pair;
vector<int> min;
int n,in;
cout<<"enter the length of the array"<<endl;
cin>>n;
int sqr=n*n;
cout <<"enter the interger in array"<<endl;
// bitset<4> a_bin(n);
for (int i =0;i<n;i++)
{
    cin>>in;
    arr.push_back(in);
}

for (int j = 0; j < n; j++)
{
    for(int k=0;k<n;k++)
    {
        p1.x =arr[j];
        p1.y =arr[k];
        pair.push_back(p1);
    }
}

for (int l=0;l<sqr;l++)
{
    bitset<4> x_(pair[l].x);
    bitset<4> y_(pair[l].y);
    cout<<"pair x ->"<<pair[l].x<<"pair_y ->"<<pair[l].y<<endl;
    cout<<"binary_x ->"<<x_<<"binary_y ->"<<y_<<endl;
    bitset<4> bina = (x_ & y_ ) ^ (x_ | y_);
    int deci = binaryToDecimal(stoi(bina.to_string()));
    cout<<"binary is ->"<<bina<<endl;
    cout<<"decimnal value of binat is ->"<<deci<<endl;
    if(deci >0)
    {
    min.push_back(deci);
    }
}
auto min_it = min_element(min.begin(), min.end());
cout<<"minimum value of them all is -->"<<*min_it<<endl;


}