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
            cout << "Area of window " << id << " is: " << area() << endl;
        }
        void set_data(char i, int w, int h) {
            id = i;
            width = w;
            height = h;
        }
        void set_data(char i) {
            id = i;
        }
        void set_data(int w, int h) {
            width = w;
            height = h;
        }
};

int main(void){
    Window w1, w2;
    w1.set_data('A', 10, 20);
    w2.set_data('B');
    w2.set_data(30, 40);
    w1.print_area();
    w2.print_area();
}