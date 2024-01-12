#include<iostream>
#include<string>
using namespace std;
int main() {

	struct stock {
		string name;
		int price;
		int quantity;
	};

	stock shampoo;
	shampoo.name = "LifeBouy";
	shampoo.price = 220;
	shampoo.quantity = 10;

	stock pencil;
	pencil.name = "Dollar";
	pencil.price = 20;
	pencil.quantity = 50;

	stock phones;
	phones.name = "iphone";
	phones.price = 1500;
	phones.quantity = 25;

	string input;
	cout << "Which Product you need information (shampoo-pencil-phones):";
	cin >> input;

	if (input == "shampoo") {
		cout << "\n\nName\t\tPrice\t\tQuantity\n";
		cout << shampoo.name << "\t\t" << shampoo.price << "\t\t" << shampoo.quantity;
	}

	else if (input == "pencil") {
		cout << "\n\nName\t\tPrice\t\tQuantity\n";
		cout << pencil.name << "\t\t" << pencil.price << "\t\t" << pencil.quantity;
	}

	else if (input == "phones") {
		cout << "\n\nName\t\tPrice\t\tQuantity\n";
		cout << phones.name << "\t\t" << phones.price << "\t\t" << phones.quantity;
	}
	else
		cout << "Invalid Input";


	return 0;
}