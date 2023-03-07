#include <iostream>
using namespace std;
struct Point{
    int x, y;
    Point(int x, int y){
        x=x; y=y;
    }
};
struct Quadrilateral{
    int x_topRight, y_topRight, x_topLeft, y_topLeft, x_BottomLeft, y_BottomRight, x_BottomRight, y_Bottomleft;
    Quadrilateral(int x_topRight, int y_topRight, int x_topLeft, int y_topLeft, int x_BottomLeft, int y_BottomRight, int x_BottomRight, int y_BottomLeft){
        x_topRight=x_topRight;
        y_topRight=y_topRight;
        x_topLeft=x_topLeft;
        y_topLeft=y_topLeft;
        x_BottomRight=x_BottomRight;
        y_BottomRight=y_BottomRight;
        x_BottomLeft=x_BottomLeft;
        y_BottomLeft=y_BottomLeft;
    }
};
int main(){
    Quadrilateral myQuadrilateral = Quadrilateral(1,1,-1,1,1,-1,-1,-1);
    return 0;
}