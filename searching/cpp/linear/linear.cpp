#include <iostream>
#include <vector>
using namespace std;

int linear_search(int &elem_to_find, vector<int> arr) 
{
  for(int i =0;  i < arr.size(); ++i) 
  {
    if(arr[i] == elem_to_find)
      return i;
  }
  return -1;
}

int main() 
{
  vector<int> v = {0, 1, 2, 8, 13, 17, 19, 32, 42, 46};
  for(auto i = 0; i < v.size(); ++i) 
  {
    auto index = linear_search(v[i], v);
    cout<< "linear_search(" << v[i] << ", v): " << index << endl;
    cout<< "v[" << i << "]: " << v[index] << "\n--------------" << endl;
  }
  return 0;
}