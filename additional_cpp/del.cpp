#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int n,i=0,songs;
vector <int> song_v;
int max_cnt=0;
int main() {

cout << "enter the number of songs"<<endl;
cin>>n;
for (i=0;i<n;i++)
{
    cin>>songs;
    song_v.push_back(songs);

}

unordered_map <int,int> singers;

for(int singer : song_v)
{
singers[singer]++;

}
for(const auto& pair:singers)
{

max_cnt= max(max_cnt,pair.second);

}




}