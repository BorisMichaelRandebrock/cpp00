# C++ - Module 00: Implementation Details

This module consists of exercises that introduce key concepts in C++, focusing on Object-Oriented Programming (OOP) principles and adhering to the C++98 standard. Below are the implementation details for each exercise.

## Exercise 00: Megaphone
The Megaphone program takes command-line arguments and converts them into uppercase letters. It utilizes the `std::toupper` function to transform each character. If no arguments are provided, the program outputs a warning message. The implementation demonstrates string handling and user input processing through command-line interfaces.

## Exercise 01: My Awesome PhoneBook
In the PhoneBook exercise, two classes are implemented: `PhoneBook` and `Contact`. 

- **PhoneBook Class**: 
  - Contains an array of `Contact` objects, allowing a maximum of 8 contacts. 
  - New entries replace the oldest contacts when the limit is exceeded.
  - Handles user commands: ADD (to add a new contact), SEARCH (to display contacts), and EXIT (to terminate the program).
  
- **Contact Class**:
  - Represents individual contact information with fields for first name, last name, nickname, phone number, and darkest secret. 
  - Ensures that all fields are populated before saving a contact.

The program features input validation, including checking for empty fields during contact creation. The SEARCH command displays contacts in a formatted table, ensuring alignment and proper truncation of data for better readability.

## Exercise 02: The Job Of Your Dreams
For this exercise, the task is to implement the `Account` class in `Account.cpp`, based on the provided header file and log file. The implementation involves:
- Defining constructors and member functions to manage account operations.
- Ensuring that the order of destructors is handled correctly, as the destructors may be called in reverse order based on the compiler.
- The focus is on understanding the behavior of the `Account` class as inferred from the log, matching expected outputs without dynamic memory allocation.
