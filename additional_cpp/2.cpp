#include<iostream>
using namespace std;

namespace a{
    int x=5;
    int y=6;
}

namespace b{

    double x=0;
    double y=9;
}

int main()
{

    using a::x;
    cout<< x<<'\n';
    cout<<b::x<<'\n';

}