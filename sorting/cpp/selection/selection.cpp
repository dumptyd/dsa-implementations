#include <iostream>
#include <string>
#include <vector>
using namespace std;
void print_array(vector<int> arr);
vector<int> selection(vector<int> arr);
int main()
{
  vector<int> unsorted_arr = {3,2,1,4,5,6,7,4,2,1,4,6,8,0,6,4,3};
  vector<int> sorted_arr = selection(unsorted_arr);
  cout<<"Unsorted: ";
  print_array(unsorted_arr);
  cout<<"Sorted: ";
  print_array(sorted_arr);
  return 0;
}

vector<int> selection(vector<int> arr)
{
  for(int i = 0; i < arr.size()-1; ++i) 
  {
    int min = i;
    for(int j = i+1; j < arr.size(); ++j)
    {
      if(arr[j] < arr[min])
      {
        min = j;
      }
    }
    auto temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
  return arr;
}

void print_array(vector<int> arr)
{
  for(auto n: arr)
    cout<< n << ",";
  cout<<endl;
}