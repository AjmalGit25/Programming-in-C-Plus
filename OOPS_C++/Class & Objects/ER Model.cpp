#include <iostream>
#include <vector>
using namespace std;

class Name {
public:
	Name (string firstName, string middleName, string lastName)
		: firstName(firstName), middleName(middleName), lastName(lastName) {}

	void info() {
		cout << firstName << " "
		     << middleName << " "
		     << lastName;
	}

private:
	string firstName;
	string middleName;
	string lastName;
};

class Birthday {
public:
	Birthday (int m, int d, int y): month(m), day(d), year(y) {}

	void info() {
		cout << day << "/"
		     << month << "/"
		     << year;
	}

private:
	int month;
	int day;
	int year;
};

class Address {
public:
	Address (int houseNo, string street, string city, string state)
		: houseNo(houseNo), street(street), city(city), state(state) {}

	void info() {
		cout << houseNo << ", "
		     << street << ", "
		     << city << ", "
		     << state;
	}

private:
	int houseNo;
	string street;
	string city;
	string state;
};

class Employee {
public:
	Employee (int id, Name n, Address ad, Birthday bd, vector<string>phones)
		: emp_id (id), name (n), address (ad), birthday (bd), phones (phones) {}

	void info() {
		cout << "Employee id: " << emp_id << endl;

		cout << "Name: ";
		name.info();
		cout << endl;

		cout << "Address: ";
		address.info();
		cout << endl;

		cout << "Birthday: ";
		birthday.info();
		cout << endl;

		cout << "Phones: ";
		for (const auto& phone : phones)
			cout << phone << " ";

		cout << endl;
	}
	
	int getAge();               // Derived Attribute

private:
	int emp_id;					// Key Attribute
	Name name;					// Composite Attribute
	Address address;			// Composite Attribute		
	Birthday birthday;			// Composite Attribute
	vector<string> phones;		// Multivalued Attribute
};


int main () {
	Name name ("Ayesha", "Fatima", "Khan");
	Address ad (134, "Masjid Gali 04", "Sitamarhi", "Bihar");
	Birthday bd (11, 4, 1995);

	vector<string> phones = {
		"9876543210",
		"9123456789",
		"9988776655"
	};

	Employee e (786, name, ad, bd, phones);

	e.info();

	return 0;
}