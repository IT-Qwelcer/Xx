#ifndef __TRAIN_H
#define __TRAIN_H

#include "car.h"
#include <string>
#include <vector>

class Train
{
public:
	Train();

	void setRoute(std::string route);
	std::string getRoute();
	void addCar(Car car);
	int getCarCount();
	int getCarPassengers(int id);

private:
	std::string _route;
	std::vector<Car> m_vcCar;
};

#endif


