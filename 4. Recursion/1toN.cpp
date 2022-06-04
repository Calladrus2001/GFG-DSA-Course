#include<iostream>
using namespace std;

int main(){
    void onetoN(int n);
    int n = 12;
    onetoN(n);
}

void onetoN(int n){
    if (n > 1){
        onetoN(n-1);
        cout << n << " ";
    }
    else {
        cout << 1 << " ";
    }
    return ;
    
}