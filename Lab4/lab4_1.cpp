#include <iostream>
using namespace std;
int main(){
    int myValue;
    cout << "Please enter value: " << endl;
    cin >> myValue;
    if(myValue%2)
        cout << "odd" << endl;
    else
        cout << "even" << endl;
}