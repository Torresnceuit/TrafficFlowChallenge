#include <iostream>

#include "FlowController.h"
#include "IntersectionInfo.h"

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
			std::cin >> inputInfo.northCPMs;
			while(!std::cin)
			{
				std::cout << "NUMBER ACCEPTED ONLY. TRY AGAIN!!!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
			
			std::cout << "ROAD 2 (EAST) CPM: ";
			std::cin >> inputInfo.eastCPMs;
			while(!std::cin)
			{
				std::cout << "NUMBER ACCEPTED ONLY. TRY AGAIN!!!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
			
			std::cout << "ROAD 3 (SOUTH) CPM: ";
			std::cin >> inputInfo.southCPMs;
			while(!std::cin)
			{
				std::cout << "NUMBER ACCEPTED ONLY. TRY AGAIN!!!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
			
			std::cout << "ROAD 4 (WEST) CPM: ";
			std::cin >> inputInfo.westCPMs;
			while(!std::cin)
			{
				std::cout << "NUMBER ACCEPTED ONLY. TRY AGAIN!!!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
			
			FlowController controller(inputInfo);
			controller.run();
		}
	}
	catch(...)
	{
		std::cout << "Cannot read the inputs" << std::endl;
		return 1;
	}

	return 0;
}
