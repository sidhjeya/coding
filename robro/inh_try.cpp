#include <iostream>
using namespace std;

class number {
public :
    int a;
    int b;
    number(int x,int y):a(x),b(y)
    {
        // cout<<a<<b;
    }
    void multi (int c, int d)
    {
        cout<<"-->"<<a*b<<endl;
    }
};

class add : public number{
public:

    add(int x,int y):number(x,y)
    {
        cout<<"addition of the value is "<<a+b<<endl;
        a=a+10;
        b=b+10;
        multi(a,b);
    }
    


};

class sub : public number
{
public:
    sub (int x,int y):number(x,y)
    {
        cout<<"subtraction of the number is "<<a-b<<endl;
    }

};

int main ()
{

add addit(10,5);
sub subb(10,5);
return 0;



}