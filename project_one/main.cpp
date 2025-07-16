/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.1
 *        Created:  07/14/2025 02:55:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  William Paddock, 
 *   Organization:  SNHU CS210 Project 1 Clocks
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
using namespace std;

class ClockWork{
	private:
		int timescale[3][2] = {{0, 0}, {0, 0}, {0, 0}};
	public:
		void main(){
			// Main function, initialize the time to random
			printMenu();
		}
		void printClock(string time_twelve_hour, string time_twentyfour_hour){
			// This Function prints the clock into the terminal
			cout << "***************"  << "  " << "***************" << endl;
			cout << "* " << time_twelve_hour << " *" << "  * " << time_twentyfour_hour << " *" << endl;
			cout << "***************"  << "  " << "***************" << endl;        
		}
		void printMenu(){
			// Print the menu for the clcok
			cout << "**********************" << endl;
			cout << "* 1 - Add One hour   *" << endl;                
			cout << "* 2 - add One Minute *" << endl;
			cout << "* 3 - add One Second *" << endl;
			cout << "* 4 - Exit Projram   *" << endl;
			cout << "**********************" << endl;       
		}
		
		void simpleTimeHandler(int dur){
			// Check the hour second for timing
			if (timescale[dur][1] == 9 && timescale[dur][0] == 5){
                                fill(begin(timescale[dur]), end(timescale[dur]), 0);
                                addHour();
                        } else if (timescale[dur][1] == 9){
                                timescale[dur][0] = timescale[dur][0] + 1;
                                timescale[dur][1] = 0;
                        } else {
                                timescale[dur][1] += 1;
                        }

		}
		void addSecond(){
			// Add seconds to the clock
			simpleTimeHandler(2);
		}

		void addMinute(){
			// Add minute to clock
			simpleTimeHandler(1);
		}

		void addHour(){
			// Add one hour to clock
			if (timescale[0][1] == 2 && timescale[0][1] == 3){
                                fill(begin(timescale[0]), end(timescale[0]), 0);
                        } else if (timescale[0][1] == 9){
                                timescale[0][0] = timescale[0][0] + 1;
                                timescale[0][1] = 0;
                        } else {
                                timescale[0][1] += 1;
                        }
		}
};

int clockHandle(ClockWork my_clock) {
	// This is the clock handler to handle the menu and the clock
	my_clock.printMenu();

	// Save making a choice
	int choice = 4;
	while(true) {
		// Running while loop to handle menu selection
		cin >> choice;
		switch(choice){
			case 1:
				// Take choice 1
				my_clock.addHour();
				break;
			case 2:
				// Take choice 2
				my_clock.addMinute();
				break;
			case 3:
				// Take choice 3
				my_clock.addSecond();
				break;
			case 4:
				// Terminate
				exit(0);
			default:
				cout << "Invalid input" << endl;
		}
		my_clock.printClock();
	}
	return 0;
}

int main(){
	//Main function that runs the clock system
	ClockWork my_clock = ClockWork();
	clockHandle(my_clock);
	return 0;
}

