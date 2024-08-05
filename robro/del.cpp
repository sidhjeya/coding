#include <iostream>
using namespace std;
class btm{

public :
  

};
class top {
public:
    top(btm& bn):bn{}
    

    
    int a() // Public member function definition
    {
        std::cout << "ys";
        return 0; // Return a value since the return type is int
    }
    btm& bn;
};


int main() {
    top bt;
    bt.a();
 
    
    return 0; // Return a value from main
}
