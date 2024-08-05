#include<iostream>
using namespace std;


namespace fruit

{
struct  count 
{
    int row;
    int column;
}counting;

    namespace ban{
int add ( int a ,int b)
{
 return a + b;
}
    }
} 

namespace vegi
{
    int add (int a ,int b)
    {
            return a + b;
    }

}


int main()
{
    // using namespace fruit::ban;
    // using namespace fruit;
    fruit::counting.column=0;
    int a =fruit::ban::add(2,3);
    cout<< a<<endl;

}