#include <iostream>
using namespace std;
int main(){
    short myShortArray[3]={0,0,0};
    myShortArray[0]=256;
    myShortArray[1]=512;
    myShortArray[2]=myShortArray[1]*myShortArray[0];
    cout << myShortArray[0] << myShortArray[1] << myShortArray[2] << endl;
    return 0;
}