#include <iostream>
using namespace std;
class Number {
private:
    int value;

public:
    Number(int val = 0) : value(val) {}

    int getValue() const {
        return value;
    }

    // Overloading the equality operator (==)
    bool operator==(const Number& other) const {
        return value == other.value;
    }

    // Overloading the inequality operator (!=)
    bool operator!=(const Number& other) const {
        return value != other.value;
    }

    // Overloading the less than operator (<)
    bool operator<(const Number& other) const {
        return value < other.value;
    }


    // Overloading the less than or equal to operator (<=)
    bool operator<=(const Number& other) const {
        return value <= other.value;
    }

    // Overloading the greater than operator (>)
    bool operator>(const Number& other) const {
        return value > other.value;
    }

    // Overloading the greater than or equal to operator (>=)
    bool operator>=(const Number& other) const {
        return value >= other.value;
    }
};


int main() {
    Number num1(5);
    Number num2(10);

    if (num1 == num2) {
        cout << "num1 is equal to num2" << endl;
    } else {
        cout << "num1 is not equal to num2" << endl;
    }

    if (num1 != num2) {
	cout << "num1 is not equal to num2" << endl;
    } else {
	cout << "num1 is equal to num2" << endl;
    }

    if (num1 < num2) {
	cout << "num1 is less than num2" << endl;
    } else {
	cout << "num1 is not less than num2" << endl;
    }

    if (num1 <= num2) {
	cout << "num1 is less than or equal to num2" << endl;
    } else {
	cout << "num1 is neither less than nor equal to num2" << endl;
    }

    if (num1 > num2) {
	cout << "num1 is greater than num2" << endl;
    } else {
	cout << "num1 is not greater than num2" << endl;
    }

    if (num1 >= num2) {
	cout << "num1 is greater than or equal to num2" << endl;
    } else {
	cout << "num1 is neither greater than nor equal to num2" << endl;
    }

    return 0;
}

