#ifndef Itinerary_H
#define Itinerary_H
#include "city.h"
#include <vector>
using namespace std;


class Itinerary{
private:
  vector<City> cities;
public:
  vector<City> getCities()const;
  void addCity(City city);
  static double getDistance(City Orig, City dest);
  Itinerary operator+(Itinerary& other);
  double getTotalDistance()const;
};






#endif