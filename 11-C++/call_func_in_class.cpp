#include <iostream>
#include <cstdlib>
using namespace std;

class Window {
    public: // Declarations under this line are public
        char id;
        int width;
        int height;
        int area(void) {
            return width * height;
        }
        void print_area(void) {
            cout << "Area of window ";
            cout << id << " is: " << area() << endl;
        }
};
int main(void){
    Window w1;
    w1.id = 'A';
    w1.width = 10;
    w1.height = 20;
    w1.print_area();
}