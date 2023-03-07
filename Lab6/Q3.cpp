#include <iostream>
using namespace std;
unsigned int iindexOf(int arr[], unsigned int length, int elem){
    for(int i=0; i<length; i++){
        if(arr[i]==elem)
            return i;
    }
    return -1;
}
void insertionSort(int arr[], unsigned int length){
    int tempVal=0;
    unsigned int j;
    for(unsigned int i = 1; i<length; i++){
        tempVal = arr[i];
        j=(i-1);
        while (arr[j] > tempVal)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1]=tempVal;
    }
}
int main(){
    int array[] = {0,5,5,25,25,25,6,25,2,6};
    insertionSort(array,10);
    //This should print 1. 2 is stored in the 1 slot of the array.
    cout << iindexOf(array, 10, 2);
}