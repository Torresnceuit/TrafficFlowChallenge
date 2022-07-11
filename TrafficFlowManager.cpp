#include <iostream>
#include <cctype>

#include "FlowController.h"
#include "IntersectionInfo.h"

using namespace TrafficFlowChallenge;
void gatherIntersectionInfo(IntersectionInfo& info);

int main()
{
	try
	{
		std::cout << "Waiting for commands .... Type empty to stop" << std::endl;
		IntersectionInfo inputInfo;
		while(true)
		{
			gatherIntersectionInfo(inputInfo);
			FlowController controller(inputInfo);
			int choice;
			do
			{
				std::cout << "Please select method for efficiency\n";
				std::cout << "1 - Roundabout Method\n";
				std::cout << "2 - Stop Signals Method\n";
				std::cout << "3 - Traffic Lights Method\n";
				std::cout << "4 - All Method\n";
				std::cout << "5 - Quit\n";
				std::cout << "Selection: ";
				std::cin >> choice;

				switch(choice) {
					case 1:
						controller.run(Method::ROUNDABOUT);
						break;
					case 2:
						controller.run(Method::STOP_SIGNAL);
						break;
					case 3:
						controller.run(Method::TRAFFIC_LIGHTS);
						break;
					case 4:
						controller.run(Method::ALL);
						break;
					default:
						break;
				}
			}
			while(choice != 5);

			do
			{
				std::cout << "Press Y/y to continue, any key to exit." << std::endl;
			}
			while(std::cin.get() != '\n');

			if(tolower(std::cin.get()) == 'y')
			{
				continue;
			}
			break;
		}
	}
	catch(...)
	{
		std::cout << "Cannot read the inputs" << std::endl;
		return 1;
	}

	return 0;
}

void gatherIntersectionInfo(IntersectionInfo& inputInfo)
{
	std::cout << "ROAD 1 (NORTH) CPM: ";
	while(!(std::cin >> inputInfo.northCPMs) || inputInfo.northCPMs < 0)
	{
		std::cout << "INVALID INPUT. TRY AGAIN!!!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		continue;
	}

	std::cout << "ROAD 2 (EAST) CPM: ";
	while(!(std::cin >> inputInfo.eastCPMs) || inputInfo.eastCPMs < 0)
	{
		std::cout << "INVALID INPUT. TRY AGAIN!!!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		continue;
	}

	std::cout << "ROAD 3 (SOUTH) CPM: ";
	while(!(std::cin >> inputInfo.southCPMs) || inputInfo.southCPMs < 0)
	{
		std::cout << "INVALID INPUT. TRY AGAIN!!!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		continue;
	}

	std::cout << "ROAD 4 (WEST) CPM: ";
	while(!(std::cin >> inputInfo.westCPMs) || inputInfo.westCPMs < 0)
	{
		std::cout << "INVALID INPUT. TRY AGAIN!!!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		continue;
	}
}
