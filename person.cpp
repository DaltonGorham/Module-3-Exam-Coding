#include "person.h"
using namespace std;


Person::Person(){}

Person::Person(string n,string l, string d) : firstName(n), lastName(l), dateOfBirth(d){}


string Person::getFirstName()const{
  return firstName;
}

string Person::getLastName()const{
  return lastName;
}

string Person::getDateOfbirth()const{
  return dateOfBirth;
}



