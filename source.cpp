#include <iostream>
using namespace std;

float calculateCharges(float customer_time)
{
float amount = 12 + (0.9 * (customer_time - 2));
if (amount > 20)
return 20;
else return amount;
}
int main() {
	const int number = 3;
	float total;
	float customer_fees[number];
	float customer_times[number];
	for (int i = 0; i < number; i++) {
		cout << "Enter the parking time for car in minutes " << i + 1 <<endl;
		cin >> customer_times[i];
		customer_fees[i] = calculateCharges(customer_times[i]);
	}

	int i = 0;
	cout << endl << "Car\t" << "hours\t" << "Charge";
	while (i<3)
	{
		cout << endl << i + 1 << "\t" << customer_times[i] << "\t" << (customer_fees[i]);
		i++;
	}	
	system("pause>0");
	return 0;
}
