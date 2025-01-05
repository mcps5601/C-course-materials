#include <iostream>
#include <cstdlib>
using namespace std;

class Window {
    private: // Declarations under this line are private
        char id;
        int width;
        int height;
    public: // Declarations under this line are public
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
    w1.id = 'A'; // Error! `id` cannot be accessed (private).
    w1.width = 10; // Error! `width` cannot be accessed (private).
    w1.height = -20; // Error! `height` cannot be accessed (private).
    w1.print_area();
}