#include <iostream>

using namespace std;

int main(){
	float meal= 88.67;
	double tax= 0.0675 * meal;
	double tip= 0.2 * (meal + tax);
	double total= meal + tax + tip;
	
	cout << "meal cost: " << meal << endl;
	cout << "tax amount: " << tax << endl;
	cout << "tip amount: " << tip << endl;
	cout << "total bill: " << total;
	
	return 0;
}
