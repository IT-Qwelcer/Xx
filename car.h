#ifndef __CAR_H
#define __CAR_H

#include <string>

class Car
{
public:
	Car();

	void setNumberPassengers(int count);
	int getNumberPassengers();

private:
	int number_of_passengers;
};

#endif


