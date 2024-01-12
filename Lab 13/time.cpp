#include<iostream>
using namespace std;
int main() {

	struct Time {
		int hours;
		int mins;
		int secs;
	};

	Time time;

	cout << "Enter the total number of hours:";
	cin >> time.hours;
	cout << "Enter the total number of minutes:";
	cin >> time.mins;
	cout << "Enter the total number od seconds:";
	cin >> time.secs;


	int total_time = (time.hours * 60 * 60) + (time.mins * 60) + time.secs;
	cout << "\n\nThe total time taken is:" << total_time;



	return 0;
}