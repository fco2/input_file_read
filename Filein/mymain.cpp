#include "inputData.h"

int main(){

    inputData d;

    std::vector < std::vector<int> > x,y,z;
    std::string s = "/home/chuka/Documents/test1/s.txt";
    d.readtext1(s);
    x = d.get_wallSetVector(s);
    y = d.get_paintVector(s);
    z = d.get_guardVector(s);

    d.print_wallSet(x);
    d.print_paintSet(y);
    d.print_guardSet(z);


    return 0;

}
