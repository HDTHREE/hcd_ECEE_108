#include <iostream>
using namespace std;

struct Student{
    std::string name;
    unsigned short birth_year;
    std::string mid;

    Student(std::string n, unsigned short by, std::string m){
        name=n;
        birth_year=by;
        mid=m;
    };
};

string strStudent(Student s){
    return "Name: " + s.name + ", Middle Name: " + s.mid + ", Birth Year: " + to_string(s.birth_year);
}

int main(){
    string name="Hayden Dennis";
    string mid="Caleb";
    unsigned short birth_year=2004;
    Student me = Student(name, birth_year, mid);
    cout << me.name << endl;
    cout << strStudent(me) << endl;
}