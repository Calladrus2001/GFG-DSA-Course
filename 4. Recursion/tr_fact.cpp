#include<iostream>
using namespace std;

int main(){
    int fact(int n, int k);
    int n = 6; int k = 1;
    int ans = fact(n,k);
    cout << ans << endl;
}

int fact(int n, int k){
    if (n==0){
        return k;
    }
    else {
        return fact(n-1, k * n);
    }
}

// is this tail recursive? Yes, as the compiler does not
// need to remember the previous outocomes.
// in this way, tail recursion algos are faster than recursion algo
// as the entire function call overhead is ignored.