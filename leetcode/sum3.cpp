#include<iostream>
using namespace std;
#include<vector>
#include<map>

struct num 
{
    int a,b,c;
} ;
vector <int>  insertionSort(std::vector<int>& vec) {
    int n = vec.size();
    
    for (int i = 1; i < n; ++i) {
        int key = vec[i];
        int j = i - 1;
        
        // Move elements of vec[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        vec[j + 1] = key;
    }
    return vec;
}
void sum(vector <int> vec1){
        int left,right;
        num nu;
        vector <num> triples;
        vector <int> nums;
        nums=insertionSort(vec1);
        
        for (int i=0;i<vec1.size()-2;i++)
        {
            if (i > 0 and nums[i] == nums[i - 1])
            {
                    continue;
            }
            left = i+1;
            right =vec1.size()-1;
            
            while (left<right)
            {
                int total= vec1[i]+vec1[left]+vec1[right];
            
                    if (total==0)
                    {
                        nu.a=vec1[i];
                        nu.b=vec1[left];
                        nu.c=vec1[right];
                        triples.push_back(nu);
                        while((left < right ) && (vec1[left]==vec1[left+1]))
                        {
                            left+=1;
                        }
                        while((left < right ) && (vec1[right]==vec1[right-1]))
                        {
                            right-=1;
                        }
                        left += 1;
                        right -= 1;


                    }
                    else if (total < 0)
                    {

                        left+=1;
                    }
                    else
                    {

                        right-=1;
            
                    }
            }


        }

}

int main()
{
vector <num> vec3;
vector <int> vec={-1,0,1,2,-1,-4};
sum(vec);
}