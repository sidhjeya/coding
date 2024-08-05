#include<iostream>
#include<string>
using namespace std;
class Teacher 
{
protected:
    string teach1;

public:
    Teacher (string teach):teach1(teach)
    {
        std::cout<<"teacher -->"<<teach<<std::endl;
    }
};

class  student :public Teacher
{
    public:
        student (string hi): Teacher(hi)
        {
           
        }
    void ji()
    {
        cout<<"ji->"<<teach1<<endl;
    }

};

int main()
{
    student t("sidharth");
    t.ji();

}