#include "Car.h"

Car::Car() {
    speed = 0;
}

void Car::setSpeed(int s) {
    speed = s;
}

int Car::getSpeed() {
    return speed;
}