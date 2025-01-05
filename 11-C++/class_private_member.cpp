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
        void set_data(char i, int w, int h) {
            id = i;
            width = w;
            height = h;
        }
};

int main(void){
    Window w1;
    w1.set_data('A', 10, 20);
    w1.print_area();
}