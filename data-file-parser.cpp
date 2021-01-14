//https://repl.it/join/oedgktoz-sukhvirdi7
//I approached this primer by thoroughly researching how to correctly use iomainp and what the setw does, etc..
//I decomposed the problem and worked on chunks of it initially by getting the file to read, then header to work and so on.
//A part of the primer that was challenging was to finally format the console output correctly for the table content.


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//logic all within one method
int main() {
  string line;
  ifstream myfile("salary.txt");

  //read file or if its not there error message
  if (!myfile.is_open()) {
    return 1;
  }

  //for the column headers - spacing and aligning
  cout << setw(5) << left  << "Initial " << " ";
  cout << setw(9) << left << "Last " << " ";
  cout << setw(5) << left  << "Salary " << " " << endl;
  cout << setfill('-') << setw(25) << left  << "-" << endl;

  //content of the file within while loop 
  while (myfile) {

    string line;
    getline(myfile, line, (' '));

    string lastName;
    myfile >> lastName;

    int salary;
    myfile >> salary;

    myfile >> ws;

    if (!myfile) {
      break;
    }

    //to remove the comma from last name
    lastName[lastName.length() -1 ] = ' ';

    //prints the table content to the user 
    cout  << setfill(' ')  << line[0] << setw(8) << left <<  "." << setw(10) << left << lastName  << "£"  << salary << endl;
  }

  myfile.close();

}
