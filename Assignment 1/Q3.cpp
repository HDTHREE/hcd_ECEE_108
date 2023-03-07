#include <iostream>
using namespace std;

int main(){
    int myArray[4][5] = {{1,2,3,4,5}, {2,4,6,8,10}, {5,6,7,8,9}, {0,0,0,0,0}};
    int myArray2[4]={0,0,0,0};
    //cout << sizeof(myArray)/4 << endl;
    for(int i=0; i<(sizeof(myArray2)/4); i++){
        for (int j=0; j<(sizeof(myArray)/4/4); j++){
            //cout << myArray[i][j] << ", ";
            myArray2[i]+=myArray[i][j];
        }
        //cout << myArray2[i];
        //cout << endl;
    }
    for(int a : myArray2)
        cout << a << ", ";
    cout << endl;
}