#include<iostream>
using namespace std;


template <class T>
class hi {

private:
 
public :
 T c;
 hi (T a , T b)
 {
    T c = a+b;
 }

T add ()
{
    return c;
}
};
int main()
{
    hi <int>da(1,1);
    cout << da.add()<<endl;
    
   

}



