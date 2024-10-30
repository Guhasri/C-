#include<iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int num) : value(num) {}

    Number operator+(const Number& other) {
        cout<<other.value;
        return Number(value + other.value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(5);
    Number num2(10);
    Number sum = num1 + num2;
    sum.display();  // Output: Value: 15
    return 0;
}
