#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double r, pre, in, total, pay, bl;
	int year=0;
	cout << "Enter initial loan: ";
	cin >> bl;
	cout << "Enter interest rate per year (%): ";
	cin >> r;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	do{ 
	pre=bl;
	in = pre*r/100;
	total = pre+in;
	if (total<pay) pay=total;
	bl=total-pay;
	year++;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << pre;
	cout << setw(13) << left << in;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << bl;
	cout << "\n";	
    }while(bl != 0);
	return 0;
}