#include <iostream>
using namespace std;
int main(){
    string myString, anotherString;
    cin >> myString;
    cin >> anotherString;
    bool myBool = myString==anotherString;
    int length=myString.length();
    int anotherLength=anotherString.length();
    cout << myString[length-1]<< endl;
}