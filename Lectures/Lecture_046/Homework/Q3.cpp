#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello World";

    cout << "Address of string object: " << &str << endl;
    cout << "Address of internal character array (data): " << static_cast<const void*>(str.c_str()) << endl;

    return 0;
}
