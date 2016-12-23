#include <iostream>
#include <string>
#include <vector>
using namespace std;
void print_array(vector<int> arr);
vector<int> insertion(vector<int> arr);
int main()
{
  vector<int> unsorted_arr = {3,2,1,4,5,6,7,4,2,1,4,6,8,0,6,4,3};
  vector<int> sorted_arr = insertion(unsorted_arr);
  cout<<"Unsorted: ";
  print_array(unsorted_arr);
  cout<<"Sorted: ";
  print_array(sorted_arr);
  return 0;
}

vector<int> insertion(vector<int> arr)
{
  for(int i = 1; i < arr.size(); ++i) 
  {
    for(int j = i; j >= 0; --j) 
    {
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  return arr;
}

void print_array(vector<int> arr)
{
  for(auto n: arr)
    cout<< n << ",";
  cout<<endl;
}