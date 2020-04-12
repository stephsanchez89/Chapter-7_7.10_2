// Chapter 7_7.10_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;



int main()
{
    
    double Interest_Rate = 0;
    double Loan_Amount = 0;
    int Fee = 0;
    double Interest = 0;
    double Total_Amount = 0;

    cout << "Enter Loan Amount between $100 and $1000: $";
    cin >> Loan_Amount;
    
    cout << "Enter Interest Rate between 1 and 18: ";
    cin >> Interest_Rate;

    cout << endl;
   
    cout << fixed << setprecision(2);

    Interest = Loan_Amount * (Interest_Rate / 100);

    if (Loan_Amount >= 100 && Loan_Amount <= 500) 
    {
        Fee = 20;
    }
    
    else if (Loan_Amount > 500 && Loan_Amount <= 1000)
    {
        Fee = 25;
    }

    Total_Amount = Interest + Fee;

 
    if ((Loan_Amount < 100 || Loan_Amount >1000) || (Interest_Rate < 1 || Interest_Rate >18)) 
    {
        cout << "Error! Wrong amounts entered." << endl;
    }
    
    else 
    {
        cout << "Requested Amount of Loan: " << Loan_Amount << endl;
        cout << "Interest Rate: " << Interest_Rate << "%" << endl;
        cout << "Sum of Interest and Fees: $" << Total_Amount << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
