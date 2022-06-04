#include<iostream>
using namespace std;

int main(){
    int nto1(int n);
    int n = 12;
    nto1(n);
}

int nto1(int n){
    cout << n << " ";
    if (n == 1){
        return 0;
    }
    nto1(n-1);
}