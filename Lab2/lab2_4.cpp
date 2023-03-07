#include <iostream>
using namespace std;
int main(){
    char arr[6];
    arr[0]='H';
    arr[1]='i';
    arr[2]='\0';
    cout << arr;
}
/*The cout method accepts an array of characters to output and will not print value=null characters.*/