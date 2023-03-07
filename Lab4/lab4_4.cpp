#include <iostream>
using namespace std;
int main(){
    string myStr;
    cout << "Please enter string: " << endl;
    cin >> myStr;
    for(char i = 65; i<= 122; i++){
        int count = 0;
        for(int j = 0; j<myStr.length(); j++)
            if(myStr.at(j) == i)
                count++;
        if(count>0)
            cout << i << ": " << count << endl;
    }
}