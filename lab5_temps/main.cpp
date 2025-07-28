/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: Tempeture converter from file 
 *
 *        Version:  1.0
 *        Created:  07/27/2025 10:07:09 PM
 *       Revision:  1.0.0
 *       Compiler:  gcc
 *
 *         Author:  William Paddock, 
 *   Organization:  CS 210
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class CityTemps{
	public: 
		void SetTemp(int temp){
			tempeture = temp;
		}
		int GetTemp(){
			return tempeture;
		}
		void SetName(string name){
			city_name = name;
		}
		string GetName(){
			return city_name;
		}
	private:
		// Set the city name as none
		string city_name = "No Name";
		// Set the temp to zero
		int tempeture = 0;
};

int main(){
	ifstream f("FahrenheitTemperature.txt");
	// Check if the file is 
	// successfully opened
	if (!f.is_open()) {
		cerr << "Error opening the file!";
		return 1;
	}
	vector<CityTemps> temps;

	// Read each line of the file, store
	// it in string s and print it to the
	// standard output stream 
	string s = "";
	while (getline(f, (string)s)){
		string token  = s.find(" ", 0);
		string city_name =  s.substr(0, token);
		int temp = s.substr(token, s.size());
		CityTemp city;
		city.SetName(city_name);
		city.SetTemp(temp);
	}
	// Close the file
	f.close();
	return 0;
}

