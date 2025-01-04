#include <iostream>
using namespace std;

void print_star(void) {
    cout << "Print 5 stars: *****" << endl;
}
void print_star(int num) {
    cout << "Print " << num << " stars: ";
    for (int i = 0; i < num; i++) {
        cout << "*";
    }
}
int main(void) {
    print_star();
    print_star(3);
}
