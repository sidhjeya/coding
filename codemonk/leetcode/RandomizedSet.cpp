

#include<vector>
#include<iostream>
#include<map>
#include<set>
using namespace std;
#include <random>
#include <algorithm> 

class RandomizedSet {
public:
    std::set<int> myset;

    RandomizedSet() {
        
       
    }
    
    bool insert(int val) 
    {
        if(myset.find(val)==myset.end())
           {
            myset.insert(val);
            return true;
           }
           else
           {
            return false;
           }
    }
    
    bool remove(int val) 
    {

        if(myset.find(val) !=myset.end())
        {
            myset.erase(val);
            return true;
        }
        else{
            
            return false;
        }
        
    }
    
    int getRandom() 
    {
         int length = myset.size();

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(0, length - 1);

        auto it = myset.begin();
        std::advance(it, distr(gen));
        return *it;
    }
};

int main()
{
    RandomizedSet* obj = new RandomizedSet();

    bool param_1 = obj->remove(0);
    cout<<param_1<<endl;
    param_1 = obj->remove(0);
    cout<<param_1<<endl;
     param_1 = obj->insert(0);
    cout<<param_1<<endl;
    int ran = obj->getRandom();
    cout<<ran<<endl;
    param_1 = obj->remove(0);
    cout<<param_1<<endl;
    param_1 = obj->insert(0);
    cout<<param_1<<endl;
      
}