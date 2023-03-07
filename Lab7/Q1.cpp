#include <iostream>
using namespace std;

struct Point{
    private:
    int myX;
    int myY;

    public:
    Point(int x, int y){
        Point::myX=x;
        Point::myY=x;
    }

    void incrY(){
        myY=myY+1;
    }
    int getX(){
        return myX;
    }
    int getY(){
        return myX;
    }
};

int main(){
    Point A = Point(1,2);
    A.incrY();
    cout << (A.getY()) << endl;
}