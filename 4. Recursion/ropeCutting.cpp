#include <iostream>
#include <algorithm>
using namespace std;

int maxCuts(int n, int a, int b, int c){
    if (n==0){
        return 0;
    }
    if (n < 0){
        return -1;
    }
    int res = max(maxCuts(n-a, a, b, c), max(maxCuts(n-b, a, b, c), maxCuts(n-c, a, b, c)));
    
    // corner test case
    if (res == -1){
        return -1;
    }
    return res + 1;
}

int main(){
    int maxCuts(int n, int a, int b, int c);
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int res = maxCuts(n,a,b,c);
    cout << res << endl;
}