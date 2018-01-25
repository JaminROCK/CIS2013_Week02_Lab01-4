#include <iostream>
using namespace std;

int main()
{
	int room_length = 5,room_width = 10;
	float room_radius = 10.0; 
	float room_circle_area = (room_radius * room_radius) * 3.14;
	//Printing stuff out.
	cout << "Our number is " << room_length << ". ";
	cout << "Our second number is " << room_width << ". ";
	cout << "If you multiply them you get " << room_length * room_width << ". ";
	cout << "Unless your room is a circle " << room_circle_area << ". ";
		
	//Camel Case
	//roomLength

	//Snake Case
	//room_length

	return 0;
}