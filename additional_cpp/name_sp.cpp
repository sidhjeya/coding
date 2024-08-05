#include<iostream>
using namespace std;
class add {

public:
int a=1;
int b=0;
add(){
    // std::cout<"hi add";
    
    }


private:



};

class sub : public add
{
public:    
    sub(){
// std::cout<"hi sub";
    };

};
int main()
{
 add ad;
 sub su();
 cout <<su.a;
}