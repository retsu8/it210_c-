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
#include <format>
using namespace std;

class ClockWork{
	private:
		int timescale[3] = {0, 0, 0};
	public:
		void main(){
			// Main function, initialize the time to random
			printMenu();
		}
		void printClock(string time_twelve_hour, string time_twentyfour_hour){
			// This Function prints the clock into the terminal
			cout << "***************"  << "  " << "***************" << endl;
			cout << "* 12 Hour Clock *" << " " << "* 24 Hour Clock *" << endl;
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
			if (timescale[dur] > 58){
				timescale[dur] = 0;
				addHour();
			}
			else {
				timescale[dur] += 1;
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
			if (timescale[0] > 23){
				timescale[0] = 0;
			} else {
				timescale[0] += 1;
			}
		}
		string arrayString(bool twenty_four = false){
			if (twenty_four){
				return format("{}:{}:{}", timescale[0], timescale[1], timescale[2]);
			}
			string is_pm = "AM";
			string time_stamp_twelve;
			int new_hour;
			if(timescale[0] > 12){
				new_hour = timescale[0] - 12;
				is_pm = "PM";
			}
			time_stamp_twelve = format("{}:{}:{} {}", new_hour, timescale[1], timescale[2], is_pm);
			return time_stamp_twelve;

		}
		int clockHandle() {
			// This is the clock handler to handle the menu and the clock
			printMenu();

			// Save making a choice
			int choice = 4;
			while(true) {
				// Running while loop to handle menu selection
				cin >> choice;
				switch(choice){
					case 1:
						// Take choice 1
						addHour();
						break;
					case 2:
						// Take choice 2
						addMinute();
						break;
					case 3:
						// Take choice 3
						addSecond();
						break;
					case 4:
						// Terminate
						exit(0);
					default:
						cout << "Invalid input" << endl;
				}
				tuple<string, string> time_stamp;
				printClock(arrayString(), arrayString(true));
			}
			return 0;
		}

};

int main(){
	//Main function that runs the clock system
	ClockWork my_clock = ClockWork();
	my_clock.clockHandle();
	return 0;
}

