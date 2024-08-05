#include <iostream>
#include <memory>
using namespace std;


class fruit {
    public:

    fruit ()
    {
        cout << "im don"<<endl;
    }
    int ban ()
    {
      cout << "im ban"<<endl;
    }

    int  app ()
    {
        cout << "im app"<<endl;
    }
};



int main()
{
   int n=3;
   int *b = &n;
   
   //////////////////////////////////
 shared_ptr<fruit> frr = make_shared<fruit>();
 frr->ban();
 ////////////////////////////////

/////////////////////unique pointer
 unique_ptr<int> valuePtr = make_unique<int>();
    unique_ptr <int> valueptr1 = make_unique<int>();
 *valuePtr = 45;
    cout << "before ownership"<<*valuePtr<<endl;
   
    valueptr1 = std::move(valuePtr);
    // cout << "after ownership valuePtr"<<*valuePtr<<endl;
    cout << "after ownership valuePtr -->"<<*valueptr1<<endl;

//////////////////////shared pointer
    int a=123;
    shared_ptr<int> sm1 = make_shared<int>();
    *sm1= a;
    cout<<"the value --->"<<*sm1<<endl;
     shared_ptr <int> sm2 = sm1;
     cout<<"the value after owbner --->"<<*sm2<<endl;



}