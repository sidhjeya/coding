#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<string>
#include<algorithm>
struct list{

};
class Solution {
public:
    vector <string> vec1;
    map <char,vector<char>> mp;

    string slice(const string& str, int start, int end) {
    if (start < 0) start = 0;  // handle negative start
    if (end > str.size()) end = str.size();  // handle end beyond string length
    if (start > end) return "";  // handle invalid range

    return str.substr(start, end - start);
}
    vector<string> letterCombinations(string digits) 
    {
 
    mp['2']={'a','b','c'};
    mp['3']={'d','e','f'};
    mp['4']={'g','h','i'};
    mp['5']={'j','k','l'};
    mp['6']={'m','n','o'};
    mp['7']={'p','q','r','s'};
    mp['8']={'m','n','o'};
    mp['9']={'w','x','y','z'};
    for(int i=0;i<digits.length();i++)
    {
        digits[i]

        
    }

        
    }
};

int main()
{
    vector <string> vec;
    
  
    Solution sol;
    vec=sol.letterCombinations("23");
   
}