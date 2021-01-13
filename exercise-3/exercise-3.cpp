//https://repl.it/join/cxjbnbwz-sukhvirdi7
//After reading the requirements I combined my previously written code from my last two exercises and moulded it together to achieve the user story, the part which required most time for me was to write code that would reach each line of the file which would then be outputted to the user.

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <algorithm>
using namespace std;

//reused from my first exercise to obtain user information
struct stat buf;

bool fileExists(const string & file) {
  return (stat(file.c_str(), & buf) == 0);
}

void read(string fileName) {
  ifstream fin;
  string line;
  int lineNumber = 1;
  
  //opens the file and reads each line of the file with the loop
  fin.open(fileName);
  while (!fin.eof()) {
    fin >> line;
    replace(line.begin(), line.end(), ',', ' ');
    cout << lineNumber << ": " << line << "\n";
    lineNumber += 1;
  }
  //prints number of lines read
  cout << "\nTotal number of lines read: " << lineNumber - 1 << "\n";
}

//obtained from my first exercise: checks for existing file name with loop and see if the fileName exists or if not it exists.
int main() {
  string fileName;
  string data;
  while (true) {
    cout << "Please enter a valid filename: ";
    cin >> fileName;
    if (fileExists(fileName)) {
      read(fileName);
      return 0;
    } else {
      cout << "Sorry, '" << fileName << " '  does not exist.\n\n";
    }
  }
}
