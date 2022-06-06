#include<iostream>
#include<string>
using namespace std;

int main(){
    int sumOfDigit(int n, int sum);
    int sum = sumOfDigit(253, 0);
    cout << sum << endl;
}

int sumOfDigit(int n, int sum){
    if (n == 0){
        return sum;
    }
    else {
        sum += n%10;
        n = n/10;
        return sumOfDigit(n, sum);
    }
    
}