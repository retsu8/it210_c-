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
#include <InvestmentCalculator.h>
using namespace std;

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
		try {
				InvestmentCalculator invest = InvestmentCalculator();
				PrintInput(0);
				cin >> input;
				invest.SetInitialInvestment(stod(input));
				PrintInput(1);
				cin >> input;
				invest.SetMonthlyDeposit(stod(input));
				PrintInput(2);
				cin >> input;
				invest.SetAnnualInterest(stod(input));
				PrintInput(3);
				cin >> input;
				invest.SetNumberYears(stoi(input));

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
			} catch (const std::exception& ex){
				cout << "Invalid Input Retry";
			}
			PrintInput(4);
			cin >> input;
	}
}

int main(){
	InvestmentHandle();
	return 0;
}