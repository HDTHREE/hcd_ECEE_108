#include <iostream>
using namespace std;
void insertionSort(int arr[], unsigned int length){
    int tempVal=0;
    unsigned int j;
    for(unsigned int i = 1; i<length; i++){
        tempVal = arr[i];
        j=(i-1);
        while (arr[j] > tempVal){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1]=tempVal;
    }
}
bool containsSorted(int arr[], unsigned int length, int elem){
    for (int i=0;i<length; i++){
        if(arr[i]>elem) return false;
        if(arr[i]==elem) return true;
    }
    return false;
}

int main(){
    int array[] = {0,5,5,25,25,25,6,25,2,6};
    insertionSort(array,10);
    int element;
    cout << "Input: ";
    cin >> element;
    if(containsSorted(array, 10, element))
        cout << "The input was found in the array.";
    else
        cout << "This input was not found in the array.";
}