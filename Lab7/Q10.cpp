#include <iostream>
using namespace std;

class FizzyBuzzy{
    unsigned int n;
    int fib(int x) {
        if(x==1) return 1;
        if(x==0) return 0;
        if(x==10) return 55;
        if(x==11) return 89;
        return fib(x-1) + fib(x-2);
    }
    public:
    void getNext(){
        fib(n);
        n++;
    }
    FizzyBuzzy(int n){
        cout << "OBJECT CREATED" << endl;
        FizzyBuzzy::n=n;
    }
    friend void resetN(FizzyBuzzy fb){
        fb::n=0;
    }
};

int main(){
    FizzyBuzzy buzfiz = FizzyBuzzy(0);
    for (int i=0; i<20; i++)
        buzfiz.getNext();
}