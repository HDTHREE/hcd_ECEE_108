#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    if(num<255){
        char toChar = (char)num;
        cout << (string)toChar << endl;
    }
    else{
        num = num - 255;
        if(num<255)
            cout << num << endl;
        else
            cout << "Value too large." << endl;
    }
}