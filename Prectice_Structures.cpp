#include <iostream>
#include <string>

using namespace std;
void printHeader();
void compareCellPhones();

// Creating structure 
struct CellPhone {

	// Member variables
	string brand;
	string model;
	string upper;
	double weight;
	double price;

	// Getting cellphone specs.
	void getCellphoneSpecs() {
		cout << "Brand of phone: "; 
		cin >> brand;
		cout << "Phone model: "; 
		cin >> model;
		cout << "Weight of phone: "; 
		cin >> weight;
		cout << "Phone price: "; 
		cin >> price;
}
	// Function that checks particular equality of two phones
	bool equals(CellPhone other) {
		if (toUpperCase(brand) == toUpperCase(other.brand) && 
			toUpperCase(model) == toUpperCase(other.model) && 
			weight == other.weight && 
			price == other.price) {
			return true;
		}
		return false;
	}

	// Function to convert string to upper case 
	string toUpperCase(string str) {
		for (int i = 0; i < str.length(); i++) {
			str[i] = toupper(str[i]);
		}
		return str;
	}

	string toString() {
		return "{ brand: " + brand + ", model: " + model + ", weight: " + to_string(weight) + ", price: " + to_string(price) + " }";
	}
};

// main function
int main() {
	printHeader();
	compareCellPhones();
	return 0;
}

// Function to compare any two phones 
void compareCellPhones() {
	// Number of phines to be compared
	int length = 3;
	// Array of type CellPhone
	CellPhone cell[length];
	// Cellphone specs user input
	for (int i = 0; i < length; i++) {
		cout << endl;
		cout << "Enter data for phone number " << i + 1 << endl;
		cout << "------------------------------ " << endl;
		cell[i].getCellphoneSpecs();	
	}

	// Algorythm that compares phones 
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			cout << endl << "Comparing the following 2 phones \n";
			cout << "	Phone " << i + 1 << " is " << cell[i].toString() << endl;
			cout << "	Phone " << j + 1 << " is " << cell[j].toString() << endl;
			if (cell[i].equals(cell[j]) == true) {
				cout << "The two phones are the same \n";
			}
			else {
				cout << "The two phones are NOT the same \n";
			}
		}
	}
	cout << endl << "Hope you are comfortable with the use of structures now. \n";
}


// Printing the header
void printHeader() {
	cout << "-------****-------****-------****-------****-------****-------" << endl;
	cout << "                      Practice Structure!                     " << endl;
	cout << "-------****-------****-------****-------****-------****-------" << endl;
}