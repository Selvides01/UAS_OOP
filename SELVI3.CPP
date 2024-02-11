#include <iostream>
using namespace std;

class murid {
 public:
  murid(string n, int a, double s) : nama(n), usia(a), nilai(s) {}

  void printInfo() const {
    cout << "Nama: " << nama << endl;
    cout << "usia: " << usia << " years old" << endl;
    cout << "nilai: " << nilai << endl;
  }

 private:
  string nama;
  int usia;
  double nilai;
};

int main() {
  murid muridselvi("SELVI DESTI RIYANI", 20, 85.0);
  muridselvi.printInfo();
  return 0;
}
