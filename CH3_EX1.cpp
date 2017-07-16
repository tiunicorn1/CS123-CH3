// CH3_EX1.cpp : Defines the entry point for the console application.
// Tiara Dalton

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	
	ifstream inFile;
	ofstream outFile;

	inFile.open ("inData.txt");
	outFile.open ("outData.txt");

	
	string firstName, lastName, department;

	double grossSalary, monthlyBonus, taxes, payCheck;
	double taxPay, bonusPay;
	
	double distanceTraveled, travelTime;
	double averageSpeed;

	int coffeeSold;
	double coffeeCost;
	double salesAmount;

	outFile << fixed << showpoint << setprecision(2);
	cout << fixed << showpoint << setprecision(2);

	
	// Name & Department

	inFile >> firstName >> lastName >> department;
	outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;

	// Salary & Net Pay

	inFile >> grossSalary >> monthlyBonus >> taxes;
	outFile << "Monthly Gross Salary: $" << grossSalary << ", Monthly Bonus: " << monthlyBonus << "%, Taxes: " << taxes << "%" << endl;

					// Calculate Paycheck

	taxPay = grossSalary - (grossSalary * (taxes / 100));
	bonusPay = taxPay * (monthlyBonus / 100);
	payCheck = bonusPay + taxPay;
	
	outFile << "Paycheck: $" << payCheck << endl; 
	outFile << endl;

	// Travel

	inFile >> distanceTraveled >> travelTime;
	outFile << "Distance Traveled: " << distanceTraveled << " miles, Traveling Time: " << travelTime << " hours" << endl;

	  // Calculate Speed

	averageSpeed = distanceTraveled / travelTime;

	outFile << "Average Speed: " << averageSpeed << " miles per hour" << endl;
	outFile << endl;

	// Coffee
	
	inFile >> coffeeSold >> coffeeCost;
	outFile << "Number of Coffee Cups Sold: " << coffeeSold << ", Cost: $" << coffeeCost << " per cup" << endl;

	    // Calculate Coffee Sales

	salesAmount = coffeeSold * coffeeCost;

	outFile << "Sales Amount = $" << salesAmount << endl;
	

	if (!inFile)

	{

		cout << endl << "Error opening input file inData.txt." << endl;

		system("pause");

		return -1;

	}

		
	cout << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
	cout << "Monthly Gross Salary: $" << grossSalary << ", Monthly Bonus: " << monthlyBonus << "%, Taxes: " << taxes << "%" << endl;
	cout << "Paycheck: $" << payCheck << endl;
	cout << endl;
	cout << "Distance Traveled: " << distanceTraveled << " miles, Traveling Time: " << travelTime << " hours" << endl;
	cout << "Average Speed: " << averageSpeed << " miles per hour" << endl;
	cout << endl;
	cout << "Number of Coffee Cups Sold: " << coffeeSold << ", Cost: $" << coffeeCost << " per cup" << endl;
	cout << "Sales Amount = $" << salesAmount << endl;

	system("pause");
	
	inFile.close();
	outFile.close();
	
	return 0;
}

