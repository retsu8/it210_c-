/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: main file for handling  Airgead Banking App Functional Requirements
 *
 *        Version:  1.0
 *        Created:  07/29/2025 10:58:21 PM
 *       Revision:  1.0.0
 *       Compiler:  gcc
 *
 *         Author:  William Paddock, 
 *   Organization:  CS210
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string>
#include <investment.h>

void PrintInput(int i_input){
	// Note this is done in mono font for printing
	if (i_input == 0){
		cout << "Initial Investment Amount:";}
	if (i_input == 1){
		cout << "Monthly Deposit:";}
	if (i_input == 2){
		cout << "Annual Interest:";}
	if (i_input == 3){
		cout << "Number of Years:";}
	if (i_input == 4){
		cout << "Press any key to continue… or type quit to exit";}
}

void InvestmentHandle(){
	// This is while loop handling to build the investiment item.
	string input = "";
	while (input != "quit"){
		// This will run tell the user ennters quit
		Investment invest;
		PrintInput(0)
		long double initial_interest = 0.00;
		cin >> initial_investment;
		PrintInput(1);
		long double initial_monthly = 0.00;
		cin >> initial_monthly;
		PrintInput(2);
		long double initial_interest = 0.00;
		cin >> initial_interest;
		PrintInput(3);
		int set_years = 0;
		cin >> set_years;
		CalculateInvestment(set_years,)
	}
}

int main(){
	return 0;
}