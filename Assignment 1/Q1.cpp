#include <iostream>
using namespace std;
int main(){
    //init
    string input, reversed;
    
    //input
    cout << "Please input the string you would like to reverse:" << endl;
    cin >> input;
    
    //reverse
    for (int i = input.length()-1; i>=0; i--)
        reversed += input.at(i);
    
    //output
    cout << reversed << endl;
}