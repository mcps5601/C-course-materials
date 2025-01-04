#include <iostream>
#include <cstdlib>

using namespace std;
/*
struct Window {
    char id;
    int width;
    int height;
};

int area(struct Window w) {
    return w.width * w.height;
}
*/
class Window {
    public: // Declarations under this line are public
        char id;
        int width;
        int height;
        int area(void) {
            return width * height;
        }
};

int main(void){
    Window w1;
    w1.id = 'A';
    w1.width = 10;
    w1.height = 20;
    cout << "Area of window " << w1.id << " is: " << w1.area() << endl;
    cout << "Size of W1: " << sizeof(w1) << " bytes" << endl;
}