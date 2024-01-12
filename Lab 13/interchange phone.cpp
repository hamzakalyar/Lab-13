#include<iostream>
using namespace std;
int main() {

	struct Phone {
		int area_code;
		int exchange;
		int number;
	};

	Phone phone1;
	Phone phone2;

	phone1.area_code = 111;
	phone1.exchange = 786;
	phone1.number = 7600;

	cout << "Enter your phone (area_code  exchange  number):";
	cin >> phone2.area_code >> phone2.exchange >> phone2.number;

	cout << "\n\nMy number is (" << phone1.area_code << ") " << phone1.exchange << "-" << phone1.number;
	cout << "\nYour number is (" << phone2.area_code << ") " << phone2.exchange << "-" << phone2.number << "\n\n";


	return 0; 
}