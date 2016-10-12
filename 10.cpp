#include<iostream>

using namespace std;

int main()
{
	int gallonsofGasoline= 15;
	int travelMiles= 375;
	int MPG;
	
	MPG= travelMiles/gallonsofGasoline;
	
	cout<< "Gallons : " << gallonsofGasoline << endl;
	cout<< "Miles   : " << travelMiles << endl;
	cout<< "MPG/Miles per gallon : " << MPG;
	
	return 0;
	
}
