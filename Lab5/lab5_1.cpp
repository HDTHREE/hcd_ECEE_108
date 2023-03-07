#include <iostream>
using namespace std;
int main(){
    int a = 0;
    int b = a++;
    int c = ++b;
    int d = 2;
    bool e = false;
    cout << a << ", " << b << ", " << c << endl;
    if ((a != b) && !e) d *= 12;
    cout << d << endl;
    cout << (1>=3) << ", " << (1 & 3) << ", "
        << (1 | 3) << ", " << (~1) << ", "
        << (1 ^ 3) << ", " << (10 << 1) << endl; 
}
//ok so the & sign does something with bytes and math, 
//all the other ones make sense.