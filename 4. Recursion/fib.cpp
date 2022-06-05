#include<iostream>
using namespace std;

int main(){
    int fib(int n);
    int n = 4;
    int i = 0;
    while (i < n){
        cout << fib(i) << endl;
        i++;
    }
}

int fib(int n){
    if (n<= 1){
        return n;
    }
    else {
        return (fib(n-1) + fib(n-2));
    }
}