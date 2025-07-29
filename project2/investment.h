/*
 * =====================================================================================
 *
 *       Filename:  investment.h
 *
 *    Description: investment class h handler  Airgead Banking App Functional Requirements
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
#ifndef INVESTMENT_CALCULATOR_H
#define INVESTMENT_CALCULATOR_H

class InvestmentCalculator {
	public:
		void SetInitialInvestment(long double l_initial);
		long double GetInitialInvestment();
		void SetMonthlyDeposit(long double l_monthly);
		long double GetMonthlyDeposit();
		void SetAnnualInterest(long double l_annual);
		long double GetAnnualInterest();
		void SetNumberYears(int i_years);
		int GetNumberYears();
		void CalculateInvestment(int i_years, long double l_initial, long double l_monthly, long double l_annual)
	private:
		long double initialInvestment = 0.0;
		long double monthlyDeposit = 0.0;
		long double annualInterest = 0.0;
		int numberYears = 0;
};

#endif