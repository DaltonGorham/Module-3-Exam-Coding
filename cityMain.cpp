#include "city.cpp"
#include "itinerary.cpp"
using namespace std;

int main(){

  City city1("New York", 32.9932, -68.929);
  City city2("Little Rock", 81.19920, -911.1002);
  City city3("Chicago", 22.3922, -49.0091);
  City city4("Dallas", 28.9921, -99.2932);
  vector<City> cities;
  cities.push_back(city1);
  cities.push_back(city2);
  cities.push_back(city3);
  cities.push_back(city4);

   Itinerary itinerary;
   itinerary.addCity(city1);
   itinerary.addCity(city2);

   Itinerary itineraryTwo;
    itineraryTwo.addCity(city3);
    itineraryTwo.addCity(city4);

   Itinerary combined =  itinerary + itineraryTwo;



  cout << "Total Distance: " << combined.getTotalDistance(); 



  return 0;
}
