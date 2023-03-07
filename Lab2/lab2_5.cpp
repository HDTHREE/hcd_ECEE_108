#include <iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0]=1;
    arr[0][1]=2;
    arr[0][2]=3;
    arr[1][0]=arr[0][0];
    arr[1][1]=arr[0][1]+arr[0][1];
    arr[1][2]=arr[0][1]+arr[0][1]+arr[0][2];
    cout << arr[0][0] << ", " << arr[0][1] << ", " << arr[0][2] << endl;
    cout << arr[1][0] << ", " << arr[1][1] << ", " << arr[1][2] << endl;
}