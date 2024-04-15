#include "s2_11_Car.h"

int Car::count{0};

Car::Car() { ++count; }
Car::~Car(){ --count; }