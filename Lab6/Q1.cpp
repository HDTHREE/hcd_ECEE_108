#include <iostream>
using namespace std;
void populateArray(int arr[], unsigned int length, int min_val, int max_val){
    bool isInc=true;
    int x=min_val;
    for(int i = 0; i<length; i++){
        arr[i]=x;
        if(isInc)
            x++;
        else
            x--;
        if(x>=max_val)
            isInc=false;
        if(x<=min_val)
            isInc=true;
    }
}
int main(){
    int arr[8]={0};
    populateArray(arr, 8, 1, 3);
    for (int i : arr)
        cout << i << ", ";
}