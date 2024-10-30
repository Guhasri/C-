#include <iostream>
using namespace std;

class Account {
private:
    string name;
    float balance;
public:
    Account(string n, float b) {
        name = n;
        balance = b;
    }
    void deposit(float amount) {
        balance += amount;
    }
    void withdraw(float amount) {
        balance -= amount;
    }
    inline void transfer(Account &a, float amount) {
        withdraw(amount);
        a.deposit(amount);
    }
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a[2]={Account("Ram", 1000),Account("Disha", 2000)};


    a[0].transfer(a[1], 1000);

    a[1].display();

    return 0;
}
