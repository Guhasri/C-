#include <iostream>
using namespace std;

class Array {
private:
    int* data;
    int size;

public:
    Array(int n) : size(n) {
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = i + 1;
        }
    }

    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return data[index];
        } else {
            // Handle out-of-bounds access
	cout << "Error: Index out of bounds" << endl;
            exit(1);
        }
    }
    
    int getSize() const {
        return size;
    }

    ~Array() {
        delete[] data;
    }
};

int main() {
    Array arr(5);

	cout << "Array size: " << arr.getSize() << endl;

	cout << "Elements: ";
    for (int i = 0; i < arr.getSize(); i++) {
	cout << arr[i] << " ";
    }
	cout << endl;

    // Modifying elements using subscript operator
    arr[2] = 10;
    arr[4] = 20;

	cout << "Modified elements: ";
    for (int i = 0; i < arr.getSize(); i++) {
	cout << arr[i] << " ";
    }
	cout << endl;

    // Accessing out-of-bounds element
	cout << "Trying to access out-of-bounds element..." << endl;
	cout << arr[6] << endl;

    return 0;
}

