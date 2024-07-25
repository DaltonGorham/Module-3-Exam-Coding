#include "itinerary.h"
#include <cmath>
using namespace std;



double Itinerary::getDistance(City orig, City dest) {
    return sqrt(pow(orig.getLat() - dest.getLat(), 2) + pow(orig.getLong() - dest.getLong(), 2));
}


void Itinerary::addCity(City city){
  cities.push_back(city);
}

Itinerary Itinerary::operator+(Itinearary& other){
   Itinerary combined = *this;
    for (City& city : other.getCities()) {
        combined.addCity(city);
    }
    return combined;
}

vector<City> Itinerary::getCities() const {
    return cities;
}

double Itinerary::getTotalDistance() const {
    double totalDistance = 0.0;
    for (size_t i = 0; i < cities.size() - 1; ++i) {
        totalDistance += getDistance(cities[i], cities[i + 1]);
    }
    return totalDistance;
}
