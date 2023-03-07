#include <iostream>
#include <math.h>
using namespace std;

struct Queue{
    int q[100];
    unsigned int index; //0 <= i < 100
    
    bool enqueue(int x){
        if(index==99) return false;
        q[index]=x;
        index++;
        return true;
    }

    bool enqueue(int x[]){
        for (int i = 0; i<sizeof(x)/4; i++)
            enqueue(x[i]);
        return true;
    }

    int dequeue(){
        if(index==0) return (0 - (pow(2, 31)));
        index--;
        return q[index];
    }

    Queue(){
        std::fill_n(q,100,0);
        index=0;
    }
};

int main(){
    Queue myQ = Queue();
    int arr[] = {1,31,31,31,3,13,1,31,5,344,53,65,61,981,69,2};
    myQ.enqueue(arr);

    for(int i = 0; i<5; i++)
        cout << myQ.dequeue() << ", ";
}