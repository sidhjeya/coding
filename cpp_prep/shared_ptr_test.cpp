#include<iostream>
#include<memory>

using namespace std;
class pointer 
{

public:
    pointer ()
    {
        cout <<"inside the constructor"<<endl;
    }
    ~pointer ()
    {
        cout<<"inside the destructor"<<endl;
    }
    void met()
    {
        cout<<"im inside the method"<<endl;
    }

};
int main()
{
    unique_ptr<pointer> p_ptr = make_unique<pointer>();
    p_ptr->met();
    unique_ptr<pointer> u_ptr= move(p_ptr);
    p_ptr->met();
    
}