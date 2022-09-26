#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>

using namespace std;


class Customers
{
public:
	string name, address;
	int age, cell, custID;
	char all[999];

	void getDetails()
	{
		ofstream out("old-customers.txt", ios::app);
		{
		cout << "Enter Customer ID: ";
		cin >> custID;

		cout << "Enter Customer Name: ";
		cin >> name;

		cout << "Enter Customer Age: ";
		cin >> age;

		cout << "Enter Customer Mobile Number: ";
		cin >> cell;

		cout << "Enter Customer Address: ";
		cin >> address;
		}

		out << "\nCustomer ID: " << custID << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << cell << "\nAddress" << address << endl;
		out.close();
		cout << "\nSaved \nNOTE: Your details have been saved\n" << endl;
	}

	void showDetails()
	{
		ifstream in("old-customers.txt");
		{
			if (!in)
			{
				cout << "File Error!" << endl;
			}
			while(!(in.eof()))
			{
				in.getline(all, 999);
				cout << all << endl;
			}
			in.close();
		}
	}
};

class Pets
{
public:

	int petType;
	char petName[20];
	int petSize;
	int petAge;
	int days;

	int cost;

	void petDetails()
	{
		cout << "Enter details of pet to recieve a quote: " << endl;
		cout << "---------- Animal Management System -----------\n" << endl;
		cout << "1. Dog " << endl;
		cout << "2. Cat " << endl;

		cout << "Enter which animal: " << endl;
		cin >> petType;
		cout << "Enter name: " << endl;
		cin >> petName;
		cout << "Enter size: \n 1. small \n 2. medium \n 3. large" << endl;
		cin >> petSize;
		cout << "Enter age: " << endl;
		cin >> petAge;
		cout << "Enter days for stay: " << endl;
		cin >> days;

		if (petType == 1)
		{
			switch (petSize)
			{
			case 1:
				cost = 30;
				break;
			case 2:
				cost = 40;
				break;
			case 3:
				cost = 50;
				break;
			default:
				cout << "error" << endl;
			}
		}
		else if (petType == 2)
		{
			switch (petSize)
			{
			case 1:
				cost = 20;
				break;
			case 2:
				cost = 30;
				break;
			case 3:
				cost = 40;
				break;
			default:
				cout << "error" << endl;
			}
		}
		else
			cout << "error" << endl;
		
		cost *= days;
		cout << cost << endl;

		//still completing this class
	}

};

class Booking
{

};

class Billing
{

};
int main()
{
	cout << "test run" << endl;
	Pets test;
	Customers testing;
	test.petDetails();

	testing.getDetails();
	testing.showDetails();
	return 0;
}
