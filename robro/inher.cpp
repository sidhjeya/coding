#include<iostream>
using namespace std;

class num
{
public :
    int a;
    int b;
    num (int x,int y): a(x),b(y)
    {
        cout<<"values are "<<a<<" "<<b<<endl;
    }

  
};

class add :public num{
public:
    add(int x,int y): num(a,b)
    {
        cout<<a+b<<endl;
    }
    

};

int main ()
{
num number(1,2);

}
