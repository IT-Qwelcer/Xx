#include "train.h"

Train::Train()
{
	_route = "";
	m_vcCar.clear();
}

void Train::setRoute(std::string route)
{
	_route = route;
}

std::string Train::getRoute()
{
	return _route;
}

int Train::getCarPassengers(int id)
{
	if (id<0 || id>m_vcCar.size())
	{
		return 0;
	}

	return m_vcCar[id].getNumberPassengers();
}

void Train::addCar(Car car)
{
	m_vcCar.push_back(car);
}

int Train::getCarCount()
{
	return m_vcCar.size();
}
