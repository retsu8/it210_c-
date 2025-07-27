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

class CityTemp{
	public: 
		void SetTemp(int temp){
			/* set city temp */
			tempeture = temp;
		}
		int GetTemp(){
			/* get city temp */
			return tempeture;
		}
		void SetName(string name){
			/* set city name */
			city_name = name;
		}
		string GetName(){
			/* get city name */
			return city_name;
		}
		double FahrenheitToCelsius(){
			return (tempeture - 32) * (5.0 / 9.0);
		}
	private:
		// Set the city name as none
		string city_name = "No Name";
		// Set the temp to zero
		int tempeture = 0;
};

void PullTempetureFile(vector<CityTemp>& temps){
	ifstream f("FahrenheitTemperature.txt");
	// Check if the file is 
	// successfully opened
	if (!f.is_open()) {
		cerr << "Error opening the file!";
	}

	// Read each line of the file, store
	// it in string s and print it to the
	// standard output stream 
	string s = "";
	while (getline(f, s)){
		// find spaces in stringinsert
		int token  = s.find(" ", 0);

		// convert the string to string and int
		string city_name =  s.substr(0, token);

		// Convert string to int from temp
		int temp = stoi(
			s.substr(token + 1, s.size() - token)
			);
		
		CityTemp city;

		// Set name and temp
		city.SetName(city_name);
		city.SetTemp(temp);

		// Add temps with city to vector
		temps.push_back(city);
		//cout << city.GetName() << " " << city.FahrenheitToCelsius() << endl;
	}
	// Close the file
	f.close();

}

void PrintTempetureFile(vector<CityTemp>& temps){
	ofstream writeFile("CelsiusTemperature.txt");
  	for (int i; i < temps.size(); i++){
	  	cout << temps.at(i).GetName() << " " << temps.at(i).FahrenheitToCelsius() << endl;
  	}
  	writeFile.close();
}
int main(){
	// Setup basic vector
	vector<CityTemp> temps;
	// Pulling the the file and reading
	PullTempetureFile(temps);

	 for (int i; i < temps.size(); i++){
	  	cout << temps.at(i).GetName() << " " << temps.at(i).FahrenheitToCelsius() << endl;
  	}
	// Writing the new file with celcius
	PrintTempetureFile(temps);

	return 0;
}

