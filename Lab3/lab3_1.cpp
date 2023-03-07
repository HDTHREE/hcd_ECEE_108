#include <iostream>
using namespace std;
enum class Department {EE, CS};
int main(){
    Department dep1= Department::EE;
    Department dep2 = Department::CS;
    //cout << dep1 << ", " << dep2 << endl;
    if(dep1==Department::EE)
        cout << "EE" << endl;
    else
        cout << "CS" << endl;
    return 0;
}