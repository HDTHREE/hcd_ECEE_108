#include <iostream>
using namespace std;

int fact(int n){
    if(n<2) return 1;
    return (fact(n-1) * n);
}

int main(){
    int a;
    cout << "Factorial of what number: " << endl;
    cin >> a;
    cout << fact(a) << endl;
}