#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

ifstream inData;
string fileName;
string firstName, lastName;
double baseSalary, commissionPercent, sales, expenses, grossPay, commission;


cout << "Please enter the name of the input file." << endl;
cin >> fileName;
inData.open(fileName);



inData >> firstName >> lastName;
inData >> baseSalary >> commissionPercent;
inData >> sales;
inData >> expenses;

commission = sales*(commissionPercent/100);
grossPay = baseSalary + commission + expenses;

cout << "Payroll Data for " << firstName << " " << lastName << endl;
cout << endl;
cout << setprecision(2) << fixed;


cout << "Base Salary: " << setw(10) << right << baseSalary << endl; 
cout << "Commission: " << setw(11) << right << commission << setprecision(2) << " (" << setprecision(1) << commissionPercent << "% of " << setprecision(2) d<< sales << ")" << endl;
cout << "Expenses: " << setw(13) << right << expenses << setprecision(2) << endl;
cout << setw(23) << "--------" << right << endl << "Total: " << setw(15) << grossPay;
}
  