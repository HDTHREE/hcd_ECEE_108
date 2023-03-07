#include <iostream>
using namespace std;
struct Point{
    double x;
    double y;
    Point(double x, double y){
        Point::x = x;
        Point::y = y;
    }
};
struct Rectangle
{
    double x1, x2, y1, y2;
    Rectangle(int x1, int x2, int y1, int y2){
        if(x1<=x2){
            Rectangle::x1=x1;
            Rectangle::x2=x2;
        }
        else{
            Rectangle::x2=x1;
            Rectangle::x1=x2;
        }
        if(y1<=y2){
            Rectangle::y1=y1;
            Rectangle::y2=y2;
        }
        else{
            Rectangle::y2=y1;
            Rectangle::y1=y2;
        }
    }
    Rectangle(Point A, Point B) : Rectangle(A.x, B.x, A.y, B.y) {}
};
int main(){
    Rectangle recs[2] = {Rectangle(12.0, 3.0, 1.0, -3.0 ), Rectangle(Point(-3.5, -1.9 ), Point (-12.5, 2.1))};

    for(int i=0; i<2; i++){
    double area;
    double perimeter;
    
    area = (recs[i].x2-recs[i].x1)*(recs[i].y2-recs[i].y1);
    perimeter = 2*((recs[i].x2-recs[i].x1)+(recs[i].y2-recs[i].y1));

    cout << "Rect[" << i << "] :" << endl;
    cout << "x1: " << recs[i].x1 << ", x2: " << recs[i].x2
        << ", y1: " << recs[i].y1 << ", y2: " << recs[i].y2 
        << endl;
    cout << "(Area: " << area << ", Perimeter: " << perimeter << ")" << endl;
    }
}