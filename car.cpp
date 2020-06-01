#include "car.h"

Car::Car()
{
	number_of_passengers = 0;
}

void Car::setNumberPassengers(int count)
{
	number_of_passengers = count;
}

int Car::getNumberPassengers()
{
	return number_of_passengers;
}
