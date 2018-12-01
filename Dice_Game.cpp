#include <iostream>
#include <string>
#include <ctime>



using namespace std;


class PairOfDice {

	int die1, die2;
	int maxRoll;


	public:
		int dies(int x, int y) {
			int product;
			die1 = x;
			die2 = y;

			return product = x * y;

		}

};


int main() {

	int x, y;

	PairOfDice pair;
	cin >> x >> y;
	cout << pair.dies(x, y) << endl;






	return 0;
}