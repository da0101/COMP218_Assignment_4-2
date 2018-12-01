#include <iostream>
#include <string>

using namespace std;
void printHeader();
void printExitMessage();
void enterNumbers();
void rotateNumbers();
void shiftLeft();
void shiftRight();
void swap(int indexX, int indexY);
int num[10];

// ,ain function
int main() {
	printHeader();
	enterNumbers();
	rotateNumbers();
	return 0;
}

// Printing the header
void printHeader() {
    cout << "-------****-------****-------****-------****-------****-------" << endl;
    cout << "                   Welcome to the ROTATE program!             " << endl;
    cout << "-------****-------****-------****-------****-------****-------" << endl;
    cout << endl;
}

// Printing exit message
void printExitMessage() {
	cout << "Thank you for using the ROTATION program. " << endl;
}

// Funciton to enter numbers
void enterNumbers() {
	cout << "Please enter 10 integers separated by a space: \n";
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
		//num[i] = i + 1;
	}
	cout << endl;
}

// Function to print numbers
void printNumbers() {
	for (int i = 0; i < 10; i++) {
		cout << num[i] << "    ";
	}
}

// Function to rorate numbers
void rotateNumbers() {
	char rotate = 0;
	printNumbers();
	while (true) {
		cout << "Which way do you want to rotate? <1 for left, 2 for right, 3 for exit>: ";
		cin >> rotate;
		// Rotate left
		if (rotate == '1') {
			shiftLeft();
		}
		// Rotate right
		else if (rotate == '2') {
			shiftRight();
		}
		// Exit program
		else if (rotate == '3') {
			printExitMessage();
			break;
		}
		printNumbers();
	}
}

// Function that rotates numbers to the left by swapping
void shiftLeft() {
	for (int i = 0; i < 9; i++) {
		swap(i, i + 1);
	}
}
// Function that rotates numbers to the right by swapping
void shiftRight() {
	for (int i = 9; i > 0; i--) {
		swap(i, i - 1);
	}
}

// Function to swap
void swap(int indexX, int indexY) {
	int tempVal = num[indexX];
	num[indexX] = num[indexY];
	num[indexY] = tempVal;
}


