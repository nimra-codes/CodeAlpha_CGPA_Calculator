# CGPA & GPA Calculator

A C++ console-based **GPA and CGPA Calculator** developed as my first project during my **Code Alpha Internship**.

## 📌 Project Overview

This program calculates a student's **semester GPA** and **overall CGPA** based on course grades and credit hours.

It also allows the user to enter previous semester CGPA and total credit hours to calculate the updated overall CGPA.

## ✨ Features

* Enter student's name
* Enter the number of courses
* Enter grades for each course
* Enter credit hours for each course
* Validate course and credit-hour inputs
* Validate grades from A to F
* Calculate grade points
* Calculate total grade points
* Calculate total credit hours
* Calculate semester GPA
* Calculate overall CGPA
* Display a summary of course details and results
* Supports first-semester and previous-semester calculations

## 🛠️ Technologies Used

* **C++**
* **Vectors**
* **Functions**
* **Loops**
* **Conditional Statements**
* **Input Validation**
* **iomanip** for formatted output

## 📊 Grading Scale

| Grade | Grade Point |
| ----- | ----------- |
| A     | 4.0         |
| B     | 3.0         |
| C     | 2.0         |
| D     | 1.0         |
| F     | 0.0         |

## 🧮 Calculations

### Semester GPA

The semester GPA is calculated using credit hours:

```text
GPA = Total Grade Points / Total Credit Hours
```

### Overall CGPA

For students with previous semester results:

```text
CGPA =
((Previous CGPA × Previous Credit Hours) +
(Current GPA × Current Credit Hours))
/
(Previous Credit Hours + Current Credit Hours)
```

## ▶️ How to Run

### 1. Clone the repository

```bash
git clone https://github.com/YOUR-USERNAME/CGPA-GPA-Calculator.git
```

### 2. Open the project

Open the project folder in **VS Code** or any C++ IDE.

### 3. Compile the program

Using g++:

```bash
g++ cgpa.cpp -o cgpa
```

### 4. Run the program

On Windows:

```bash
cgpa
```

Or:

```bash
.\cgpa.exe
```

## 📷 Sample Output

```text
========================================================
```
