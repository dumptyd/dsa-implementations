#include <iostream>
#include <string>
#include <vector>
using namespace std;
void print_array(vector<int> arr);
vector<int> bubble(vector<int> arr);
int main()
{
  vector<int> unsorted_arr = {3,2,1,4,5,6,7,4,2,1,4,6,8,0,6,4,3};
  vector<int> sorted_arr = bubble(unsorted_arr);
  cout<<"Unsorted: ";
  print_array(unsorted_arr);
  cout<<"Sorted: ";
  print_array(sorted_arr);
  return 0;
}

vector<int> bubble(vector<int> arr)
{
  bool swapped = true;
  int index_of_last_unsorted_element = arr.size() - 1;
  while(swapped)
  {
    swapped = false;
    for(int i = 1; i <= index_of_last_unsorted_element; ++i)
    {
      if(arr[i] < arr[i-1])
      {
        auto temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
        swapped = true;
      }
    }
    index_of_last_unsorted_element--;
  }
  return arr;
}

void print_array(vector<int> arr)
{
  for(auto n: arr)
    cout<< n << ",";
  cout<<endl;
}