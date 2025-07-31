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

#include <stdlib.h>
#include <list>
#include <InvestmentCalculator.h>
using namespace std;

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
	// Set the number of years to invest
	numberYears = i_years;
}
int InvestmentCalculator::GetNumberYears(){
	// Get the number of years to invest
	return numberYears;
}

long double InvestmentCalculator::CalculateTotal(){
	return monthlyDeposit + initialInvestment;
}
void InvestmentCalculator::CalculateInvestment(int count, long double l_initial, long double l_annual){
	// Assuming interest is in whole numbers+
	// Calculate a new initial starter for the new year
	long double total = l_initial + monthlyDeposit;
	long double interest = total * ((annualInterest/100) / 12);
	long double closing_balance = interest + total;
	list<long double> yearly = {l_initial, monthlyDeposit, total,  interest + l_annual, closing_balance};
	if (count > 0){
		annual.push_back(yearly);
		CalculateInvestment(count - 1, closing_balance, interest + l_annual);
	}
	// Add this year at count to list; pushing into front to count backwards
}
void InvestmentCalculator::PrintBalanceLine(){
	cout << fixed(2) << percision();
	cout << "Year : Year End Balance : Year End Earned Interest" << endl;
	// Calculate the number of years.
	int count = 1;
	for(list<long double> a : annual){
		cout << " | " << count << " | ";

		// Pull the investment calculations out of the list
		for(long double i : a){
			cout << i << " | ";
		} 
		// make sure to make a new line here
		cout << endl;

		// Add another year and loop
		count++;
	}
}