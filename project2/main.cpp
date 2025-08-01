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
#include <iostream>
#include <format>
#include <InvestmentCalculator.h>
using namespace std;

void InvestmentHandle(){
	// This is while loop handling to build the investiment item.
	string input = "";
	while (input != "quit"){
		// This will run tell the user ennters quit
		try {
				InvestmentCalculator invest = InvestmentCalculator();
				invest.Menu(input);

				// Calculate the interest for the application with monthly
				invest.CalculateInvestment(invest.GetNumberMonths(), invest.GetInitialInvestment(), invest.GetAnnualInterest());

				// Print the balance
				invest.PrintBanner(1);
				invest.PrintBalanceLine();

				// Calculate without a monthly deposit
				invest.SetMonthlyDeposit(0);
				invest.ClearCalculator();
				invest.CalculateInvestment(invest.GetNumberMonths(), invest.GetInitialInvestment(), invest.GetAnnualInterest());

				// Print the balance
				invest.PrintBanner(0);
				invest.PrintBalanceLine();
				invest.PrintInput(4);
				cin >> input;
			} catch (const std::exception& ex){
				cout << "Invalid Input Retry";
			}
	}
}

int main(){
	// main function to pass off to the handle
	InvestmentHandle();
	return 0;
}