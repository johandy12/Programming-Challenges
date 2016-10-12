#include <iostream>

using namespace std;

int main(){
	int totalSales= 95;
	int stateSalesTax= 0.04 * totalSales;
	int countrySalesTax= 0.02 * totalSales;
	float totalSalesTax= totalSales * stateSalesTax * countrySalesTax;
	
	cout<< totalSalesTax;
	
	return 0;
}
