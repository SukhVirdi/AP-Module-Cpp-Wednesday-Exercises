//https://repl.it/join/olljggvx-sukhvirdi7
//I researched stackoverflow and various websites to look at some examples on how to display the status of a file including the size and modified date.
//I found that the stat function provided the outcome and utilised it to take the file name and further informatipon
#include <sys/stat.h>
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

struct stat buf;
//stat function to obtain information
bool fileExists(const string & name) {
  return (stat(name.c_str(), & buf) == 0);
}
//takes file name
int main() {
  string filename;
  //user input
  cout << "Filename to check: ";
  cin >> filename;
  //if statement to check the file name exists and prints to the user the required output 
  if (fileExists(filename)) {
    cout << "\n" << filename << ", " << buf.st_size << " bytes, last modified: " << ctime( & buf.st_mtime) << "\n\n";
  } else {
    cout << filename << " does not exist\n\n";
  }

  return 0;
}
