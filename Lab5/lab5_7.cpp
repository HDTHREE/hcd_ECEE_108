#include <iostream>
using namespace std;

unsigned int increment(unsigned int n ) {
    return n + 1 ;
}
unsigned int decrement(unsigned int n ) {
    return n − 1 ;
}
int absss(unsigned int n){
    if(n<0)
        return n*-1;
    return n;
}
int add(unsigned int n, unsigned int m){
    if(n==0) return m;
    return add(decrement(absss(n)), increment(absss(m)));
}
int mult(unsigned int n, unsigned int m){
    if (n==0) return 0;
    if (n==1) return m;
    return add(m, mult(decrement(n),m))
}