#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

vector<vector<int>> getSubseq(vector<int> array, int target)
{
  void Helper(int idx, vector<int> array, vector<vector<int>> &ans, int target, int sum);
  vector<vector<int>> ans;
  Helper(0, array, ans, target, 0);
  return ans;
}

void Helper(int idx, vector<int> array, vector<vector<int>> &ans, int target, int sum)
{
  void printArray(vector<int> array);
  if (idx >= array.size()) return;
  arr.push_back(array[idx]);
  sum += array[idx];
  if (sum == target) {
    ans.push_back(arr);
    printArray(arr);
  }
  Helper(idx + 1, array, ans, target, sum);
  arr.pop_back();
  sum -= array[idx];
  Helper(idx + 1, array, ans, target, sum);
}

void printArray(vector<int> array){
  for (int i = 0; i < array.size(); i++){
    cout << array[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<vector<int>> ans = getSubseq({1, 2, 3, 4, 5, 6}, 7);
}