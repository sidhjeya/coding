#include <iostream>
using namespace std;
#include <vector>;
int main() {
	std::vector<int> arr;
	std::vector<int> arr_results;
	int init_arr_add=0,prev_i=0,sum_ind=0,z=1,size_arr,add_now=0;
	int num;
	int i;
	cout<< "enter size of the array";
	cin >> size_arr;
		    //Reading input from STDIN
	//initial array adding 
	for (i=1;i<=size_arr;i++)
	{

	  cin >> num;
	  arr.push_back(num);
      init_arr_add= num+init_arr_add;


	}
		for (i=1;i<=size_arr;i++)
	{
      
		    int num_current=arr[i];
		for (int j=1;j<=size_arr;j++)
		{
				 add_now = num_current+add_now;
				
		}
		arr_results.push_back(add_now);
		
	}

	for ( z =1;z<=size_arr;z++)
	{
      if (arr_results[z]< init_arr_add && arr_results[z+1]>init_arr_add  )
		{
			break;
		}
	}
	
	cout << "Input number is " << z+1 << endl;	// Writing output to STDOUT
}