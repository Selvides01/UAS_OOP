#include <iostream>
using namespace std;

class mobil {
 public:
  mobil(string b, int y, int s) : brand(b), year(y), speed(s) {}

  double timeToTravel(int distance) const {
    return static_cast<double>(distance) / speed;
  }

  void printInfo() const {
    cout << "Brand: " << brand << endl;
    cout << "Year: " << year << endl;
    cout << "Speed: " << speed << " km/h" << endl;
  }

 private:
  string brand;
  int year;
  int speed;
};

int main() {
  mobil mobilselvi("kijang inovva", 2011, 60);
  mobilselvi.printInfo();
  cout << "Time to travel 100 km: " << mobilselvi.timeToTravel(100) << " hours" << endl;
  return 0;
}
