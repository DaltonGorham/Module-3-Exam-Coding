#ifndef Person_H
#define Person_H
#include <iostream>
using namespace std;



class Person{
private:
  string firstName;
  string lastName;
  string dateOfBirth;
public:
  Person();
  Person(string f, string l, string d);
  string getFirstName()const;
  string getLastName()const;
  string getDateOfbirth()const;

};








#endif