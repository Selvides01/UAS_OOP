 #include <iostream>
using namespace std;

class BankAccount {
 public:
  BankAccount(string o, double b) : pemilik(o), saldo(b) {}

  void deposit(double amount) {
    saldo += amount;
  }

  bool withdraw(double amount) {
    if (saldo >= amount) {
      saldo -= amount;
      return true;
    } else {
      cout << "Insufficient balance" << endl;
      return false;
    }
  }

  void printBalance() const {
    cout << "Current saldo: " << saldo << endl;
  }

 private:
  string pemilik;
  double saldo;
};

int main() {
  BankAccount selvides("SELVI DESTI RIYANI", 1000.0);
  selvides.deposit(500.0);
  selvides.withdraw(300.0);
  selvides.printBalance();
  return 0;
}
