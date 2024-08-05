#include<iostream>
#include<memory>
using namespace std;
class myptr
{

public:
   myptr()
   {
    std::cout<<"inside cons"<<endl;
   }
   ~myptr()
   {
    std::cout<<"dele cons";
   }

};

int main()
{

    shared_ptr<myptr>strptr=make_shared<myptr>();
    cout<<strptr.use_count()<<endl;
    {
        shared_ptr<myptr>strptr2=make_shared<myptr>();
        strptr2=strptr;
        cout<<"isnide ptr2 "<<strptr2.use_count()<<endl;
    }
    cout<<"after strptr"<<strptr.use_count()<<endl;
}