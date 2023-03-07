#include <iostream>
using namespace std;
enum class Department {EE, CS};
struct Course{
    Department dep=Department::EE;
    string name;
    unsigned short code;
    Course(Department dep, string name, unsigned short code){
        dep=dep;
        name=name;
        code=code;
    };
};
int main(){
    Course couse1 = Course(Department::EE, "Programming for ECE", 1080);
    Course course2 = Course(Department::CS, "Computer Science 1", 1021);
    
    return 0;
}