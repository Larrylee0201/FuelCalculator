//Side projects FuelCalculator
//
#include <iostream>
using namespace std;

//#2
double Miles;
double Gallons;
double Mpg;
int times;
double Litters;

void FuelCalculator(double &Miles, double &Gallons, double &Mpg);

int main() {
	cout << "Enter the number of times you want to run the fuel calculator: ";
	cin >> times;
	for(int time = 0; time < times; time++){
		FuelCalculator(Miles, Gallons, Mpg); //call function
	}
}

// #2 Fuel Calculator function
void FuelCalculator(double &Miles, double &Gallons, double &Mpg){
	cout << "Enter the amount of fuel in Litters: ";
	cin >> Litters;
	cout << "\nEnter the miles: ";
	cin >> Miles;

	Gallons = Litters * 3.785411784;;
	Mpg = Miles / Gallons;

	cout << "The amount of fuel in gallons is: " << Gallons;
	cout << "\nThe miles is: " << Miles;
	cout << "Miles per gallon is: " << Mpg;
}