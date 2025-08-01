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

#include <iostream>
#include <list>
#include <string>

class InvestmentCalculator {
	// Investment H file for cpp file structure
	public:
		void SetInitialInvestment(long double l_initial);
		long double GetInitialInvestment();
		void SetMonthlyDeposit(long double l_monthly);
		long double GetMonthlyDeposit();
		void SetAnnualInterest(long double l_annual);
		long double GetAnnualInterest();
		void SetNumberYears(int i_years);
		int GetNumberMonths();
		void CalculateInvestment(int count, long double l_initial, long double l_annual);
		void PrintBalanceLine();
		void PrintBanner(int i_input);
		void ClearCalculator();
		std::string LeftPad(int i_size, std::string l_cell);
		void Menu(std::string s_input);
		void PrintInput(int i_input);
		void MenuInput();
		std::string ToLower(std::string s_str);
		int UpdateValue(int i_choice);
	private:
		long double initialInvestment = 0.0;
		long double monthlyDeposit = 0.0;
		long double annualInterest = 0.0;
		int numberMonths = 0;
		// List of lists to create a matrix of monthly deposits.
		std::list<std::list<long double>> annual;
};

#endif