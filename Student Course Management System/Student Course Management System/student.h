#ifndef STUDENT_H
#define STUDENT_H

#include <set>
#include "Person.h"
using namespace std;

class Student : public Person {
private:
    int id;
    double gpa;
    set<string> courses;

public:
    Student(int id, string name, double gpa);

    int getId();
    double getGpa();

    void addCourse(string course);
    void showCourses();
};

#endif

