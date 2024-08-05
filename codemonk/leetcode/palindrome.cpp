#include<iostream>
// #include<cctype>    
using namespace std;
class palindrome
{
public:
    bool isPalindrome(string s)
    {

        string si = "";
        for (auto& i: s)
        {
            if(isalpha(i))
            {
                char low =tolower(i);
                si =si + low ;
            }
        }

        int f=0;
        int l=si.length()-1;
        while(f!=l)
        {
            if(si[f]!=si[l])
            {
                return false;
            }
            f=f+1;
            l=l-1;
        }
        return true;
    }
};

int main()
{
palindrome pal;
bool hi =pal.isPalindrome("A man, a plan, a canal: Panama");
cout<<hi<<endl;
}