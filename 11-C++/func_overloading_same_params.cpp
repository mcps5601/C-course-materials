#include <iostream>
using namespace std;

void print(int num) {
    cout << "Integer: " << num << endl;
}
void print(double num) {
    cout << "Double: " << num << endl;
}
void print(string str) {
    cout << "String: " << str << endl;
}
int main(void) {
    print(42);          // call print(int)
    print(3.14);        // call print(double)
    print("Hello");     // call print(string)
    return 0;
}
