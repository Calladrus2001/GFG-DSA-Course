#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(vector<int> &arr, int start){
  if (start > arr.size()/2){
    return;
  }
  swap(arr[start], arr[arr.size() - (start + 1)]);
  reverse(arr, start + 1);
}

int main(){
  vector<int> arr = {1,2,3,4,5,6,7};
  reverse(arr, 0);
  for (int i = 0; i < arr.size(); i++){
    cout << arr[i] << " ";
  }
}