#ifndef City_H
#define City_H
#include <iostream>
using namespace std;

class City{
private: 
  string name;
  double latitude;
  double longitude;
public:
  City(string n, double lat, double lon);
  string getName()const;
  double getLat()const;
  double getLong()const;
};





#endif