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
#include <investment.h>
using namespace std;

void InvestmentCalculator::SetInitialInvestment(long double l_initial) {
	initialInvestment = l_initial;
}
long double InvestmentCalculator::GetInitialInvestment() {
	return initialInvestment;
}
void InvestmentCalculator::SetMonthlyDeposit(long double l_monthly){
	monthlyDeposit = monthly;
}
long double InvestmentCalculator::GetMonthlyDeposit(){
	return monthlyDeposit;
}
void InvestmentCalculator::SetAnnualInterest(long double l_annual){
	annualInterest = l_annual;
}
long double InvestmentCalculator::GetAnnualInterest(){
	return annualInterest;
}
void InvestmentCalculator::SetNumberYears(int i_years){
	numberYears = i_years;
}
int InvestmentCalculator::GetNumberYears(){
	return numberYears;
}
long double InvestmentCalculator::CalculateInvestment(int count; long double l_initial, long double l_annual, long double l_monthly){
	// Assuming interest is in whole numbers+
	// Calculate a new initial starter for the new year
	long double new_initial = (l_initial + l_monthly) * ((l_annual/100) * 12);

	// Add this year at count to list; pushing into front to count backwards
	list<long double> yearly = {new_initial, l_monthly, l_annual};
	if (count > 0){
		annual.push_front(yearly);
		CalculateInvestment(count--, yearly, l_annual, l_monthly);
	} 
	return 0
}
void InvestmentCalculator::PrintBalanceLine(){
	cout << "Year : Year End Balance : Year End Earned Interest" << endl;
	// Calculate the number of years
	initial = CalculateInvestment(initialInvestment, annualInterest, monthlyDeposit);
	cout << i << " | " << 
	for(int i = 1;  i <= numberYears; i++){
	}
}