#include <iostream>
using namespace std;
int main(){
    float num;
    cin >> num;
    int num2= (int)num;
    if(num2%2==0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
    return 0;
}