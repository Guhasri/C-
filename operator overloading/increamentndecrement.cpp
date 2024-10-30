#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val = 0) : value(val) {}

Number& operator++() {		 // Pre-increment operator (++num)
        ++value;
        return *this;
    }

Number& operator--() {		 // Pre-decrement operator (--num)
        --value;
        return *this;
    }

Number operator++(int) {	
    cout<<value;	 // Post-increment operator (num++)
        Number temp(value);
        ++value;
        return temp;
    }
Number operator--(int) {			 // Post-decrement operator (num--)
        Number temp(value);
        --value;
        return temp;}
    int getValue() const {
        return value;
    }};
int main() {
    Number num(5);
	++num;						 // Pre-increment
	cout << "Pre-increment: " << num.getValue() <<endl;
	--num;						 // Pre-decrement
   	cout << "Pre-decrement: " << num.getValue() << endl;
	Number result1 = num++;					 // Post-increment
	cout << "Post-increment: " << result1.getValue() << endl;
	cout << "After Post-increment: " << num.getValue() << endl;
	Number result2 = num--;					 // Post-decrement
	cout << "Post-decrement: " << result2.getValue() << endl;
         cout << "After Post-decrement: " << num.getValue() <<endl;
    return 0;
}
