# Medication Dosage Reminder and Schedule Checker

## Overview
The Medication Dosage Reminder and Schedule Checker is a beginner-friendly biomedical C programming project. It compares user-entered medication schedules with a user-entered current time and displays the schedule status.

## Objectives
- Store multiple medication schedules.
- Compare scheduled times with the current time.
- Identify upcoming and passed scheduled times.
- Practise arrays, loops, and conditional statements.

## Features
- Accepts up to 10 medicine names and scheduled times.
- Validates hour and minute inputs.
- Converts times into minutes for easy comparison.
- Displays the scheduled time and status for each medicine.
- Calculates the time until or since the scheduled time.

## Programming Concepts
- Variables and data types
- Arrays
- `for` loops
- `if-else` statements
- Logical operators
- Input validation
- Time conversion and arithmetic

## How to Run
1. Open `main.c` in a C compiler.
2. Compile and run the program.
3. Enter the number of medicines.
4. Enter each medicine name and its scheduled time.
5. Enter the current time.
6. View the generated schedule report.

## Limitations
- This is a console-based schedule checker, not an actual alarm or notification system.
- It does not save schedules after the program closes.
- It checks times within a single day and does not handle overnight schedules.
- It does not determine medicine dosage or whether a medicine should be taken.

## Disclaimer
This project is intended for educational purposes only. Follow the medication schedule prescribed by a qualified healthcare professional. A passed scheduled time does not mean a dose should be taken late or doubled.

## Language
C
