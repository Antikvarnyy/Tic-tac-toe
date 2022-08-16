#include <iostream>
#include <conio.h>
#include <String>
#include <chrono>
#include <thread>
using namespace std;

bool CheckingNumbers(const string& s) {
	bool b = true;
	for (auto& a : s) {
		if (!isdigit(a)) {
			b = false;
			break;
		}
	}
	return b;
}

class Tic_Tac {
public:
	int cell[9] = { 0,0,0,0,0,0,0,0,0 };
	bool Check() {
		if (cell[0] == 1 && cell[1] == 1 && cell[2] == 1 || cell[3] == 1 && cell[4] == 1 && cell[5] == 1 || cell[6] == 1 && cell[7] == 1 && cell[8] == 1 || cell[0] == 1 && cell[3] == 1 && cell[6] == 1 || cell[1] == 1 && cell[4] == 1 && cell[7] == 1 || cell[2] == 1 && cell[5] == 1 && cell[8] == 1 || cell[0] == 1 && cell[4] == 1 && cell[8] == 1 || cell[6] == 1 && cell[4] == 1 && cell[2] == 1) {
			cout << "\tX wins!!!\n\n";
			return true;
		}
		else if (cell[0] == 2 && cell[1] == 2 && cell[2] == 2 || cell[3] == 2 && cell[4] == 2 && cell[5] == 2 || cell[6] == 2 && cell[7] == 2 && cell[8] == 2 || cell[0] == 2 && cell[3] == 2 && cell[6] == 2 || cell[1] == 2 && cell[4] == 2 && cell[7] == 2 || cell[2] == 2 && cell[5] == 2 && cell[8] == 2 || cell[0] == 2 && cell[4] == 2 && cell[8] == 2 || cell[6] == 2 && cell[4] == 2 && cell[2] == 2) {
			cout << "\tO wins!!!\n\n";
			return true;
		}
		else if (cell[0] != 0 && cell[1] != 0 && cell[2] != 0 && cell[3] != 0 && cell[4] != 0 && cell[5] != 0 && cell[6] != 0 && cell[7] != 0 && cell[8] != 0) {
			cout << "Draw!\n";
			return true;
		}
		else {
			return false;
		}
	}
	void X() {
		string s;
		int n;
		do {
			cout << "Enter num of space to put X: ";
			cin >> s;
			if (CheckingNumbers(s)) {
				n = stoi(s);
			}
			else {
				cout << "Wrong number\n";
			}
			if (n < 1 || n>9 || cell[n-1] == 1 || cell[n-1] == 2) {
				cout << "Wrong number\n";
				s = "a";
			}
			else {
				n--;
				cell[n] = 1;
			}
		} while (!CheckingNumbers(s));
	}
	void O() {
		string s;
		int n;
		do {
			cout << "Enter num of space to put O: ";
			cin >> s;
			if (CheckingNumbers(s)) {
				n = stoi(s);
			}
			else {
				cout << "Wrong number\n";
			}
			if (n < 1 || n>9 || cell[n - 1] == 1 || cell[n - 1] == 2) {
				cout << "Wrong number\n";
				s = "a";
			}
			else {
				n--;
				cell[n] = 2;
			}
		} while (!CheckingNumbers(s));
	}
	void Print() {
		if (cell[0] == 0 && cell[1] == 0 && cell[2] == 0) {
			cout << "     |     |     \n";
			cout << "     |     |     \n";
			cout << "  1  |  2  |  3  \n";
			cout << "     |     |     \n";
			cout << "     |     |     \n";
		}
		else if (cell[0] == 1 && cell[1] == 1 && cell[2] == 1) {
			cout << "X   X|X   X|X   X\n";
			cout << " X X | X X | X X \n";
			cout << "  X  |  X  |  X  \n";
			cout << " X X | X X | X X \n";
			cout << "X   X|X   X|X   X\n";
		}
		else if (cell[0] == 1 && cell[1] == 0 && cell[2] == 0) {
			cout << "X   X|     |     \n";
			cout << " X X |     |     \n";
			cout << "  X  |  2  |  3  \n";
			cout << " X X |     |     \n";
			cout << "X   X|     |     \n";
		}
		else if (cell[0] == 0 && cell[1] == 1 && cell[2] == 0) {
			cout << "     |X   X|     \n";
			cout << "     | X X |     \n";
			cout << "  1  |  X  |  3  \n";
			cout << "     | X X |     \n";
			cout << "     |X   X|     \n";
		}
		else if (cell[0] == 0 && cell[1] == 0 && cell[2] == 1) {
			cout << "     |     |X   X\n";
			cout << "     |     | X X \n";
			cout << "  1  |  2  |  X  \n";
			cout << "     |     | X X \n";
			cout << "     |     |X   X\n";
		}
		else if (cell[0] == 1 && cell[1] == 1 && cell[2] == 0) {
			cout << "X   X|X   X|     \n";
			cout << " X X | X X |     \n";
			cout << "  X  |  X  |  3  \n";
			cout << " X X | X X |     \n";
			cout << "X   X|X   X|     \n";
		}
		else if (cell[0] == 0 && cell[1] == 1 && cell[2] == 1) {
			cout << "     |X   X|X   X\n";
			cout << "     | X X | X X \n";
			cout << "  1  |  X  |  X  \n";
			cout << "     | X X | X X \n";
			cout << "     |X   X|X   X\n";
		}
		else if (cell[0] == 1 && cell[1] == 0 && cell[2] == 1) {
			cout << "X   X|     |X   X\n";
			cout << " X X |     | X X \n";
			cout << "  X  |  2  |  X  \n";
			cout << " X X |     | X X \n";
			cout << "X   X|     |X   X\n";
		}		
		
		else if (cell[0] == 2 && cell[1] == 2 && cell[2] == 2) {
			cout << " XXX | XXX | XXX \n";
			cout << "X   X|X   X|X   X\n";
			cout << "X   X|X   X|X   X\n";
			cout << "X   X|X   X|X   X\n";
			cout << " XXX | XXX | XXX \n";
		}
		else if (cell[0] == 2 && cell[1] == 0 && cell[2] == 0) {
			cout << " XXX |     |     \n";
			cout << "X   X|     |     \n";
			cout << "X   X|  2  |  3  \n";
			cout << "X   X|     |     \n";
			cout << " XXX |     |     \n";
		}
		else if (cell[0] == 0 && cell[1] == 2 && cell[2] == 0) {
			cout << "     | XXX |     \n";
			cout << "     |X   X|     \n";
			cout << "  1  |X   X|  3  \n";
			cout << "     |X   X|     \n";
			cout << "     | XXX |     \n";
		}
		else if (cell[0] == 0 && cell[1] == 0 && cell[2] == 2) {
			cout << "     |     | XXX \n";
			cout << "     |     |X   X\n";
			cout << "  1  |  2  |X   X\n";
			cout << "     |     |X   X\n";
			cout << "     |     | XXX \n";
		}
		else if (cell[0] == 2 && cell[1] == 2 && cell[2] == 0) {
			cout << " XXX | XXX |     \n";
			cout << "X   X|X   X|     \n";
			cout << "X   X|X   X|  3  \n";
			cout << "X   X|X   X|     \n";
			cout << " XXX | XXX |     \n";
		}
		else if (cell[0] == 0 && cell[1] == 2 && cell[2] == 2) {
			cout << "     | XXX | XXX \n";
			cout << "     |X   X|X   X\n";
			cout << "  1  |X   X|X   X\n";
			cout << "     |X   X|X   X\n";
			cout << "     | XXX | XXX \n";
		}
		else if (cell[0] == 2 && cell[1] == 0 && cell[2] == 2) {
			cout << " XXX |     | XXX \n";
			cout << "X   X|     |X   X\n";
			cout << "X   X|  2  |X   X\n";
			cout << "X   X|     |X   X\n";
			cout << " XXX |     | XXX \n";
		}

		else if (cell[0] == 1 && cell[1] == 0 && cell[2] == 2) {
		cout << "X   X|     | XXX \n";
		cout << " X X |     |X   X\n";
		cout << "  X  |  2  |X   X\n";
		cout << " X X |     |X   X\n";
		cout << "X   X|     | XXX \n";
		}
		else if (cell[0] == 1 && cell[1] == 2 && cell[2] == 0) {
		cout << "X   X| XXX |     \n";
		cout << " X X |X   X|     \n";
		cout << "  X  |X   X|  3  \n";
		cout << " X X |X   X|     \n";
		cout << "X   X| XXX |     \n";
		}
		else if (cell[0] == 1 && cell[1] == 2 && cell[2] == 2) {
		cout << "X   X| XXX | XXX \n";
		cout << " X X |X   X|X   X\n";
		cout << "  X  |X   X|X   X\n";
		cout << " X X |X   X|X   X\n";
		cout << "X   X| XXX | XXX \n";
		}
		else if (cell[0] == 2 && cell[1] == 1 && cell[2] == 2) {
		cout << " XXX |X   X| XXX \n";
		cout << "X   X| X X |X   X\n";
		cout << "X   X|  X  |X   X\n";
		cout << "X   X| X X |X   X\n";
		cout << " XXX |X   X| XXX \n";
		}
		else if (cell[0] == 0 && cell[1] == 1 && cell[2] == 2) {
		cout << "     |X   X| XXX \n";
		cout << "     | X X |X   X\n";
		cout << "  1  |  X  |X   X\n";
		cout << "     | X X |X   X\n";
		cout << "     |X   X| XXX \n";
		}
		else if (cell[0] == 2 && cell[1] == 1 && cell[2] == 0) {
		cout << " XXX |X   X|     \n";
		cout << "X   X| X X |     \n";
		cout << "X   X|  X  |  3  \n";
		cout << "X   X| X X |     \n";
		cout << " XXX |X   X|     \n";
		}
		else if (cell[0] == 2 && cell[1] == 2 && cell[2] == 1) {
		cout << " XXX | XXX |X   X\n";
		cout << "X   X|X   X| X X \n";
		cout << "X   X|X   X|  X  \n";
		cout << "X   X|X   X| X X \n";
		cout << " XXX | XXX |X   X\n";
		}
		else if (cell[0] == 0 && cell[1] == 2 && cell[2] == 1) {
		cout << "     | XXX |X   X\n";
		cout << "     |X   X| X X \n";
		cout << "  1  |X   X|  X  \n";
		cout << "     |X   X| X X \n";
		cout << "     | XXX |X   X\n";
		}
		else if (cell[0] == 2 && cell[1] == 0 && cell[2] == 1) {
		cout << " XXX |     |X   X\n";
		cout << "X   X|     | X X \n";
		cout << "X   X|  2  |  X  \n";
		cout << "X   X|     | X X \n";
		cout << " XXX |     |X   X\n";
		}
		else if (cell[0] == 1 && cell[1] == 1 && cell[2] == 2) {
		cout << "X   X|X   X| XXX \n";
		cout << " X X | X X |X   X\n";
		cout << "  X  |  X  |X   X\n";
		cout << " X X | X X |X   X\n";
		cout << "X   X|X   X| XXX \n";
		}
		else if (cell[0] == 2 && cell[1] == 1 && cell[2] == 1) {
		cout << " XXX |X   X|X   X\n";
		cout << "X   X| X X | X X \n";
		cout << "X   X|  X  |  X  \n";
		cout << "X   X| X X | X X \n";
		cout << " XXX |X   X|X   X\n";
		}
		else if (cell[0] == 1 && cell[1] == 2 && cell[2] == 1) {
		cout << "X   X| XXX |X   X\n";
		cout << " X X |X   X| X X \n";
		cout << "  X  |X   X|  X  \n";
		cout << " X X |X   X| X X \n";
		cout << "X   X| XXX |X   X\n";
		}
		//////////////////////////////////////////////
		cout << "-----------------\n";
		//////////////////////////////////////////////
		if (cell[3] == 0 && cell[4] == 0 && cell[5] == 0) {
			cout << "     |     |     \n";
			cout << "     |     |     \n";
			cout << "  4  |  5  |  6  \n";
			cout << "     |     |     \n";
			cout << "     |     |     \n";
		}
		else if (cell[3] == 1 && cell[4] == 1 && cell[5] == 1) {
			cout << "X   X|X   X|X   X\n";
			cout << " X X | X X | X X \n";
			cout << "  X  |  X  |  X  \n";
			cout << " X X | X X | X X \n";
			cout << "X   X|X   X|X   X\n";
		}
		else if (cell[3] == 1 && cell[4] == 0 && cell[5] == 0) {
			cout << "X   X|     |     \n";
			cout << " X X |     |     \n";
			cout << "  X  |  5  |  6  \n";
			cout << " X X |     |     \n";
			cout << "X   X|     |     \n";
		}
		else if (cell[3] == 0 && cell[4] == 1 && cell[5] == 0) {
			cout << "     |X   X|     \n";
			cout << "     | X X |     \n";
			cout << "  4  |  X  |  6  \n";
			cout << "     | X X |     \n";
			cout << "     |X   X|     \n";
		}
		else if (cell[3] == 0 && cell[4] == 0 && cell[5] == 1) {
			cout << "     |     |X   X\n";
			cout << "     |     | X X \n";
			cout << "  4  |  5  |  X  \n";
			cout << "     |     | X X \n";
			cout << "     |     |X   X\n";
		}
		else if (cell[3] == 1 && cell[4] == 1 && cell[5] == 0) {
			cout << "X   X|X   X|     \n";
			cout << " X X | X X |     \n";
			cout << "  X  |  X  |  6  \n";
			cout << " X X | X X |     \n";
			cout << "X   X|X   X|     \n";
		}
		else if (cell[3] == 0 && cell[4] == 1 && cell[5] == 1) {
			cout << "     |X   X|X   X\n";
			cout << "     | X X | X X \n";
			cout << "  4  |  X  |  X  \n";
			cout << "     | X X | X X \n";
			cout << "     |X   X|X   X\n";
		}
		else if (cell[3] == 1 && cell[4] == 0 && cell[5] == 1) {
			cout << "X   X|     |X   X\n";
			cout << " X X |     | X X \n";
			cout << "  X  |  5  |  X  \n";
			cout << " X X |     | X X \n";
			cout << "X   X|     |X   X\n";
		}

		else if (cell[3] == 2 && cell[4] == 2 && cell[5] == 2) {
			cout << " XXX | XXX | XXX \n";
			cout << "X   X|X   X|X   X\n";
			cout << "X   X|X   X|X   X\n";
			cout << "X   X|X   X|X   X\n";
			cout << " XXX | XXX | XXX \n";
		}
		else if (cell[3] == 2 && cell[4] == 0 && cell[5] == 0) {
			cout << " XXX |     |     \n";
			cout << "X   X|     |     \n";
			cout << "X   X|  5  |  6  \n";
			cout << "X   X|     |     \n";
			cout << " XXX |     |     \n";
		}
		else if (cell[3] == 0 && cell[4] == 2 && cell[5] == 0) {
			cout << "     | XXX |     \n";
			cout << "     |X   X|     \n";
			cout << "  4  |X   X|  6  \n";
			cout << "     |X   X|     \n";
			cout << "     | XXX |     \n";
		}
		else if (cell[3] == 0 && cell[4] == 0 && cell[5] == 2) {
			cout << "     |     | XXX \n";
			cout << "     |     |X   X\n";
			cout << "  4  |  5  |X   X\n";
			cout << "     |     |X   X\n";
			cout << "     |     | XXX \n";
		}
		else if (cell[3] == 2 && cell[4] == 2 && cell[5] == 0) {
			cout << " XXX | XXX |     \n";
			cout << "X   X|X   X|     \n";
			cout << "X   X|X   X|  6  \n";
			cout << "X   X|X   X|     \n";
			cout << " XXX | XXX |     \n";
		}
		else if (cell[3] == 0 && cell[4] == 2 && cell[5] == 2) {
			cout << "     | XXX | XXX \n";
			cout << "     |X   X|X   X\n";
			cout << "  4  |X   X|X   X\n";
			cout << "     |X   X|X   X\n";
			cout << "     | XXX | XXX \n";
		}
		else if (cell[3] == 2 && cell[4] == 0 && cell[5] == 2) {
			cout << " XXX |     | XXX \n";
			cout << "X   X|     |X   X\n";
			cout << "X   X|  5  |X   X\n";
			cout << "X   X|     |X   X\n";
			cout << " XXX |     | XXX \n";
		}

		else if (cell[3] == 1 && cell[4] == 0 && cell[5] == 2) {
			cout << "X   X|     | XXX \n";
			cout << " X X |     |X   X\n";
			cout << "  X  |  5  |X   X\n";
			cout << " X X |     |X   X\n";
			cout << "X   X|     | XXX \n";
		}
		else if (cell[3] == 1 && cell[4] == 2 && cell[5] == 0) {
			cout << "X   X| XXX |     \n";
			cout << " X X |X   X|     \n";
			cout << "  X  |X   X|  6  \n";
			cout << " X X |X   X|     \n";
			cout << "X   X| XXX |     \n";
		}
		else if (cell[3] == 1 && cell[4] == 2 && cell[5] == 2) {
			cout << "X   X| XXX | XXX \n";
			cout << " X X |X   X|X   X\n";
			cout << "  X  |X   X|X   X\n";
			cout << " X X |X   X|X   X\n";
			cout << "X   X| XXX | XXX \n";
		}
		else if (cell[3] == 2 && cell[4] == 1 && cell[5] == 2) {
			cout << " XXX |X   X| XXX \n";
			cout << "X   X| X X |X   X\n";
			cout << "X   X|  X  |X   X\n";
			cout << "X   X| X X |X   X\n";
			cout << " XXX |X   X| XXX \n";
		}
		else if (cell[3] == 0 && cell[4] == 1 && cell[5] == 2) {
			cout << "     |X   X| XXX \n";
			cout << "     | X X |X   X\n";
			cout << "  4  |  X  |X   X\n";
			cout << "     | X X |X   X\n";
			cout << "     |X   X| XXX \n";
		}
		else if (cell[3] == 2 && cell[4] == 1 && cell[5] == 0) {
			cout << " XXX |X   X|     \n";
			cout << "X   X| X X |     \n";
			cout << "X   X|  X  |  6  \n";
			cout << "X   X| X X |     \n";
			cout << " XXX |X   X|     \n";
		}
		else if (cell[3] == 2 && cell[4] == 2 && cell[5] == 1) {
			cout << " XXX | XXX |X   X\n";
			cout << "X   X|X   X| X X \n";
			cout << "X   X|X   X|  X  \n";
			cout << "X   X|X   X| X X \n";
			cout << " XXX | XXX |X   X\n";
		}
		else if (cell[3] == 0 && cell[4] == 2 && cell[5] == 1) {
			cout << "     | XXX |X   X\n";
			cout << "     |X   X| X X \n";
			cout << "  4  |X   X|  X  \n";
			cout << "     |X   X| X X \n";
			cout << "     | XXX |X   X\n";
		}
		else if (cell[3] == 2 && cell[4] == 0 && cell[5] == 1) {
			cout << " XXX |     |X   X\n";
			cout << "X   X|     | X X \n";
			cout << "X   X|  5  |  X  \n";
			cout << "X   X|     | X X \n";
			cout << " XXX |     |X   X\n";
		}
		else if (cell[3] == 1 && cell[4] == 1 && cell[5] == 2) {
			cout << "X   X|X   X| XXX \n";
			cout << " X X | X X |X   X\n";
			cout << "  X  |  X  |X   X\n";
			cout << " X X | X X |X   X\n";
			cout << "X   X|X   X| XXX \n";
		}
		else if (cell[3] == 2 && cell[4] == 1 && cell[5] == 1) {
			cout << " XXX |X   X|X   X\n";
			cout << "X   X| X X | X X \n";
			cout << "X   X|  X  |  X  \n";
			cout << "X   X| X X | X X \n";
			cout << " XXX |X   X|X   X\n";
		}
		else if (cell[3] == 1 && cell[4] == 2 && cell[5] == 1) {
			cout << "X   X| XXX |X   X\n";
			cout << " X X |X   X| X X \n";
			cout << "  X  |X   X|  X  \n";
			cout << " X X |X   X| X X \n";
			cout << "X   X| XXX |X   X\n";
		}
		//////////////////////////////////////////////
		cout << "-----------------\n";
		//////////////////////////////////////////////
		if (cell[6] == 0 && cell[7] == 0 && cell[8] == 0) {
			cout << "     |     |     \n";
			cout << "     |     |     \n";
			cout << "  7  |  8  |  9  \n";
			cout << "     |     |     \n";
			cout << "     |     |     \n";
		}
		else if (cell[6] == 1 && cell[7] == 1 && cell[8] == 1) {
			cout << "X   X|X   X|X   X\n";
			cout << " X X | X X | X X \n";
			cout << "  X  |  X  |  X  \n";
			cout << " X X | X X | X X \n";
			cout << "X   X|X   X|X   X\n";
		}
		else if (cell[6] == 1 && cell[7] == 0 && cell[8] == 0) {
			cout << "X   X|     |     \n";
			cout << " X X |     |     \n";
			cout << "  X  |  8  |  9  \n";
			cout << " X X |     |     \n";
			cout << "X   X|     |     \n";
		}
		else if (cell[6] == 0 && cell[7] == 1 && cell[8] == 0) {
			cout << "     |X   X|     \n";
			cout << "     | X X |     \n";
			cout << "  7  |  X  |  9  \n";
			cout << "     | X X |     \n";
			cout << "     |X   X|     \n";
		}
		else if (cell[6] == 0 && cell[7] == 0 && cell[8] == 1) {
			cout << "     |     |X   X\n";
			cout << "     |     | X X \n";
			cout << "  7  |  8  |  X  \n";
			cout << "     |     | X X \n";
			cout << "     |     |X   X\n";
		}
		else if (cell[6] == 1 && cell[7] == 1 && cell[8] == 0) {
			cout << "X   X|X   X|     \n";
			cout << " X X | X X |     \n";
			cout << "  X  |  X  |  9  \n";
			cout << " X X | X X |     \n";
			cout << "X   X|X   X|     \n";
		}
		else if (cell[6] == 0 && cell[7] == 1 && cell[8] == 1) {
			cout << "     |X   X|X   X\n";
			cout << "     | X X | X X \n";
			cout << "  7  |  X  |  X  \n";
			cout << "     | X X | X X \n";
			cout << "     |X   X|X   X\n";
		}
		else if (cell[6] == 1 && cell[7] == 0 && cell[8] == 1) {
			cout << "X   X|     |X   X\n";
			cout << " X X |     | X X \n";
			cout << "  X  |  8  |  X  \n";
			cout << " X X |     | X X \n";
			cout << "X   X|     |X   X\n";
		}

		else if (cell[6] == 2 && cell[7] == 2 && cell[8] == 2) {
			cout << " XXX | XXX | XXX \n";
			cout << "X   X|X   X|X   X\n";
			cout << "X   X|X   X|X   X\n";
			cout << "X   X|X   X|X   X\n";
			cout << " XXX | XXX | XXX \n";
		}
		else if (cell[6] == 2 && cell[7] == 0 && cell[8] == 0) {
			cout << " XXX |     |     \n";
			cout << "X   X|     |     \n";
			cout << "X   X|  8  |  9  \n";
			cout << "X   X|     |     \n";
			cout << " XXX |     |     \n";
		}
		else if (cell[6] == 0 && cell[7] == 2 && cell[8] == 0) {
			cout << "     | XXX |     \n";
			cout << "     |X   X|     \n";
			cout << "  7  |X   X|  9  \n";
			cout << "     |X   X|     \n";
			cout << "     | XXX |     \n";
		}
		else if (cell[6] == 0 && cell[7] == 0 && cell[8] == 2) {
			cout << "     |     | XXX \n";
			cout << "     |     |X   X\n";
			cout << "  7  |  8  |X   X\n";
			cout << "     |     |X   X\n";
			cout << "     |     | XXX \n";
		}
		else if (cell[6] == 2 && cell[7] == 2 && cell[8] == 0) {
			cout << " XXX | XXX |     \n";
			cout << "X   X|X   X|     \n";
			cout << "X   X|X   X|  9  \n";
			cout << "X   X|X   X|     \n";
			cout << " XXX | XXX |     \n";
		}
		else if (cell[6] == 0 && cell[7] == 2 && cell[8] == 2) {
			cout << "     | XXX | XXX \n";
			cout << "     |X   X|X   X\n";
			cout << "  7  |X   X|X   X\n";
			cout << "     |X   X|X   X\n";
			cout << "     | XXX | XXX \n";
		}
		else if (cell[6] == 2 && cell[7] == 0 && cell[8] == 2) {
			cout << " XXX |     | XXX \n";
			cout << "X   X|     |X   X\n";
			cout << "X   X|  8  |X   X\n";
			cout << "X   X|     |X   X\n";
			cout << " XXX |     | XXX \n";
		}

		else if (cell[6] == 1 && cell[7] == 0 && cell[8] == 2) {
			cout << "X   X|     | XXX \n";
			cout << " X X |     |X   X\n";
			cout << "  X  |  8  |X   X\n";
			cout << " X X |     |X   X\n";
			cout << "X   X|     | XXX \n";
		}
		else if (cell[6] == 1 && cell[7] == 2 && cell[8] == 0) {
			cout << "X   X| XXX |     \n";
			cout << " X X |X   X|     \n";
			cout << "  X  |X   X|  9  \n";
			cout << " X X |X   X|     \n";
			cout << "X   X| XXX |     \n";
		}
		else if (cell[6] == 1 && cell[7] == 2 && cell[8] == 2) {
			cout << "X   X| XXX | XXX \n";
			cout << " X X |X   X|X   X\n";
			cout << "  X  |X   X|X   X\n";
			cout << " X X |X   X|X   X\n";
			cout << "X   X| XXX | XXX \n";
		}
		else if (cell[6] == 2 && cell[7] == 1 && cell[8] == 2) {
			cout << " XXX |X   X| XXX \n";
			cout << "X   X| X X |X   X\n";
			cout << "X   X|  X  |X   X\n";
			cout << "X   X| X X |X   X\n";
			cout << " XXX |X   X| XXX \n";
		}
		else if (cell[6] == 0 && cell[7] == 1 && cell[8] == 2) {
			cout << "     |X   X| XXX \n";
			cout << "     | X X |X   X\n";
			cout << "  7  |  X  |X   X\n";
			cout << "     | X X |X   X\n";
			cout << "     |X   X| XXX \n";
		}
		else if (cell[6] == 2 && cell[7] == 1 && cell[8] == 0) {
			cout << " XXX |X   X|     \n";
			cout << "X   X| X X |     \n";
			cout << "X   X|  X  |  9  \n";
			cout << "X   X| X X |     \n";
			cout << " XXX |X   X|     \n";
		}
		else if (cell[6] == 2 && cell[7] == 2 && cell[8] == 1) {
			cout << " XXX | XXX |X   X\n";
			cout << "X   X|X   X| X X \n";
			cout << "X   X|X   X|  X  \n";
			cout << "X   X|X   X| X X \n";
			cout << " XXX | XXX |X   X\n";
		}
		else if (cell[6] == 0 && cell[7] == 2 && cell[8] == 1) {
			cout << "     | XXX |X   X\n";
			cout << "     |X   X| X X \n";
			cout << "  7  |X   X|  X  \n";
			cout << "     |X   X| X X \n";
			cout << "     | XXX |X   X\n";
		}
		else if (cell[6] == 2 && cell[7] == 0 && cell[8] == 1) {
			cout << " XXX |     |X   X\n";
			cout << "X   X|     | X X \n";
			cout << "X   X|  8  |  X  \n";
			cout << "X   X|     | X X \n";
			cout << " XXX |     |X   X\n";
		}
		else if (cell[6] == 1 && cell[7] == 1 && cell[8] == 2) {
			cout << "X   X|X   X| XXX \n";
			cout << " X X | X X |X   X\n";
			cout << "  X  |  X  |X   X\n";
			cout << " X X | X X |X   X\n";
			cout << "X   X|X   X| XXX \n";
		}
		else if (cell[6] == 2 && cell[7] == 1 && cell[8] == 1) {
			cout << " XXX |X   X|X   X\n";
			cout << "X   X| X X | X X \n";
			cout << "X   X|  X  |  X  \n";
			cout << "X   X| X X | X X \n";
			cout << " XXX |X   X|X   X\n";
		}
		else if (cell[6] == 1 && cell[7] == 2 && cell[8] == 1) {
			cout << "X   X| XXX |X   X\n";
			cout << " X X |X   X| X X \n";
			cout << "  X  |X   X|  X  \n";
			cout << " X X |X   X| X X \n";
			cout << "X   X| XXX |X   X\n";
		}
	}

};

int main()
{
	srand(time(0));
	Tic_Tac t;
	char ch;
	int b = 0;
	do {
		cout << "1 - Player vs PC(random fill)\n2 - Player vs Player\n3 - PC vc PC(for fun)\n";
		ch = _getch();
		if (ch == 27)
			return 0;
	} while (ch != '1' && ch != '2'&&ch!='3');
	if (ch == '1') {
		for (int i = 1; true; i++) {
			system("cls");
			if (t.Check()) {
				t.Print();
				break;
			}
			t.Print();
			cout << "\n";
			if (i % 2 != 0) {
				t.X();
			}
			else {
				while (true) {
					b = 1 + rand() % 9;
					if (t.cell[b-1] == 0) {
						t.cell[b-1] = 2;
						break;
					}
				}
			}
		}
	}
	else if(ch=='2') {
		for (int i = 1; true; i++) {
			system("cls");
			if (t.Check()) {
				t.Print();
				break;
			}
			t.Print();
			cout << "\n";
			if (i % 2 != 0) {
				t.X();
			}
			else {
				t.O();
			}
		}
	}
	else {
		for (int i = 1; true; i++) {
			system("cls");
			if (t.Check()) {
				t.Print();
				break;
			}
			t.Print();
			this_thread::sleep_for(1500ms);
			cout << "\n";
			if (i % 2 != 0) {
				while (true) {
					b = 1 + rand() % 9;
					if (t.cell[b - 1] == 0) {
						t.cell[b - 1] = 1;
						break;
					}
				}
			}
			else {
				while (true) {
					b = 1 + rand() % 9;
					if (t.cell[b - 1] == 0) {
						t.cell[b - 1] = 2;
						break;
					}
				}
			}
		}
	}
}