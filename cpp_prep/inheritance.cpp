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
        int cnt;
        student (string hi,int cnt1): Teacher(hi),cnt(cnt1){}
  
    void ji()
    {
        cout<<"ji->"<<teach1<<cnt<<endl;
    }

};

int main()
{
    student t("sidharth",1);
    t.ji();

}