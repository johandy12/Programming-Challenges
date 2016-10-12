#include <iostream>

using namespace std;

int main(){
	int sales= 95;
	float stateSalesTax= 0.04 * sales;
	float countrySalesTax= 0.02 * sales;
	float totalSalesTax= sales + stateSalesTax + countrySalesTax;
	
	cout<< totalSalesTax;
	
	return 0;
}
