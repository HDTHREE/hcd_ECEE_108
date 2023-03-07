#include <iostream>
struct floatStack{
    float stack[100];
    unsigned int index;
    floatStack(){
    }
};
bool isEmpty(floatStack stk){
    return stk.stack[0]==0;
}
bool push(floatStack stk, float num){
    if(stk.index==100)
        return false;
    stk.stack[stk.index]=num;//input
    stk.index = stk.index + 1;//reindex
    return true;
}
bool pop(floatStack stk, float& out){
    if(stk.index==0)
        return false;
    out=stk.stack[stk.index-1];//outputh
    stk.stack[stk.index-1]=0;//clear
    stk.index = stk.index - 1;//reindex
    return true;
}
bool peek(floatStack stk, float& out){
    if(stk.index==0)
        return false;
    out=stk.stack[stk.index-1];//output
    return true;
}
int main(){
    floatStack instance1;
    for (int i = 1; i <= 20; i++){
        if(push(instance1, i))
            std::cout << "Pushed! " << instance1.index << std::endl;
    }
    float out;
    for (int i = 1; i<=25; i++){
        if(pop(instance1, out))
            std::cout << "Popped: " << out << std::endl; 
    }
    if (isEmpty(instance1))
        std::cout << "The queue is empty" << instance1.index << std::endl;
    else
        std::cout << "The queue not is empty" << std::endl;
}