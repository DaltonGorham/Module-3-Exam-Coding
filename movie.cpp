#include "movie.h"
#include <string>
using namespace std;


Movie::Movie(){}

Movie::Movie(vector<Person> c, string n) : cast(c), name(n){}


string Movie::getName()const{
  return name;
}

vector<Person> Movie::getCast()const{
  return cast;
}

int Movie::getRunTime()const{
  return runTime;
}

void Movie::setRunTime(int num){
  runTime = num;
}


Person Movie::getDirector()const{
  return director;
}


ostream& operator<<(ostream& strm, Movie& m){
  strm << "Movie: " << m.getName() << endl;
  strm << "Cast: " << endl;
  for (Person& p : m.getCast()){
    strm << p.getFirstName() << " " << p.getLastName() << " " << "Date of Birth: " << p.getDateOfbirth() << endl;
  }
  strm << "Run Time: " << m.getRunTime() << (m.isLongMovie(m.getRunTime()) ? " mins ,That's a long movie!" : " mins ,That is not a long movie!");
  return strm;
}

bool Movie::isLongMovie(int min){
  if (min > 135 ){
    return true;
  }
  return false;
}

void Movie::setDirector(Person& d){
  director = d;
}




