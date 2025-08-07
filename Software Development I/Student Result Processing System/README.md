# Student Result Processing System (C Console Application)

> A simple and interactive console-based program to manage student records, calculate results, and display grades.

---

## 📚 Overview
The **Student Result Processing System** is a lightweight C program designed to manage and process student exam results efficiently via the command line interface.  
It allows you to:
- Add student details and marks.
- Calculate total marks, average score, and assign grades.
- Display all student records in a formatted table.
- Search for students by their ID.
- Exit the program gracefully.
This project is perfect for beginners to practice C programming fundamentals, including arrays, structures, functions, and console input/output.

---

## 🎯 Features
- **Add Student Record:** Enter student ID, name, and marks of 3 subjects.
- **Result Calculation:** Automatically calculates total marks, average, and assigns a grade based on average.
- **Display All Students:** View all student records in a clean tabular format.
- **Search Student:** Lookup a student by their ID quickly.
- **User-Friendly Menu:** Simple interactive console menu for easy navigation.

---

## 🛠️ How to Use
1. **Clone or download** this repository.
2. **Compile the program** using GCC or any C compiler:
   ```bash
   gcc student_result_system.c -o student_result_system
3. **Run the executable:**
   ```bash
   ./student_result_system

---

## 🎓 Grading Criteria
| Average Score | Grade |
| :----         | :---: |
| 90 and above  |   A   |
| 80 to 89      |   B   |
| 70 to 79      |   C   |
| 60 to 69      |   D   |
| Below 60      |   F   |

---

## 📋 Code Structure
- **struct Student:** Stores ID, name, marks, total, average, and grade.
- **calculateResult():** Calculates total, average, and assigns grade.
- **addStudent():** Adds new student details and calculates results.
- **displayStudents():** Displays all student records neatly.
- **searchStudent():** Finds a student by ID.
- **main():** Menu-driven interface for user interaction.

---

## 🚀 Future Enhancements
- Save and load student records from a file.
- Update or delete existing student records.
- Support for more subjects or dynamic number of subjects.
- Better input validation and error handling.
- GUI version for easier use.

---

## 💡 Why This Project?
This project is a great way to practice fundamental programming concepts such as:
- Structures and arrays
- File handling (for future versions)
- Function design and modular code
- User input and console output formatting