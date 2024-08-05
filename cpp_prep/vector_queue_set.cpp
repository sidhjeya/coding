#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<list>

using namespace std;

int main()
{
    vector<int> vec;
    stack<int> st;
    queue<int> qu;
    list<int> ls;


    for(int i = 0; i < 4; i++)  // Corrected loop condition and declaration of i
    {
        vec.push_back(i);
        st.push(i);
        qu.push(i);
        ls.push_back(i);


    }
   if (!ls.empty()) {
        cout << "list ->" << ls.back() << endl;  // Use back() to get the last element
        ls.pop_back();  // Remove the last element
        cout << "list ->" << ls.front() << endl;
    } 
    else 
    {
        cout << "vector is empty" << endl;
    }
    if (!vec.empty()) {
        cout << "vector ->" << vec.back() << endl;  // Use back() to get the last element
        vec.pop_back();  // Remove the last element
        cout << "vector ->" << vec.back() << endl;
        
    } 
    else 
    {
        cout << "vector is empty" << endl;
    }

    if (!st.empty()) 
    {
        cout << "stack ->" << st.top() << endl;  // Use top() to get the top element
        st.pop();  // Remove the top element
        cout << "stack ->" << st.top() << endl;
        
        
    }
     else
      {
        cout << "stack is empty" << endl;
    }

    if (!qu.empty()) {
       cout << "queue ->" << qu.front() << endl;  // Use front() to get the front element
        qu.pop();  // Remove the front element
        cout << "queue ->" << qu.front() << endl; 
        
    }
     else
      {
        cout << "queue is empty" << endl;
    }

    return 0;
}
