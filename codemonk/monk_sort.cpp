#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
#include <bits/stdc++.h> 
/*
take away from below code
 1) distance (vector.begin(),it);
 2) to_string(number); ( convert number into string)
 3) stoi(string); (convert string to number )
 4) initialising iterators 
     map<int,int>::iterator it ;
    vector<int>::iterator its;




*/
class monk_sort
{
 
  private:
    int n,i,j,chunk=3,cnt=0,blk=0;
    vector <int> sorti;
    vector <int> feed_in;
    map<int,int> mymap;
    map<int,int>::iterator it ;
    vector<int>::iterator its;
      string vare, empty_str="000000";
      vector <string> number;

      int szfs;
  public :
      monk_sort()
    { 
      cout<<"enter the number of STUDENTS"<<endl;
      cin>>n;

        for( int i=0;i<n;i++)
        {
        cin>>vare;
        number.push_back(vare);
        }
    }

 
    int mn_pro()
    {
      for ( j=1; j<=chunk; j++ )
      {

       
          for( i=0; i< number.size();i++ )
            {
                  cout<<"number.size()%2 "<<number[i].size()%2<<endl;
                  pg1();           
            }
          it = mymap.begin();
          // Iterate through the map and print the elements
          while (it != mymap.end()) {
                cout << "Key: " << it->first;
                 cout<< ", Value: " << it->second << endl;

                sorti.push_back(it->second);
                
                    
                ++it;
            }
        
     
          sort(sorti.begin(), sorti.end());   


          it = mymap.begin();
          its = sorti.begin();
          while (its != sorti.end() ) {
              while (it != mymap.end() )
                {
                  cout << "Key: " << it->first;
                     cout << ", Value: " << it->second << endl;
                  if (it->second == *its)  
                      feed_in.push_back(it->first);
                  
                  ++it;
                  cout<<"location of mymap iterator "<<distance(mymap.begin(), it)<<endl;
                  cout<<"location of sorti iterator "<<distance(sorti.begin(), its)<<endl;
                }
                it = mymap.begin();
            ++its;
          }
          cout<<"inside 0th of feedin "<<feed_in[0]<<endl;
          number.clear();
          for(int k=0;k<feed_in.size();k++)
            {
              number.push_back(to_string(feed_in[k]));
              cout<<" "<<feed_in[k];
              int add = add + feed_in[k];
              if (add==0)
              {
                blk=1;
              }
              cout<<" ,";
            }
/////////////////////////////////////////////////
      if (blk==1)
        {
          blk=0;
          break;
        }
        
       }
      }
    

    int pg1()
    {
    string a;
      szfs=number[i].size();
           int diff = 5*j- szfs;

          if (diff < 0)
          {
            a = number[i].substr(abs(diff),5);
            cout<<"number[i].substr  diff < 0; "<<a<<endl;
          }
          else if (diff > 0 & diff <5 )
          {
            int ha = abs(5-(abs(diff)));
            a = empty_str.substr(0,abs(ha-5)) + number[i].substr(0,abs(5-(abs(diff))));
              cout<<"number[i].substr diff > 0; "<<a<<endl;

          }
          else if (diff >=5)
          {
            a="0";
          }
          else{
             a = number[i].substr(0,4);
            cout<<"number[i].substr(5*i,5); "<<a<<endl;

          }
          // if (a == "0")
          // {
          //   blk=1;
          // }
        mymap[stoi(number[i])]=stoi(a);   
       

    }
    //     int pg2()
    // {
    //   string a;
    //   szfs=number[i].size();
    //   for (int j=1; j<=chunk; j++ )
    //   {
    //     if (blk==1)
    //     {
    //       break;
    //     }
        
    //       int diff = 5*j- szfs;

    //       if (diff < 0)
    //       {
    //         a = number[i].substr(abs(diff),5);
    //         cout<<"number[i].substr  diff < 0; "<<a<<endl;
    //       }
    //       else if (diff > 0 & diff <5 )
    //       {
    //         int ha = abs(5-(abs(diff)));
    //         a = empty_str.substr(0,abs(ha-5)) + number[i].substr(0,abs(5-(abs(diff))));
    //           cout<<"number[i].substr diff > 0; "<<a<<endl;

    //       }
    //       else if (diff >=5)
    //       {
    //         a="0";
    //       }
    //       else{
    //          a = number[i].substr(0,4);
    //         cout<<"number[i].substr(5*i,5); "<<a<<endl;

    //       }
    //       if (a == "0")
    //       {
    //         blk=1;
    //       }
    //   }
    // }


};
int main ()
{
 monk_sort ms;  
  ms.mn_pro();


}
