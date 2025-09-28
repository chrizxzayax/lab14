#include <iostream>
#include <iomanip>
// comsc-210 | lab6 | Christian Molina 
using namespace std;

class Colors {
    private:
        int red;
        int green;
        int blue;


    public:
    Colors() : red(0), green(0), blue(0) {} 

    Colors(int r, int g, int b) : red(r), green(g), blue(b) {}
    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }

};