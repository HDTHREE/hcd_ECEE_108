#include <iostream>
using namespace std;
int main(){
    string input;
    cout << "What string would you like to swap the case of the letters?" << endl;
    cin >> input;
    for(int i=0; i<size(input); i++){
        if(97<=input[i] && input[i]<=122)//lowcase
            input[i]-=32;
        else if (65<=input[i] && input[i]<=90)
            input[i]+=32;
    }
    cout << input << endl;
}