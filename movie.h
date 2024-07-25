#ifndef Movie_H
#define Movie_H
#include "person.h"
#include <vector>
using namespace std;

class Movie{
private:
  string name;
  Person director;
  vector<Person> cast;
  int runTime;
public: 
  Movie();
  Movie(vector<Person> c, string n);
  static bool isLongMovie(int min);
  friend ostream& operator<<(ostream& strm, Movie& m);
  string getName()const;
  vector<Person> getCast()const;
  int getRunTime()const;
  Person getDirector()const;
  void setDirector(Person& d);
  void setRunTime(int num);

  friend ostream;

};







#endif