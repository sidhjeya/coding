#include<iostream>
using namespace std ;
 

int hi (int a , int b)
{
    int c = a+b;

    return c;
}
double hi (double a , double b)
{   
    double c = a+b;
    return c ;
}

int main ()
{
    int in;
    double dou;
in = hi(1,2);
dou= hi (2.0,2.0);
cout << in ;
cout <<'\n';
cout << dou;


}