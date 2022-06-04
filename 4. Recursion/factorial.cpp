#include<iostream>
using namespace std;

int main(){
    int fact(int n);
    int n = 8;
    int ans = fact(n);
    cout << ans << endl;
}

int fact(int n){
    if (n == 1){
        return 1;
    }
    else {
        return n * fact(n-1);
    }
}

// is this tail-recursive ? NO, as the compiler still needs to 
// remember the output of previous calls while calculating result