//https://repl.it/join/gdrwrnmy-sukhvirdi7
//After looking at online resources and the resource provided in the ADA document, I aimed to firstly retrieve user input then to enable the program to open/create a csv file then read the input string to then take and print it into the file in real time using fout.close(), finally the user then has a decision to restart or exit the loop. No major problems on this challenge however I learnt how to use the ofstream class.

#include <iostream>
#include <sys/stat.h>
#include <fstream>
using namespace std;

ofstream fout;

//opens main method
int main() {

  //initalising variables
  string name;
  string restart;

  //loop 
  while(true){
    cout << "\nEnter name: ";
    
    //opens or creates list csv file
    fout.open("list.csv", ios::app); 
    
    //reads the input string and prints updating file and inserts into csv
    getline(cin, name);
    cout << "Updating file..\n\n";
    fout << name << ", ";

    fout.close();
    cout << "Add another: (y/n) ";

    //on restart the loop gets reactivated
    getline(cin , restart);
    if ((restart == "Y") || (restart == "y")){
    
    //or it gets exited if the user presses another key
    } else {
    cout << "\nGoodbye\n";
    return 0;}
  }
}
