#include<iostream>
using namespace std;

class numbers{

private :

public :
 int a1,b1;
    numbers(int a, int b):a1(a),b1(b)
    {
        cout <<"inside the constructor"<<endl;
        cout<<"a->"<<a1<<"<-b"<<b1<<endl;
    }
    int ad (int c,int d)
    {
        return c+d;
    }

};
class add :public numbers
{

private:

public:
    add(int a,int b):numbers(a, b)
    {
        cout<<"inside the add"<<a1;
    }

};


int main()
{
    numbers num(20,50);
    add a(1,2);
    int sum =a.ad(4,5);
    cout<<sum<<endl;
}