#include "movie.cpp"
#include "person.cpp"
#include <iostream>
using namespace std;


int main(){
  
  Person cast1("Tom","Cruise","6/2/1971");
  Person cast2("Tom", "Hardy","1/5/1983");
  Person cast3("John", "Taylor", "10/20/1962");
  Person director("Director: Jose", "Bautista", "4/9/1969");

  vector<Person> cast;
  cast.push_back(director);
  cast.push_back(cast1);
  cast.push_back(cast2);
  cast.push_back(cast3);
  string name = "Top Gun Maverick";

 Movie movie(cast,name);
 
 movie.setRunTime(135);
  cout << movie;

  cout << endl << endl;

  Person cast4("Andrew", "Garfield","8/10/1984");
  Person cast5("Tom", "Hanks", "7/5/1965");
  Person cast6("Scarlet", "Johanson", "10/26,1984");
  Person directorTwo("Director: Joe", "Biden", "10/9/1919");
  string movieName = "Forest Gump 2";
  vector<Person> castTwo;
  castTwo.push_back(directorTwo);
  castTwo.push_back(cast4);
  castTwo.push_back(cast5);
  castTwo.push_back(cast6);
  Movie longMovie(castTwo, movieName);
  longMovie.setRunTime(154);

  cout << longMovie;






  return 0;
}