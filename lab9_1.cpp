#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, rate, pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay; 
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	double PrevBalance=loan, Interest, Total, Payment, NewBalance;

	cout << fixed << setprecision(2); 
	for (int i = 1; i > 0; i++)
	{
		PrevBalance=loan, 
		Interest = loan*(rate/100), 
		Total = loan+loan*(rate/100), 
		Payment = pay, 
		NewBalance = Total-pay;

		cout << setw(13) << left << i; 
		cout << setw(13) << left << PrevBalance;
		cout << setw(13) << left << Interest ;
		cout << setw(13) << left << Total;

		if(Payment >= Total){
			cout << setw(13) << left << Total;
			cout << setw(13) << left << 0.00;
			break;
		}
		cout << setw(13) << left << Payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";
		loan = NewBalance;
	}
	
	return 0;
}
