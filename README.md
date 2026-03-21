# Student Management System

A desktop application for managing students, instructors, and administrators built with Qt/C++.

## Team Members

| Role | Name | ID |
|------|------|-----|
| Team Leader | Eyad Ehab | 23-101054 |
| Member | Youssef Osama | 22-101233 |
| Member | Ahmed Ehab | 23-101005 |
| Member | Yassin Hany | 23-101235 |
| Member | Ali Amin | 23-101159 |

## Project Overview

This Student Management System is a Qt-based desktop application that provides role-based access control for three types of users:
- **Students**: Can enroll in courses, drop courses, and view grades
- **Instructors**: Can add/remove courses and update student grades
- **Administrators**: Can manage users (add/remove) and manage courses

## Features

### Authentication
- Login/Signup functionality
- User ID and password authentication
- Role selection during signup (Student, Instructor, Administrator)

### Student Features
- Enroll in courses
- Drop courses
- View grades

### Instructor Features
- Add courses
- Remove courses
- Update student grades by entering student ID and course name

### Administrator Features
- Add users
- Remove users
- Add courses
- Remove courses

## Technology Stack

- **Framework**: Qt 5.12.8
- **Language**: C++ (GNU++17)
- **Build System**: qmake/Makefile
- **UI**: Qt Widgets (.ui files)

## Project Structure

```
/workspace
├── SRC/                    # Source code directory
│   ├── main.cpp           # Application entry point
│   ├── start.h/cpp        # Login/Signup window
│   ├── MainWindow.h/cpp   # Main application window
│   ├── user.h/cpp         # Base user class
│   ├── student.h/cpp      # Student class and UI
│   ├── instructor.h/cpp   # Instructor class and UI
│   ├── adminstrator.h/cpp # Administrator class and UI
│   ├── signup2.h/cpp      # Signup window
│   ├── adduser.h/cpp      # Add user functionality
│   ├── course.h           # Course definition
│   ├── *.ui               # Qt Designer UI files
│   ├── Users.txt          # User database
│   ├── Grades.txt         # Grades database
│   ├── courses.txt        # Courses database
│   └── Makefile           # Build configuration
├── UML.png                # UML diagram
├── team presentation.pptx # Project presentation
└── README.md              # This file
```

## Prerequisites

- Qt 5.12 or later
- g++ compiler with C++17 support
- Make

## Building the Project

1. Navigate to the source directory:
   ```bash
   cd SRC
   ```

2. Generate the Makefile (if not already present):
   ```bash
   qmake stmmmmm.pro
   ```

3. Build the project:
   ```bash
   make
   ```

## Running the Application

After building, run the executable:
```bash
./stmmmmm
```

## Usage Guide

### First Time Setup
1. Launch the application
2. Click "Sign Up" to create a new account
3. Enter your ID and create a password
4. Select your role (Student, Instructor, or Administrator)
5. Click "Signup"
6. Close the signup page and return to login

### Login
1. Enter your ID and password
2. Click "Login"
3. Access role-specific features

### Role-Specific Operations

#### As a Student
- **Enroll**: Register for available courses
- **Drop**: Remove yourself from enrolled courses
- **View Grades**: Check your academic performance

#### As an Instructor
- **Add Course**: Create new courses
- **Remove Course**: Delete existing courses
- **Update Grade**: Enter student ID and course name to modify grades

#### As an Administrator
- **Add User**: Create new user accounts
- **Remove User**: Delete existing user accounts
- **Add/Remove Course**: Manage course catalog

## Data Files

The application uses text files for data persistence:
- `Users.txt`: Stores user credentials and roles
- `Grades.txt`: Stores student grades
- `courses.txt`: Stores course information

## Contributing

This is a team project. Please coordinate with team members before making changes.

## License

This project is created for educational purposes.

## Acknowledgments

Built using Qt Framework - https://www.qt.io/