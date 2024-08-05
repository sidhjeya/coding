#include<iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h>
#include<map>
using namespace std;

struct tra {
int x;
int y;
int z;
};

int main()
{
    int n,ct,k,hgt,brk,t=0,cdiff=0,pdiff=0,maz=0;
    tra trac;
    vector <tra> tracks;
    vector <int> height;
    vector <int> memo={0,0,0,0};
    vector <int> maxi;
    map <int,int> mymap;
    string ch,sub;
    cout<<"enter the number of STUDENTS"<<endl;
    cin>>n;

    for( int i=0;i<n;i++)
    {
    cin>>hgt;
    height.push_back(hgt);
    }
    int htg = height.size();
    ///common numbers 
    for (int i = 0;i<height.size();i++)
    {
        for (int j = 0;j<height.size();j++)
        {
                    for( auto x : memo)
                    { 
                        //  cout<<"value of x -->"<<x<<endl;
                        int h = i;
                        if (x == height[h])
                        {
                                brk=1;
                        }
                    }
                if(brk==1)
                {
                    brk=0;
                    break;
                    
                }
                t++;
                if(height[i]== height[j])
                {

                    // mymap[height[i]]++;
                    mymap[height[i]]=mymap[height[i]]+1;
                    // cout<<"value of map->"<<mymap[height[i]]<<" height[i]-->"<<height[i]<<" height[j]-->"<<height[j]<<" i->"<<i<<" j->"<<j<<endl;
                
        
                }
                        if ( t == height.size())
                    {
                        memo.push_back(height[i]);
                        t=0;
                    }
        }

    }
        //find the difference of height
        for (int q=1;q<=mymap.size();q++)
        {
            for (int r=1;r<mymap.size();r++)
            {
                    cdiff = abs(mymap[q]-mymap[r]);
                    trac.x=q;
                    trac.y=r;
                    trac.z=cdiff;
                    tracks.push_back(trac);
                    if (cdiff>pdiff)
                        {
                            maz=cdiff;
                            pdiff=cdiff;
                        }
                    

            }

        }

    for(int y=0;y<tracks.size();y++)
    {
      if (tracks[y].z == maz)
      {
        cout<<"the max diff is -> "<<tracks[y].x<<" "<<tracks[y].y<<endl;
      }

    }


}