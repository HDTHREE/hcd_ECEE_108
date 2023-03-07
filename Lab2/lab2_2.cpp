#include <iostream>
using namespace std;
int main(){
    float myFloat=0.2;
    bool myResult=0.2==myFloat;
    bool my2ndResult=myFloat==0.2f;
    cout << myFloat << myResult << my2ndResult << endl;
    return 0;
}
/*It returned false, the == operator will not return true when comparing a double against a float even if they have the same inherant value*/