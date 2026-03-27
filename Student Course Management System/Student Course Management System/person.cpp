#include "Person.h"

Person::Person(string name) {
    this->name = name;
}

string Person::getName() {
    return name;
}


//Student s1(1, "Ali", 3.2);

    //s1.addCourse("Math");
    //s1.addCourse("CS");

    //students.push_back(s1);

    //for (auto s : students) {
    //    cout << "Name: " << s.getName() << endl;
    //    cout << "GPA: " << s.getGpa() << endl;
    //    cout << "Courses:\n";
    //    s.showCourses();
    //}