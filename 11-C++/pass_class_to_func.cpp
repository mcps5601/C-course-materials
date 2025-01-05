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
        void set_data(char i, int w, int h) {
            id = i;
            width = w;
            height = h;
        }
};
void print_area(Window w) {
    cout << "Area of window ";
    cout << w.id << " is: " << w.area() << endl;
}
int main(void){
    Window w1;
    w1.set_data('A', 10, 20);
    print_area(w1);
}