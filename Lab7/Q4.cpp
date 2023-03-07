#include <iostream>
using namespace std;
class Queue{
    double myArray[100];
    unsigned int myHead;
    unsigned int myTail;
    public:
    bool enqueue(double elem){
        if (myTail<100){
            myArray[myTail] = elem;
            myTail++;
            return true;
        }
        return false;
    }
    bool dequeue(){
        if(isEmpty()) return false;
        int value=myArray[myHead];
        myArray[myHead]=0;
        myHead++;
        std::cout << value;
        return true;
    }
    bool isEmpty(){
        return (myHead==myTail);
    }
    bool peek(){
        if(isEmpty()) return false;
        int value=myArray[myHead];
        
        std::cout << value;
        return true;
    }
};
int main(){
    Queue fifo = Queue();
    for(int i = 0; i<104; i++){
        if (!fifo.enqueue(i))
            cout << i << " CANNOT ENQUEUE." << endl;
    }
    for(int i = 0; i<104; i++){
        if (!fifo.dequeue())
            cout << i << " CANNOT deQUEUE." << endl;
        cout << "\n";
    }
}