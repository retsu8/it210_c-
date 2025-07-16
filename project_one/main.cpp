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
#include <string>
#include <random>
#include <format>
#include <iostream>
#include <iomanip>
using namespace std;

class ClockWork{
	private:
		int timescale[3] = {0};
	public:
		int randomly(int i, int j){
			// get a random seed from the hardware
		    	random_device rd;
		    	// generate the random id here
		    	mt19937 gen(rd());
		    	// Set the range here
		    	uniform_int_distribution<> distr(i, j);
		    	return distr(gen);
		}
		void fillClock(){
			// Fill the clock with a random time
			timescale[2] = randomly(0, 59);
			timescale[1] = randomly(0, 59);
			timescale[0] = randomly(0, 23);
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
			if (timescale[0] >= 23){
				timescale[0] = 0;
			} else {
				timescale[0] += 1;
			}
		}
		string arrayString(bool twenty_four = false){
			// Build strings for clock to print
			if (twenty_four){
				return format("{0:02d}:{1:02d}:{2:02d}", timescale[0], timescale[1], timescale[2]);
			}

			// Build 12 hr clock
			string is_pm = "AM";
			int new_hour = 0;
			if(timescale[0] > 12){
				new_hour = timescale[0] - 12;
				cout << timescale[0];
				is_pm = "PM";
			}
			if (new_hour > 24) {
				cout << new_hour;
				exit(0);
			}
			return format("{0:02d}:{1:02d}:{2:02d} {3}", new_hour, timescale[1], timescale[2], is_pm);

		}
		int clockHandle() {
			// This is the clock handler to handle the menu and the clock
			printMenu();
			fillClock();
			printClock(
				arrayString(), 
				arrayString(true));

			// Save making a choice
			int choice;
			while(choice != 4) {
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

