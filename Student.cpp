#include "Student.h"
#include <iostream>
#include<iomanip>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id , char stname[]) {
  studentId=id;
  strcpy(name, stname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID : \t"<< studentId << endl;
  cout<<"Student Name: \t"<< name << endl;
}
