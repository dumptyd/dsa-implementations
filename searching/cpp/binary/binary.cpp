#include <iostream>
#include <vector>
using namespace std;

int binary_search(int &elem_to_find, vector<int> arr) 
{
  auto start = 0;
  auto end = arr.size()-1;
  auto mid = 0;
  while (start <= end) 
  {
    mid = (start + end) / 2;
    if (arr[mid] == elem_to_find) {
      return mid;
    }
    if(arr[mid] < elem_to_find) {
      start = mid + 1;
    }
    if(arr[mid] > elem_to_find) {
      end = mid - 1;
    }
  }
  return -1;
}

int main() 
{
  vector<int> v = {0, 1, 2, 8, 13, 17, 19, 32, 42, 46};
  for(auto i = 0; i < v.size(); ++i) 
  {
    auto index = binary_search(v[i], v);
    cout<< "binary_search(" << v[i] << ", v): " << index << endl;
    cout<< "v[" << i << "]: " << v[index] << "\n--------------" << endl;
  }
  return 0;
}
