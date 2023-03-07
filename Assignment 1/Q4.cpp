#include <iostream>
using namespace std;
int main(){
    string input, reversed;
    cout << "What string would you like to check?" << endl;
    cin >> input;
    for(char c : input)
        reversed = c + reversed;
    if(input==reversed) cout << "The string is a palindrome.";
    else cout << "The string is not a palindrome.";
}