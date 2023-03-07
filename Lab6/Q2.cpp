#include <iostream>
using namespace std;
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
    for (int x : array)
        cout << x << ", ";
}