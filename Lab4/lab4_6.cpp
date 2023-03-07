#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int myValue;
    string binary;
    cout << "Please enter a value: " << endl;
    cin >> myValue;
    myValue++;
    for(int i = 30; i>=0; i--){
        int base10 = pow(2,i);
        //cout << base10 << endl;
        
        if(myValue > base10){
            myValue-=base10;
            binary+= "1";
        }
        else
            binary+= "0";
    }
    cout  << binary << endl;
}