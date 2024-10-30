#include <iostream>

class Number {
private:
    int value;
public:
    Number(int num) : value(num) {}

    // Overloading the assignment operator
    Number& operator=(const Number& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Number num1(5);
    Number num2(10);

    num2 = num1;  // Assignment using the overloaded operator

    num1.display();  // Output: Value: 5
    num2.display();  // Output: Value: 5

    return 0;
}
