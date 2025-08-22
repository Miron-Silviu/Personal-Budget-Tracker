# Personal-Budget-Tracker

📌 Project Overview

The Personal Budget Tracker is a C program designed to help users manage and analyze their weekly expenses. It allows users to input spending in key categories such as Groceries, Rent, and Utilities, and then provides insights into overall spending patterns over one or more weeks.

This project demonstrates fundamental C programming concepts such as:

Variables for storing expense data

Arithmetic operators for calculating totals

User input/output using scanf and printf

Logical operators and conditional statements (if, else) for decision-making

Validation to ensure correct input handling

Loops for repeating the program over multiple weeks

⚙️ Features

Input weekly expenses for categories (Groceries, Rent, Utilities).

Automatically calculate total weekly expense.

Compare spending between weeks to identify trends (increase, decrease, or stable).

Input validation to ensure only valid numeric values are entered.

Clear and formatted output for easy understanding.

🛠 How It Works

The program prompts the user to enter expenses for Groceries, Rent, and Utilities.

Each expense is stored in variables of type float or int.

Arithmetic operators (+) are used to calculate the total weekly expense.

The program compares totals across weeks using if-else conditions.

Validation ensures that only positive values are accepted; invalid input triggers re-entry.

Results are displayed using printf in a structured format.

📖 Example Usage
Enter expenses for Week 1:  
Groceries: 120  
Rent: 500  
Utilities: 80  
Total for Week 1 = 700

Enter expenses for Week 2:  
Groceries: 150  
Rent: 500  
Utilities: 90  
Total for Week 2 = 740

Comparison: Spending increased by 40 compared to last week.

🧑‍💻 How I Built It

Step 1: Declared Variables → Defined variables for groceries, rent, utilities, and totals using float.

Step 2: Collected Input → Used scanf to take user input for each expense.

Step 3: Performed Calculations → Used arithmetic operators to compute the weekly total.

Step 4: Added Validation → Used conditional checks to reject negative values.

Step 5: Compared Totals → Used if, else if, and else statements to compare weekly totals.

Step 6: Displayed Results → Printed results using printf with proper formatting.

🚀 Future Improvements

Add more categories (transportation, entertainment, savings).

Store expense data in a file using file handling (fopen, fprintf, etc.).

Display multi-week trends with averages and percentages.

Implement graphical reports with external libraries.

📂 Files in This Project

personal_budget_tracker.c → The main program source code.

README.md → Documentation file (this file).
