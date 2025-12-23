#include <iostream>
using namespace std;

class BaseClass {
public:
    int var_base;
    void display() {
        cout << "Displaying the class variable var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    int var_derived;
    void display() {
        cout << "Displaying the class variable var_base: " << var_base << endl;
        cout << "Displaying the class variable var_derived: " << var_derived << endl;
    }
};

int main() {
    BaseClass base;
    base.var_base = 10;
    base.display();

    DerivedClass derived;
    derived.var_base = 20;
    derived.var_derived = 30;
    derived.display();

    return 0;
}
