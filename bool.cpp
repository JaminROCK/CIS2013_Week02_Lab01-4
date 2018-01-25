#include <iostream>
using namespace std;

int main()
{
	int room_length = 5, room_width = 10;
	//float room_radius = 10.0;
	//float room_circle_area = (room_radius * room_radius) * 3.14;
	bool keep_running = true;
	char question = 'y';
	while (keep_running) {

		/* ==equal
		 != not equal
		 > greater than
		 < less than
		 <= less than or equal too
		 >= greater than or equal too
		 || left OR right is true
		 && left AND right are true
		*/
		cout << "Enter your Length: ";
		cin >> room_length;

		cout << "Enter your Width: ";
		cin >> room_width;

		if (room_length == room_width) {
			cout << "Length and Width are the same." << endl;
		}
		else {
			cout << "Length and Width are not the same." << endl;
			cout << "Lenght is: " << room_length << endl;
			cout << "Width is: " << room_width << endl;

			cout << "Run again (Y/y): ";
			cin >> question;
			if ((question != 'y') && (question != 'Y')){ keep_running = false; }
		}
	}
	return 0;
}

