#include <iostream>
#include<math.h>
struct Student{
    std::string name;
    double gpa;
    unsigned short birthYear;
    std::string mid;

    Student(){
        name="";
        mid="";
    }
};
bool equals(Student stud1, Student stud2){
    if(stud1.name != stud2.name)
        return false;
    if( abs(stud1.gpa - stud2.gpa) > pow(2, (-30)))
        return false;
    if(stud1.birthYear != stud2.birthYear)
        return false;
    return stud1.mid == stud2.mid;
}