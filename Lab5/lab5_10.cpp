#include <iostream>
using namespace std;

int gcf(unsigned int x, unsigned int y){
    if(y==0) return x;
    return gcf(y, x%y);
}

int main(){
    cout << gcf(25, 125
    ) << endl;
}