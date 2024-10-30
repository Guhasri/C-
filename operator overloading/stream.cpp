#include <iostream>
using namespace std;
class MyClass {
private:
    int value;

public:
    MyClass(int val = 0) : value(val) {}

    // Overloading the stream insertion operator (<<) as a member function
	ostream& operator<<(ostream& os) const {
        os << "Value: " << value;
        return os;
    }

    // Overloading the stream extraction operator (>>) as a member function
	istream& operator>>(istream& is) {
        is >> value;
        return is;
    }
};

int main() {
    MyClass obj;

	cout << "Enter a value: ";
    obj >> cin;

	cout << "Object: ";
    obj << cout;
	cout << endl;

    return 0;
}
