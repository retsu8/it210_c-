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
void GetAnnualInterest::SetNumberYears(int i_years){
	numberYears = i_years;
}
int GetAnnualInterest::GetNumberYears(){
	return numberYears;
}
void CalculateInvestment(int i_years, long double l_initial, long double l_monthly, long double l_annual){

}