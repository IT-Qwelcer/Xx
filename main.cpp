#include "train.h"
#include "car.h"
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv)
{
	system("color 0A");

	std::vector<Train> vcTrain;
	int trainCount = 0;
	std::cout << "\n\t Enter the number of trains -> ";
	std::cin >> trainCount;

	for (size_t i = 0; i < trainCount; i++)
	{
		Train train;

		std::cout << "\n\t Enter the name of the train -> ";
		std::string name; std::cin >> name;
		std::cout << "\n\t Enter the number of cars -> ";
		int count = 0; std::cin >> count;

		std::cout << "\n\t Enter the number of passengers on the train, separated by a << space >> for example - '11 22 33' -> ";

		for (size_t i = 0; i < count; i++)
		{
			int passengers = 0; std::cin >> passengers;
			Car car;
			car.setNumberPassengers(passengers);
			train.addCar(car);
		}

		train.setRoute(name);
		vcTrain.push_back(train);
	}

	for (size_t i = 0; i < trainCount; i++)
	{
		Train& train = vcTrain[i];
		std::string name = train.getRoute();
		int carCount = train.getCarCount();
		std::cout << "\n\t <<" << name << ">>";

		for (size_t j = 0; j < carCount; j++)
		{
			std::cout << "-[" << train.getCarPassengers(j) << "]";
		}

		std::cout << std::endl;
	}

	return 0;
}