#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <climits>
#include <fstream>
#include "ACO.h"

// if (ALPHA == 0) { stochastic search & sub-optimal route }
#define ALPHA (double)0.5
// if (BETA  == 0) { sub-optimal route }
#define BETA (double)0.8
// Estimation of the suspected best route.
#define Q (double)80
// Pheromones evaporation.
#define RO (double)0.2
// Maximum pheromone random number.
#define TAUMAX (int)2

#define INITIALCITY (int)0

#define INITIALCITY (int)0

int main()
{
	int iterations, numAnts, numCities;

	std::cout << "Enter the number of iterations: ";
	std::cin >> iterations;

	std::cout << "Enter the number of ants: ";
	std::cin >> numAnts;

	std::cout << "Enter the number of cities: ";
	std::cin >> numCities;

	ACO *ANTS = new ACO(numAnts, numCities, ALPHA, BETA, Q, RO, TAUMAX, INITIALCITY);
	ANTS->init();
	int i = 1;
	// while (true)
	// {
	// 	int city1, city2;
	// 	std::cout << "Enter the connected cities (0-based indices) for edge " << i++ << " (e.g., 0 1): Enter -1 -1 to exit";
	// 	std::cin >> city1 >> city2;
	// 	if ((city1 == -1) && (city2 == -1))
	// 	{
	// 		break;
	// 	}
	// 	ANTS->connectCITIES(city1, city2);
	// }
	int gh = 0;
	int gh2 = 1;
	while (true)
	{
		ANTS->connectCITIES(gh, gh2++);
		if (gh2 == (numCities - 1))
		{
			gh++;
			gh2 = 0;
		}
		std::cout << gh << " " << gh2 << std::endl;
		if (gh == (numCities))
		{
			break;
		}
	}

	std::string filename = "points.txt"; // Replace with the name of your text file
	std::ifstream inputFile(filename);

	if (!inputFile)
	{
		std::cerr << "Failed to open the file: " << filename << std::endl;
		return 1;
	}

	int x, y;
	i = 0;
	while ((inputFile >> x >> y) && (i < numCities))
	{
		ANTS->setCITYPOSITION(i, x, y);
		i++;
	}

	inputFile.close();

	ANTS->printGRAPH();
	ANTS->printPHEROMONES();
	ANTS->optimize(iterations);
	ANTS->printRESULTS();

	int gg, hhh;
	std::cin >> gg >> hhh;

	std::string hhj;
	std::cin >> hhj;

	std::string hhj4;
	std::cin >> hhj4;

	return 0;
}
