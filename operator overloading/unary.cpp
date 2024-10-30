#include<iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int num) : value(num) {}

    Number operator-() {
        return Number(-value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num(5);
    Number negNum = -num;
    negNum.display();  		// Output: Value: -5
    return 0;
}
