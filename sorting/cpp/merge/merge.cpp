#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
void print_array(vector<int> arr);
vector<int> merge_sort(vector<int> arr);
vector<int> merge(vector<int> arr1, vector<int> arr2);

int main()
{
  vector<int> unsorted_arr = {3,2,1,4,5,6,7,4,2,1,4,6,8,0,6,4,3};
  vector<int> sorted_arr = merge_sort(unsorted_arr);
  cout<<"Unsorted: ";
  print_array(unsorted_arr);
  cout<<"Sorted: ";
  print_array(sorted_arr);
  return 0;
}

vector<int> merge_sort(vector<int> arr)
{
  if(arr.size() == 1)
    return arr;
  int mid = floor(arr.size() * 0.5);
  vector<int> arr1(arr.begin(), arr.begin()+mid);
  vector<int> arr2(arr.begin()+mid, arr.end());
  return merge(merge_sort(arr1), merge_sort(arr2));
}

vector<int> merge(vector<int> arr1, vector<int> arr2)
{
  vector<int> arr;
  while(arr1.size() && arr2.size())
  {
    if(arr1[0] > arr2[0]){
      arr.push_back(arr2[0]);
      arr2.erase(arr2.begin());
    }
    else {
      arr.push_back(arr1[0]);
      arr1.erase(arr1.begin());
    }
  }
  
  arr.insert(arr.end(), arr1.begin(), arr1.end());
  arr.insert(arr.end(), arr2.begin(), arr2.end());
  return arr;
}

void print_array(vector<int> arr)
{
  for(auto n: arr)
    cout<< n << ",";
  cout<<endl;
}