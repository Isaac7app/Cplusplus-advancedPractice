
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    
    auto rectangle = make_unique<Rectangle>(10, 20);
    rectangle->draw();

    return 0;
}

