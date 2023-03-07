#include <iostream>
using namespace std;

void fact(unsigned int& n){
    if(n==0) {
        n=1;
        return;
    }
    unsigned int m = n;
    fact(--n);
    n *= m;
}

int main(){
    unsigned int a;
    cout << "Factorial of what number: " << endl;
    cin >> a;
    fact(a);
    cout << a << endl;
}