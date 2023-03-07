#include <iostream>
using namespace std;
enum class Department {EE, CS};
enum class Grade {A, A_minus, B_plus, B, B_minus, C_plus, C, C_minus, F};
enum class Qualification {postgraduate, undergraduate};
struct Course{
    Department dep=Department::EE;
    string name;
    unsigned short code;
    Course(Department dep, string name, unsigned short code){
        dep=dep;
        name=name;
        code=code;
    };
    Course(){

    }
};
struct CourseTaken{
    Course course;
    Grade grade;
    CourseTaken(Course course, Grade grade){
        course=course;
        grade=grade;
    };
    CourseTaken(){

    }
};
struct Student{
    string name;
    float GPA;
    unsigned short age;
    Qualification qualification;
    unsigned short n_courses;
    CourseTaken courses[100];
    Student(string name, float gpa, unsigned short age, Qualification qualification, CourseTaken courses){
        name=name;
        gpa=gpa;
        age=age;
        qualification=qualification;
        n_courses=0;
        courses=courses;
    };
};


int main(){
    Course course1 = Course(Department::EE, "Programming for ECE", 1080);
    Course course2 = Course(Department::CS, "Computer Science 1", 1021);
    
    Grade gradeA = Grade(Grade::A_minus);
    Grade gradeB = Grade(Grade::B_plus);

    CourseTaken class1 = CourseTaken(course1, gradeA);
    CourseTaken class2 = CourseTaken(course2, gradeB);

    return 0;

    //This issue was that there were no default or "zero" constructors for all the struct so they needed to be added to be used in subsiquent constructors.
}