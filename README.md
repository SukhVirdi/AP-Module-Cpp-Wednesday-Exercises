# AP-Module-Cpp-Wednesday-Exercises
This repository contains the Wednesday exercises from the 'Advanced Programming Module'.

## Exercise 1: File Exists
I created a simple C++ program that allows the user to enter a filename. The program displays the file’s status, if the file exists it includes the file size and last modified date.

Example output:
```
Filename to check: data.csv
data.csv does not exist

--OR--

Filename to check: data.csv
data.csv, 25 bytes, last modified: Tue Jan 12 14:41:00 2021
```
https://repl.it/join/olljggvx-sukhvirdi7

## Exercise 2: File Writer
I created a simple C++ program that allows the user to enter a name. The program appends (or create in the first instance) a plain text file called “list.csv” with the name entered. Once updated, the user is prompted to enter another name, if no additional names are expected the program finishes with a goodbye message.

Example output:
```
Enter name: Jaelynn Stuart
Updating file...

Add another (y/n)? Y

Enter name: John Smith
Updating file...

Add another (y/n)? N
Goodbye
```
https://repl.it/join/gdrwrnmy-sukhvirdi7

## Exercise 3: File Reader

I created a simple C++ program that prompts the user to enter a filename. If the file exists, the program displays and adds a count to each line with the total number of lines at the end; an appropriate indication is given if the file specified does not exist.

Example output:
```
Please enter a valid filename: list.cvs
Sorry, ‘list.cvs’ does not exist.

Please enter a valid filename: list.csv
1: Jaelynn Stuart
2: John Smith

Total number of lines read: 2
```
https://repl.it/join/cxjbnbwz-sukhvirdi7
