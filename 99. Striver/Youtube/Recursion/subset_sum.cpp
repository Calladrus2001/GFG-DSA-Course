#include<iostream>
#include<vector>
using namespace std;

vector<int> getSubsetSum(vector<int> array){
  void Helper(int idx, vector<int> array, vector<int> &ans, int sum);
  vector<int> ans;
  Helper(0, array, ans, 0);
  for (int i = 0; i < ans.size(); i++){
    cout << ans[i] << " ";
  }
  return ans;
}

void Helper(int idx, vector<int> array, vector<int> &ans, int sum){
  if (idx == array.size()){
    ans.push_back(sum);
    return;
  }
  Helper(idx + 1, array, ans, sum + array[idx]);
  Helper(idx + 1, array, ans, sum);
}

int main(){
  vector<int> ans = getSubsetSum({5,2,1});
}
