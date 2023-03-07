#include <iostream>
using namespace std;

class Point{
    int x;
    int y;
    public:
    Point(int x, int y){
        Point::x=x;
        Point::y=y;
    }
    void setX(int x) {Point::x=x;}
    void setY(int y) {Point::y=y;}
    int getX() {return Point::x;};
    int getY() {return Point::y;};
};

void rePoint(Point A, int x, int y){
    A.setX(x);
    A.setY(y);
}

int main(){
    Point A = Point(1,2);
    rePoint(A, 3, 3);
    cout << A.getX() << endl;
}//classes behave the same