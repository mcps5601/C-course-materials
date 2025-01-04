#include <iostream>
#include <cstdlib>

using namespace std;

class Window {
    private: // Declarations under this line are private
        char id;
        int width;
        int height;
    public: // Declarations under this line are public
        Window(char i, int w, int h) {
            id = i;
            width = w;
            height = h;
            cout << "Window " << id << " is created by Constructor." << endl;
        }
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
};

int main(void){
    Window w1('A', 10, 20);
    w1.print_area();
    w1.set_data('B', 30, 40);
    w1.print_area();
}