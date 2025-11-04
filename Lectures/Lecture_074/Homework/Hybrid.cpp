#include <iostream>
using namespace std;

// Class F - Base class
class ClassF {
public:
    void displayF() { cout << "Class F" << endl; }
};

// Class G - Base class
class ClassG {
public:
    void displayG() { cout << "Class G" << endl; }
};

// Class B - Inherits from Class F
class ClassB : public ClassF {
public:
    void displayB() { cout << "Class B" << endl; }
};

// Class E - Inherits from both Class F and Class G (Multiple Inheritance)
class ClassE : public ClassF, public ClassG {
public:
    void displayE() { cout << "Class E" << endl; }
};

// Class A - Inherits from Class B (Hierarchical Inheritance)
class ClassA : public ClassB {
public:
    void displayA() { cout << "Class A" << endl; }
};

// Class C - Inherits from Class B (Hierarchical Inheritance)
class ClassC : public ClassB {
public:
    void displayC() { cout << "Class C" << endl; }
};

int main() {
    ClassA objA;
    ClassC objC;
    ClassE objE;

    // Displaying Class A, B, and F functionality
    cout << "Class A functionality:" << endl;
    objA.displayA();
    objA.displayB();
    objA.displayF();

    // Displaying Class C, B, and F functionality
    cout << "\nClass C functionality:" << endl;
    objC.displayC();
    objC.displayB();
    objC.displayF();

    // Displaying Class E, F, and G functionality
    cout << "\nClass E functionality:" << endl;
    objE.displayE();
    objE.displayF();
    objE.displayG();

    return 0;
}
