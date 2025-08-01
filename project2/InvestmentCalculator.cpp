/*
 * =====================================================================================
 *
 *       Filename:  investment.cpp
 *
 *    Description: investment cpp handler
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

#include <format>
#include <iomanip>
#include <list>
#include <stdlib.h>
#include <string>
#include <InvestmentCalculator.h>
using namespace std;

void InvestmentCalculator::Menu(std::string s_input){
	// Print the menu to request further information.
	PrintInput(0);
	cout << ((GetInitialInvestment() > 0) ? format("{0:02Lf}", GetInitialInvestment()) : "");
	cin >> s_input;
	SetInitialInvestment(stod(s_input));
	cout << ((GetMonthlyDeposit() > 0) ? format("{0:02Lf}", GetMonthlyDeposit()) : "");
	PrintInput(1);
	cin >> s_input;
	SetMonthlyDeposit(stod(s_input));
	cout << ((GetAnnualInterest() > 0) ? format("{0:02Lf}", GetAnnualInterest()) : "");
	PrintInput(2);
	cin >> s_input;
	SetAnnualInterest(stod(s_input));
	cout << ((GetNumberMonths() > 0) ? format("{0}", GetNumberMonths() / 12) : "");
	PrintInput(3);
	cin >> s_input;
	SetNumberYears(stoi(s_input));
	while( !(ToLower(s_input) == "y" || ToLower(s_input) == "yes") ){
		// Get the new user input here
		PrintInput(5);
		cin >> s_input;
		if (ToLower(s_input) == "n" || ToLower(s_input) == "no"){
			// User input says they want to change a value
			PrintInput(6);
			int choice;
			cin >> choice;
			switch(choice) {
				case 0:
				case 1:
				case 2:
				case 3:
					PrintInput(choice - 1);
					UpdateValue(choice - 1);
					break;
				case 4:
					PrintInput(choice - 1);
					SetNumberYears(choice - 1);
					break;
			}
			MenuInput();
		}
	}
}

std::string InvestmentCalculator::ToLower(string s_str){
	// Lowercase the whole string
    for (char &c : s_str) {
        c = std::tolower(static_cast<unsigned char>(c));
    }
    return s_str;
}

int InvestmentCalculator::UpdateValue(int i_choice){
	// Update the value in question
	long double value;
	cin >> value;
	switch(i_choice){
		case 0:
			SetInitialInvestment(value);
			return 0;
		case 1:
			SetMonthlyDeposit(value);
			return 0;
		case 2:
			SetAnnualInterest(value);
			return 0;
		case 3:
			SetNumberYears(value);
			return 0;
		default:
			return 0;
	}
}

void InvestmentCalculator::MenuInput(){
	// Print the menu with filled in values
	PrintInput(0);
	cout << format("{0:02Lf}", GetInitialInvestment()) << endl;
	PrintInput(1);
	cout << format("{0:02Lf}", GetMonthlyDeposit()) << endl;
	PrintInput(2);
	cout << format("{0:02Lf}", GetAnnualInterest()) << endl;
	PrintInput(3);
	cout << format("{0}", GetNumberMonths() / 12) << endl;
	PrintInput(5);
}

void InvestmentCalculator::PrintInput(int i_input){
	// Note this is done in mono font for printing
	switch(i_input){
		case 0:
			cout << "1. Initial Investment Amount: $ ";
			break;
		case 1:
			cout << "2. Monthly Deposit: $ ";
			break;
		case 2:
			cout << "3. Annual Interest: % ";
			break;
		case 3:
			cout << "4. Number of Years: ";
			break;
		case 4:
			cout << "Press any key to continue… or type quit to exit: " << endl;
			break;
		case 5:
			cout << "Does this look correct? yes/no" << endl;
			break;
		case 6:
			cout << "Which input is incorect? 1 - 4" << endl;
			break;
		default:
			cout << "Invalid input? retry" << endl;
	}
}

void InvestmentCalculator::SetInitialInvestment(long double l_initial) {
	// SSet the initial investment amount
	initialInvestment = l_initial;
}
long double InvestmentCalculator::GetInitialInvestment() {
	// Get the initial investment amount
	return initialInvestment;
}
void InvestmentCalculator::SetMonthlyDeposit(long double l_monthly){
	// Set the initial monthly deposit
	monthlyDeposit = l_monthly;
}
long double InvestmentCalculator::GetMonthlyDeposit(){
	// Get the monthly deposit
	return monthlyDeposit;
}
void InvestmentCalculator::SetAnnualInterest(long double l_annual){
	// Set the annual interest rate
	annualInterest = l_annual;
}
long double InvestmentCalculator::GetAnnualInterest(){
	// Get the annual interest rate
	return annualInterest;
}
void InvestmentCalculator::SetNumberYears(int i_years){
	// Set the number of years to invest rescale to months
	numberMonths = i_years * 12;
}
int InvestmentCalculator::GetNumberMonths(){
	// Get the number of years to invest
	return numberMonths;
}

void InvestmentCalculator::ClearCalculator(){
	// Clear the calculator at the end
	annual.clear();
}

void InvestmentCalculator::PrintBanner(int i_input){
	if (i_input == 0){
		cout << "Balance and Interest Without Additional Monthly Deposits" << endl;}
	if (i_input == 1){
		cout << "Balance and Interest With Additional Monthly Deposits" << endl;}
}

void InvestmentCalculator::CalculateInvestment(int count, long double l_initial, long double l_annual){
	// Assuming interest is in whole numbers+
	// Calculate a new initial starter for the new year
	long double total = l_initial + monthlyDeposit;
	// Calcualte the interest
	long double interest = total * ((annualInterest/100) / 12);
	// Calculate the closing balance
	long double closing_balance = interest + total;
	// Add this calculation to the chart
	list<long double> yearly = {l_initial, monthlyDeposit, total,  interest + l_annual, closing_balance};
	if (count > 0){
		annual.push_back(yearly);
		// Do the next year per year request
		CalculateInvestment(count - 1, closing_balance, interest + l_annual);
	}
	// Add this year at count to list; pushing into front to count backwards
}

std::string InvestmentCalculator::LeftPad(int i_size, std::string l_cell){
	// Padd long double cells to the left
	int row_size = i_size - (int)l_cell.size();
	while(row_size > 0){
		row_size -= 1;
		l_cell = " " + l_cell;
	}
	return l_cell;
}

void InvestmentCalculator::PrintBalanceLine(){
	// Get the last element of the last row, the largest to cacluate size of column

	// Force output percision to 2
	std::cout.precision(2);
	
	// List of headers to check
	list<string> headers = {" Year "," Opening Balance "," Deposited Amount "," $Total "," $Interest "," Closing Balance "};

	// Get the column headers and start at the begining.
	auto h_front = headers.begin();

	// Grab the last line of the list to make the column sizes
	list<long double> last_line = annual.back();

	// Get the first line of the list for year not month /12
	last_line.push_front(annual.size() / 12);

	// This is out column size table
	list<int> column_size;

	for (long double l : last_line){
		// Get possible column sizing with largest columns
		int l_col = format("{0:02Lf}", l).size();
		int h_col = format("{0}", *h_front).size();
		// measure the column size and use it.
		column_size.push_back((l_col > h_col) ? l_col : h_col);
		std::advance(h_front, 1);
	}

	// Print the column headers first
	auto size = column_size.begin();
	cout << " | ";
	for(string col : headers){
		// Build the columns
		string new_string = LeftPad(*size, col);
		cout << new_string << " | ";
		std::advance(size, 1);
	}
	cout << endl;
	// Calculate the number of years.
	int count = 1;
	for(list<long double> a : annual){
		// Make the print yearly instead
		if (count % 12 == 0){
			// These columns are printed in mono font, so it may  not print correctly to screen each time.
			auto size = column_size.begin();

			// Build first column to keep track of years
			string new_string = LeftPad(*size, format("{0}", count/12));
			cout << " | " << new_string << " | ";
			
			// Setting column width
			auto l_front = a.begin();
			std::advance(size, 1);

			// Setting column width
			new_string = LeftPad(*size, format("$ {0:.2Lf}", *l_front));
			cout << new_string << " | ";


			// Setting column width
			std::advance(l_front, 1);
			std::advance(size, 1);
			new_string = LeftPad(*size, format("$ {0:.2Lf}", *l_front));
			cout << new_string << " | ";

			// Setting column width
			std::advance(l_front, 1);
			std::advance(size, 1);
			new_string = LeftPad(*size, format("$ {0:.2Lf}", *l_front));
			cout << new_string << " | ";

			// Setting column width
			std::advance(l_front, 1);
			std::advance(size, 1);
			new_string = LeftPad(*size, format("$ {0:.2Lf}", *l_front));
			cout << new_string << " | ";			

			// Setting column width
			std::advance(l_front, 1);
			std::advance(size, 1);
			new_string = LeftPad(*size, format("$ {0:.2Lf}", *l_front));
			cout << new_string << " | ";

			// make sure to make a new line here
			cout << endl;
			}

		// Add another year and loop
		count++;
	}
}