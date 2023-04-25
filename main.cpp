#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Road {
public:
	double length = 1111;
	int width = 11;
	Road();
};

Road::Road() {
	length = 1111;
	width = 11;
}

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Test v1.3: Ok.\n";

	Road road;
	cout << "\nBefore access: \n";
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;

	string line;
	ifstream in("1.txt");
	if (in.is_open())
	{
		getline(in, line);
		road.length = stof(line);
		getline(in, line);
		road.width = stoi(line);
	}
	in.close();

	cout << "\nAfter access: \n";
	cout << "Длина в Давидиных единицах: " << road.length << endl;
	cout << "Ширина в Давидиных единицах: " << road.width << endl;

	return 0;
}
