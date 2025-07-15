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
	
	void main(){
		// Main function, initialize the time to random
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

	void addSecond(){
		// Add seconds to the clock
		int (*sec)[2] = &timescale[2];
	}

	void addMinute(){
		// Add minute to clock
		if (timescale[1][1] == 9 && timescale[1][0] == 5){
			timescale[1] = {0, 0};
			addHour();
		} else if (timescale[1][1] == 9){
			timescale[1] = {timescale[1][0] + 1, 0};
		} else {
			minute[1] += 1;
		}
		// public.timescale[1] = minute;
	}

	void addHour(){
		// Add one hour to clock

	}
};
void main(){
	//Main function that runs the clock system
	my_clock = ClockWork();
	my_clock.printMenu();
}

