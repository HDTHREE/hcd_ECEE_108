#include <iostream>
using namespace std;
int main(){
    string myStr;
    int n;
    unsigned int m;
    cout << "Please enter n value: " << endl;
    cin >> n;
    cout << "Please enter m value: " << endl;
    cin >> m;
    for (int i = 0; i<m; i++)
        myStr += to_string(n);
        //myStr = myStr + to_string(n);
    cout << myStr << endl;
}
//i = i + 2
//i += 2