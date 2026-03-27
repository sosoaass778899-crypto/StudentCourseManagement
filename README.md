# Student Course Management System

> A console-based C++ application for managing students and their course enrollments, built using OOP principles and the C++ Standard Template Library (STL).

---

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Project Structure](#project-structure)
- [Requirements](#requirements)
- [How to Compile and Run](#how-to-compile-and-run)
- [Usage Guide](#usage-guide)
- [OOP & STL Concepts Used](#oop--stl-concepts-used)
- [Example Output](#example-output)
- [License](#license)

---

## Overview

The **Student Course Management System** is a menu-driven C++ console application that allows users to:

- Add and remove students
- Search for students by ID
- Enroll students in courses
- Display all students and their courses
- Sort students by GPA

---

## Features

| Feature                    | Description                                      |
|---------------------------|--------------------------------------------------|
| Add Student               | Register a student with unique ID, name, and GPA |
| Remove Student            | Delete a student record by ID                    |
| Search Student            | Look up a student by their unique ID             |
| Display All Students      | List all registered students with details        |
| Enroll in Course          | Add a course to a specific student               |
| Show Student Courses      | View all courses a student is enrolled in        |
| Sort by GPA               | Sort all students in descending GPA order        |

---

## Project Structure

```
StudentManagementSystem/
│
├── Person.h                          # Base class declaration
├── Person.cpp                        # Base class implementation
├── Student.h                         # Derived class declaration
├── Student.cpp                       # Derived class implementation
└── Student_Course_Management_System.cpp  # Main application entry point
```

---

## Requirements

| Requirement     | Details                          |
|----------------|----------------------------------|
| Language        | C++17 or later                   |
| Compiler        | g++ / clang++ / MSVC             |
| OS              | Windows, macOS, or Linux         |
| Build Tool      | g++ (GCC) recommended            |
| IDE (Optional)  | Visual Studio, VS Code, CLion    |

---

## How to Compile and Run

### Using g++ (Linux / macOS / Windows with MinGW)

**Step 1 – Clone or download the project files into a folder.**

**Step 2 – Open a terminal and navigate to the project directory:**

```bash
cd path/to/StudentManagementSystem
```

**Step 3 – Compile all source files:**

```bash
g++ -std=c++17 -o StudentSystem Person.cpp Student.cpp Student_Course_Management_System.cpp
```

**Step 4 – Run the executable:**

```bash
# Linux / macOS
./StudentSystem

# Windows
StudentSystem.exe
```

---

### Using Visual Studio (Windows)

1. Open Visual Studio and create a new **Empty C++ Project**.
2. Add all `.cpp` and `.h` files to the project via **Project > Add Existing Item**.
3. Set the C++ standard to **C++17** under **Project Properties > C/C++ > Language**.
4. Press **Ctrl+F5** to build and run without debugging.

---

### Using VS Code with C++ Extension

1. Install the **C/C++ extension** by Microsoft.
2. Open the project folder in VS Code.
3. Create a `tasks.json` build task or use the integrated terminal to run the `g++` command above.

---

## Usage Guide

After launching the program, you will see the following menu:

```
======= Student Management System =======
1. Add Student
2. Display All Students
3. Search Student
4. Remove Student
5. Enroll Student in Course
6. Show Student Courses
7. Sort Students by GPA
8. Exit
Enter choice:
```

- Enter a number (1–8) and press **Enter** to select an option.
- Follow the on-screen prompts to provide input.
- **GPA must be between 0.0 and 4.0** — invalid values will be rejected.
- **Student IDs must be unique** — duplicate IDs will be rejected.
- **Duplicate courses** for the same student are automatically prevented (uses `std::set`).

---

## OOP & STL Concepts Used

### Object-Oriented Programming
- **Inheritance:** `Student` inherits from `Person`
- **Encapsulation:** Private data members with public getter methods
- **Constructors:** Parameterized constructors in both classes

### STL Containers
- `std::vector<Student>` — stores all students dynamically
- `std::set<string>` — stores unique courses per student

### STL Algorithms
- `std::sort()` — sorts students by GPA in descending order
- Manual iteration with `for` loops for search and removal

---

## Example Output

```
======= Student Management System =======
1. Add Student
...
Enter choice: 1
Enter ID: 1001
Enter Name: Ali
Enter GPA: 3.5
Student added successfully!

Enter choice: 5
Enter Student ID: 1001
Enter Course Name: Math
Course added successfully.

Enter choice: 6
Enter Student ID: 1001
Courses:
Math
```

---

## License

This project was developed as an academic assignment for educational purposes.
