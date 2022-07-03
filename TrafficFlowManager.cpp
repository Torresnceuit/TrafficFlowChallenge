#include <iostream>

#include "FlowController.h"
#include "Utils.h"

using namespace TrafficFlowChallenge;

int main()
{
	try
	{
		std::cout << "Waiting for commands .... Type empty to stop" << std::endl;
		IntersectionInfo inputInfo;

		while(true)
		{

			std::cout << "ROAD 1 (NORTH) CPM: ";
			std::cin >> inputInfo.northCPM;
			while(!std::cin)
			{
				std::cout << "NUMBER ACCEPTED ONLY. TRY AGAIN!!!" << endl;
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			
			std::cout << "ROAD 2 (EAST) CPM: ";
			std::cin >> inputInfo.eastCPM;
			while(!std::cin)
			{
				std::cout << "NUMBER ACCEPTED ONLY. TRY AGAIN!!!" << endl;
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			
			std::cout << "ROAD 3 (SOUTH) CPM: ";
			std::cin >> inputInfo.southCPM;
			while(!std::cin)
			{
				std::cout << "NUMBER ACCEPTED ONLY. TRY AGAIN!!!" << endl;
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			
			std::cout << "ROAD 4 (WEST) CPM: ";
			std::cin >> inputInfo.westCPM;
			while(!std::cin)
			{
				std::cout << "NUMBER ACCEPTED ONLY. TRY AGAIN!!!" << endl;
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}

		}
	}
	catch(...)
	{
		std::cout << "Cannot read the inputs" << std::endl;
		return 1;
	}

	return 0;
}
