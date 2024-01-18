// ch9_ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Computer
{
	string manufacturer;
	string modelType;
	string processorType;
	int ram;
	int hardDriveSize;
	int yearBuilt;
	double price;

};
int main()
{
	struct Computer type ;
	cout << fixed << showpoint << setprecision(2);
	cout << "Enter the name of the manufacturer: ";
	getline(cin, type.manufacturer);
	cout << endl;
	cout << "Enter the model of the computer: ";
	getline(cin, type.modelType);
	cout << endl;
	cout << "Enter processor type: ";
	getline(cin, type.processorType);
	cout << endl;
	cout << "Enter the size of RAM (in GB): ";
	cin >> type.ram;
	cout << endl;
	cout << "Enter the size of hard drive (in GB): ";
	cin >> type.hardDriveSize;
	cout << endl;
	cout << "Enter the year the computer was built: ";
	cin >> type.yearBuilt;
	cout << endl;
	cout << "Enter the price: ";
	cin >> type.price;
	cout << endl;
	cout << "Manufacturer: " << type.manufacturer << endl;
	cout << "Model: " << type.modelType << endl;
	cout << "Processor: " << type.processorType << endl;
	cout << "Ram: " << type.ram << endl;
	cout << "Hard Drive Size: " << type.hardDriveSize << endl;
	cout << "Year Built: " << type.yearBuilt << endl;
	cout << "Price: $" << type.price << endl;
	return 0;
}
