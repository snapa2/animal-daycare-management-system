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
	Customers testing;
	testing.getDetails();
	testing.showDetails();
	return 0;
}
