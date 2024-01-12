#include<iostream>
#include<string>
using namespace std;
int main() {

	struct customer {
		string name;
		string address;
		int phone;
	};

	customer Hamza;
	Hamza.name = "Hamza";
	Hamza.address = "flat 420 isb";
	Hamza.phone = 1105;

	customer Abdur_Rehman;
	Abdur_Rehman.name = "Abdur Rehman";
	Abdur_Rehman.address = "flat 421 isb";
	Abdur_Rehman.phone = 5013;

	customer Usama;
	Usama.name = "Usama";
	Usama.address = "flat 422 isb";
	Usama.phone = 2523;

	string input;
	cout << "Which Person you need information (Hamza-Abdur Rehman-Usama):";
	cin >> input;

	if (input == "Hamza" || input == "hamza") {
		cout << "\n\nName:" << Hamza.name << ".\nAddress:" << Hamza.address << ".\nPhone:" << Hamza.phone;
	}

	else if (input == "Abdur_Rehman" || input == "abdur_rehman") {
		cout << "\n\nName:" << Abdur_Rehman.name << ".\nAddress:" << Abdur_Rehman.address << ".\nPhone:" << Abdur_Rehman.phone;
	}

	else if (input == "Usama" || input == "usama") {
		cout << "\n\nName:" << Usama.name << ".\nAddress:" << Usama.address << ".\nPhone:" << Usama.phone;
	}
	else
		cout << "Invalid Input";


	return 0;
}