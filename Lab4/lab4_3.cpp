#include <iostream>
using namespace std;
int main(){
    int i = 10;
    PointA:
    cout << i << endl;
    i--;
    if(i>0)
        goto PointA;
}