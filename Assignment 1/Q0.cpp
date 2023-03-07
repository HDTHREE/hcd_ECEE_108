#include <iostream>
using namespace std;
int main(){
    //init
    int myInt1, myInt2, temp;
    
    //input
    cout << "Please input the value of the first integer: " << endl;
    cin >> myInt1;
    cout << "Please input the value of the second integer: " << endl;
    cin >> myInt2;
    
    //output a
    cout << "myInt1: " << myInt1 << " myInt2: " << myInt2 << endl;
    
    //swap
    temp=myInt1;
    myInt1=myInt2;
    myInt2=temp;
    
    //output b
    cout << "myInt1: " << myInt1 << " myInt2: " << myInt2 << endl;
}