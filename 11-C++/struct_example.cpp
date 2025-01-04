#include <iostream>
#include <cstdlib>
using namespace std;

struct Window {
    char id;
    int width;
    int height;
};
int area(struct Window w) {
    return w.width * w.height;
}
int main(void){
    Window w1; // typedef is not needed in C++
    // Window w1 = {'A', 10, 20};
    w1.id = 'A';
    w1.width = 10;
    w1.height = 20;
    cout << "Area of window " << w1.id << " is: " << area(w1) << endl;
    cout << "Size of W1: " << sizeof(w1) << " bytes" << endl;
}