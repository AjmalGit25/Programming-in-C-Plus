#include <iostream>
#include "Car.h"
using namespace std;

int main() {
    Car c;

    c.setSpeed(100);

    cout << c.getSpeed();

    return 0;
}