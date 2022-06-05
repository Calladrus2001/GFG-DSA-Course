#include<iostream>
using namespace std;

int main(){
    int sumOfNat(int n);
    int n = 5;
    int sum = sumOfNat(n);
    cout << sum << endl;
}

int sumOfNat(int n){
    if (n == 0){
        return 0;
    }
    else {
        return n + sumOfNat(n-1);
    }
}

// taking base case of 0 even if its not a valid Nat num