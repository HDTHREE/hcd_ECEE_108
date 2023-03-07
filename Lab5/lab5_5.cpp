#include <iostream>
using namespace std;

int absss(unsigned int n){
    if(n<0)
        return n*-1;
    return n;
}
int main(){
    unsigned int a;
    cout << "Absolute value of what number: " << endl;
    cin >> a;
    cout << absss(a) << endl;
}