#include <iostream>
using namespace std;

void fn(int x){
    x = 2*x;
    return;
}

int main(){
    int i = 5;
    fn(i);
    cout << i << endl;
}//it doesn't work because binary integers are passed by value and not reference.