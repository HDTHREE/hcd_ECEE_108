#include <iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    cout << fib(7) << endl;
}//so whenever you pass a negative integer it just keeps on calling fib.
//subsequently, the return case will literally never be reached unless the method recurs to -2 billion all the way around to positive 2 billion
//whenever you put a huge number in the method just doesn't work. I'm pretty sure this is because the program uses a shitload of memory. 