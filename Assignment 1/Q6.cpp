#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "How tall do you want your christmas tree: " << endl;
    cin >> n;
    for(int i=1; i<=n; i++){//height
        for(int k=0; k<(n-i); k++)
            cout << " ";
        
        for(int k=0; k<((2*i)-1); k++)
            cout << "*";
        cout << endl;
    }
}