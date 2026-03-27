
    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include "Student.h"

    using namespace std;

    int main() {
        vector<Student> students;
        int choice;

        do {
            cout << "\n======= Student Management System =======\n";
            cout << "1. Add Student\n";
            cout << "2. Display All Students\n";
            cout << "3. Search Student\n";
            cout << "4. Remove Student\n";
            cout << "5. Enroll Student in Course\n";
            cout << "6. Show Student Courses\n";
            cout << "7. Sort Students by GPA\n";
            cout << "8. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            // Add Student
            if (choice == 1) {
                int id;
                string name;
                double gpa;

                cout << "Enter ID: ";
                cin >> id;

                // Check duplicate ID
                bool exists = false;
                for (auto s : students) {
                    if (s.getId() == id) {
                        exists = true;
                        break;
                    }
                }
                if (exists) {
                    cout << "ID already exists! Try again.\n";
                    continue;
                }

                cout << "Enter Name: ";
                cin >> name;

                cout << "Enter GPA: ";
                cin >> gpa;

                // Validate GPA
                if (gpa < 0.0 || gpa > 4.0) {
                    cout << "Invalid GPA! Must be between 0.0 - 4.0\n";
                    continue;
                }

                Student s(id, name, gpa);
                students.push_back(s);
                cout << "Student added successfully!\n";
            }

            // Display All Students
            else if (choice == 2) {
                if (students.empty()) {
                    cout << "No students found.\n";
                }
                else {
                    for (auto s : students) {
                        cout << "ID: " << s.getId() << endl;
                        cout << "Name: " << s.getName() << endl;
                        cout << "GPA: " << s.getGpa() << endl;
                        cout << "------------------\n";
                    }
                }
            }

            // Search Student
            else if (choice == 3) {
                int id;
                cout << "Enter ID: ";
                cin >> id;

                bool found = false;
                for (auto s : students) {
                    if (s.getId() == id) {
                        cout << "Name: " << s.getName() << endl;
                        cout << "GPA: " << s.getGpa() << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Student not found.\n";
                }
            }

            // Remove Student
            else if (choice == 4) {
                int id;
                cout << "Enter ID: ";
                cin >> id;

                bool found = false;
                for (int i = 0; i < students.size(); i++) {
                    if (students[i].getId() == id) {
                        students.erase(students.begin() + i);
                        cout << "Deleted successfully.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Student not found.\n";
                }
            }

            // Enroll Student in Course
            else if (choice == 5) {
                int id;
                string course;
                cout << "Enter Student ID: ";
                cin >> id;

                bool found = false;
                for (auto& s : students) {  // & مهم للتعديل على الأصل
                    if (s.getId() == id) {
                        cout << "Enter Course Name: ";
                        cin >> course;
                        s.addCourse(course);
                        cout << "Course added successfully.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Student not found.\n";
                }
            }

            // Show Student Courses
            else if (choice == 6) {
                int id;
                cout << "Enter Student ID: ";
                cin >> id;

                bool found = false;
                for (auto s : students) {
                    if (s.getId() == id) {
                        cout << "Courses:\n";
                        s.showCourses();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Student not found.\n";
                }
            }

            // Sort Students by GPA
            else if (choice == 7) {
                sort(students.begin(), students.end(), [](Student a, Student b) {
                    return a.getGpa() > b.getGpa();  // ترتيب تنازلي
                    });
                cout << "Students sorted by GPA successfully.\n";
            }

            else if (choice == 8) {
                cout << "Exiting program...\n";
            }

            else {
                cout << "Invalid choice! Try again.\n";
            }

        } while (choice != 8);

        return 0;
    }