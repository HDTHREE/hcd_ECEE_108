#include <iostream>
using namespace std;

int fn2(int i);
//this is called a forward declaration, it uses some evil magic to initialize a method without declaring it and once a method calls said method it will go find its definition.
//function prototype, includes name and arguments
int fn1(int i){
    if (i%2 == 0)
        return fn2(i);
    return i;
}

int fn2(int i){
    if(i%2 == 1)
        return fn1(i);
    return i;
}

int main(){
    int j = 10;
    cout << to_string(fn1(j));
}