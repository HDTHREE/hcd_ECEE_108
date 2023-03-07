#include <iostream>
using namespace std;
int main(){
    //decl, init
    int myArray[]={-12, 4, 12, 3, 1, 7, 25, 1, 127, -15, 12, 13, 25};
    int arrayMax=myArray[0], arrayMin=myArray[0];

    //iter
    for (int i = 0; i<sizeof(myArray)/4; i++){
        //cout << myArray[i] << endl;
        if (arrayMax<myArray[i])
            arrayMax=myArray[i];
        if (arrayMin>myArray[i])
            arrayMin=myArray[i];
    }

    //output
    cout << "Max value: " << arrayMax << ", Min value: " << arrayMin << endl;    
}