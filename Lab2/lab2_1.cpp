#include <iostream>
using namespace std;
int main(){
    double myDouble = 0.3;
    double my2ndDouble = 0.1 + 0.2;
    bool myBoolean = myDouble==my2ndDouble;
    cout << myDouble << " " << my2ndDouble << " " << myBoolean << endl;
    return 0;
}
/*The boolean outputted as 0(false) because the values stored in my2ndDouble are not the same because of floating point value inprecisions.*/