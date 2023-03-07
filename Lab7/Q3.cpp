#include <iostream>
class Queue{
    double myArray[100];
    unsigned int myHead;
    unsigned int myTail;
    public:
    Queue(){
        Queue::myHead=0;
        Queue::myTail=0;
        Queue::myArray=[0];
    }
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