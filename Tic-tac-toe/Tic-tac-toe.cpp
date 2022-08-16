#include <iostream>
#include <conio.h>
#include <String>
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
		if (cell[0] == cell[1] == cell[2] == 1 || cell[3] == cell[4] == cell[5] == 1 || cell[6] == cell[7] == cell[8] == 1 || cell[0] == cell[3] == cell[6] == 1 || cell[1] == cell[4] == cell[7] == 1 || cell[2] == cell[5] == cell[8] == 1 || cell[0] == cell[4] == cell[8] == 1 || cell[6] == cell[4] == cell[2] == 1) {
			cout << "X wins!!!\n";
			return true;
		}
		else if (cell[0] == cell[1] == cell[2] == 2 || cell[3] == cell[4] == cell[5] == 2 || cell[6] == cell[7] == cell[8] == 2 || cell[0] == cell[3] == cell[6] == 2 || cell[1] == cell[4] == cell[7] == 2 || cell[2] == cell[5] == cell[8] == 2 || cell[0] == cell[4] == cell[8] == 2 || cell[6] == cell[4] == cell[2] == 2) {
			cout << "O wins!!!\n";
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
			if (n < 1 || n>9 || cell[n] != 0) {
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
			if (n < 1 || n>9 || cell[n] != 0) {
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
		if (cell[0] == cell[1] == cell[2] == 0) {
			cout << "     |     |     \n";
			cout << "     |     |     \n";
			cout << "     |     |     \n";
			cout << "     |     |     \n";
			cout << "     |     |     \n";
		}
		else if (cell[0] == cell[1] == cell[2] == 1) {
			cout << "X   X|X   X|X   X\n";
			cout << " X X | X X | X X \n";
			cout << "  X  |  X  |  X  \n";
			cout << " X X | X X | X X \n";
			cout << "X   X|X   X|X   X\n";
		}
		else if(cell[0] == 1 && cell[1]==cell[2]==0) {
			cout << "X   X|     |     \n";
			cout << " X X |     |     \n";
			cout << "  X  |     |     \n";
			cout << " X X |     |     \n";
			cout << "X   X|     |     \n";
		}
		else if (cell[1] == 1 && cell[0] == cell[2] == 0) {
			cout << "     |X   X|     \n";
			cout << "     | X X |     \n";
			cout << "     |  X  |     \n";
			cout << "     | X X |     \n";
			cout << "     |X   X|     \n";
		}
		else if (cell[2] == 1 && cell[0] == cell[1] == 0) {
			cout << "     |     |X   X\n";
			cout << "     |     | X X \n";
			cout << "     |     |  X  \n";
			cout << "     |     | X X \n";
			cout << "     |     |X   X\n";
		}
		else if (cell[2] == 0 && cell[1] == cell[0] == 1) {
			cout << "X   X|X   X|     \n";
			cout << " X X | X X |     \n";
			cout << "  X  |  X  |     \n";
			cout << " X X | X X |     \n";
			cout << "X   X|X   X|     \n";
		}
		else if (cell[0] == 0 && cell[1] == cell[2] == 1) {
			cout << "     |X   X|X   X\n";
			cout << "     | X X | X X \n";
			cout << "     |  X  |  X  \n";
			cout << "     | X X | X X \n";
			cout << "     |X   X|X   X\n";
		}
		else if (cell[1] == 0 && cell[0] == cell[2] == 1) {
			cout << "X   X|     |X   X\n";
			cout << " X X |     | X X \n";
			cout << "  X  |     |  X  \n";
			cout << " X X |     | X X \n";
			cout << "X   X|     |X   X\n";
		}		
		
		else if (cell[0] == cell[1] == cell[2] == 2) {
			cout << " XXX | XXX | XXX \n";
			cout << "X   X|X   X|X   X\n";
			cout << "X   X|X   X|X   X\n";
			cout << "X   X|X   X|X   X\n";
			cout << " XXX | XXX | XXX \n";
		}
		else if (cell[0] == 2 && cell[1] == cell[2] == 0) {
			cout << " XXX |     |     \n";
			cout << "X   X|     |     \n";
			cout << "X   X|     |     \n";
			cout << "X   X|     |     \n";
			cout << " XXX |     |     \n";
		}
		else if (cell[1] == 2 && cell[0] == cell[2] == 0) {
			cout << "     | XXX |     \n";
			cout << "     |X   X|     \n";
			cout << "     |X   X|     \n";
			cout << "     |X   X|     \n";
			cout << "     | XXX |     \n";
		}
		else if (cell[2] == 2 && cell[0] == cell[1] == 0) {
			cout << "     |     | XXX \n";
			cout << "     |     |X   X\n";
			cout << "     |     |X   X\n";
			cout << "     |     |X   X\n";
			cout << "     |     | XXX \n";
		}
		else if (cell[2] == 0 && cell[1] == cell[0] == 2) {
			cout << " XXX | XXX |     \n";
			cout << "X   X|X   X|     \n";
			cout << "X   X|X   X|     \n";
			cout << "X   X|X   X|     \n";
			cout << " XXX | XXX |     \n";
		}
		else if (cell[0] == 0 && cell[1] == cell[2] == 2) {
			cout << "     | XXX | XXX \n";
			cout << "     |X   X|X   X\n";
			cout << "     |X   X|X   X\n";
			cout << "     |X   X|X   X\n";
			cout << "     | XXX | XXX \n";
		}
		else if (cell[1] == 0 && cell[0] == cell[2] == 2) {
			cout << " XXX |     | XXX \n";
			cout << "X   X|     |X   X\n";
			cout << "X   X|     |X   X\n";
			cout << "X   X|     |X   X\n";
			cout << " XXX |     | XXX \n";
		}

		else if (cell[0] == 1 && cell[1] == 0 && cell[2] == 2) {
		cout << "X   X|     | XXX \n";
		cout << " X X |     |X   X\n";
		cout << "  X  |     |X   X\n";
		cout << " X X |     |X   X\n";
		cout << "X   X|     | XXX \n";
		}
		else if (cell[0] == 1 && cell[1] == 2 && cell[2] == 2) {
		cout << "X   X| XXX |     \n";
		cout << " X X |X   X|     \n";
		cout << "  X  |X   X|     \n";
		cout << " X X |X   X|     \n";
		cout << "X   X| XXX |     \n";
		}
		else if (cell[0] == 1 && cell[1] == cell[2] == 2) {
		cout << "X   X| XXX | XXX \n";
		cout << " X X |X   X|X   X\n";
		cout << "  X  |X   X|X   X\n";
		cout << " X X |X   X|X   X\n";
		cout << "X   X| XXX | XXX \n";
		}
		else if (cell[1] == 1 && cell[0] == cell[2] == 2) {
		cout << " XXX |X   X| XXX \n";
		cout << "X   X| X X |X   X\n";
		cout << "X   X|  X  |X   X\n";
		cout << "X   X| X X |X   X\n";
		cout << " XXX |X   X| XXX \n";
		}
		else if (cell[1] == 1 && cell[0] == 0 && cell[2] == 2) {
		cout << "     |X   X| XXX \n";
		cout << "     | X X |X   X\n";
		cout << "     |  X  |X   X\n";
		cout << "     | X X |X   X\n";
		cout << "     |X   X| XXX \n";
		}
		else if (cell[1] == 1 && cell[2] == 0 && cell[0] == 2) {
		cout << " XXX |X   X|     \n";
		cout << "X   X| X X |     \n";
		cout << "X   X|  X  |     \n";
		cout << "X   X| X X |     \n";
		cout << " XXX |X   X|     \n";
		}
		else if (cell[2] == 1 && cell[0] == cell[1] == 2) {
		cout << " XXX | XXX |X   X\n";
		cout << "X   X|X   X| X X \n";
		cout << "X   X|X   X|  X  \n";
		cout << "X   X|X   X| X X \n";
		cout << " XXX | XXX |X   X\n";
		}
		else if (cell[2] == 1 && cell[0] == 0 && cell[1] == 2) {
		cout << "     | XXX |X   X\n";
		cout << "     |X   X| X X \n";
		cout << "     |X   X|  X  \n";
		cout << "     |X   X| X X \n";
		cout << "     | XXX |X   X\n";
		}
		else if (cell[2] == 1 && cell[0] == 2 && cell[1] == 0) {
		cout << " XXX |     |X   X\n";
		cout << "X   X|     | X X \n";
		cout << "X   X|     |  X  \n";
		cout << "X   X|     | X X \n";
		cout << " XXX |     |X   X\n";
		}
		else if (cell[2] == 2 && cell[0] == cell[1] == 1) {
		cout << "X   X|X   X| XXX \n";
		cout << " X X | X X |X   X\n";
		cout << "  X  |  X  |X   X\n";
		cout << " X X | X X |X   X\n";
		cout << "X   X|X   X| XXX \n";
		}
		else if (cell[0] == 2 && cell[2] == cell[1] == 1) {
		cout << " XXX |X   X|X   X\n";
		cout << "X   X| X X | X X \n";
		cout << "X   X|  X  |  X  \n";
		cout << "X   X| X X | X X \n";
		cout << " XXX |X   X|X   X\n";
		}
		else if (cell[1] == 2 && cell[0] == cell[2] == 1) {
		cout << "X   X| XXX |X   X\n";
		cout << " X X |X   X| X X \n";
		cout << "  X  |X   X|  X  \n";
		cout << " X X |X   X| X X \n";
		cout << "X   X| XXX |X   X\n";
		}
		//////////////////////////////////////////////
		cout << "-----------------\n";
		//////////////////////////////////////////////
		if (cell[3] == cell[4] == cell[5] == 0) {
			cout << "     |     |     \n";
			cout << "     |     |     \n";
			cout << "     |     |     \n";
			cout << "     |     |     \n";
			cout << "     |     |     \n";
		}
		else if (cell[3] == cell[4] == cell[5] == 1) {
			cout << "X   X|X   X|X   X\n";
			cout << " X X | X X | X X \n";
			cout << "  X  |  X  |  X  \n";
			cout << " X X | X X | X X \n";
			cout << "X   X|X   X|X   X\n";
		}
		else if (cell[3] == 1 && cell[4] == cell[5] == 0) {
			cout << "X   X|     |     \n";
			cout << " X X |     |     \n";
			cout << "  X  |     |     \n";
			cout << " X X |     |     \n";
			cout << "X   X|     |     \n";
		}
		else if (cell[4] == 1 && cell[3] == cell[5] == 0) {
			cout << "     |X   X|     \n";
			cout << "     | X X |     \n";
			cout << "     |  X  |     \n";
			cout << "     | X X |     \n";
			cout << "     |X   X|     \n";
		}
		else if (cell[5] == 1 && cell[3] == cell[4] == 0) {
			cout << "     |     |X   X\n";
			cout << "     |     | X X \n";
			cout << "     |     |  X  \n";
			cout << "     |     | X X \n";
			cout << "     |     |X   X\n";
		}
		else if (cell[5] == 0 && cell[4] == cell[3] == 1) {
			cout << "X   X|X   X|     \n";
			cout << " X X | X X |     \n";
			cout << "  X  |  X  |     \n";
			cout << " X X | X X |     \n";
			cout << "X   X|X   X|     \n";
		}
		else if (cell[3] == 0 && cell[4] == cell[5] == 1) {
			cout << "     |X   X|X   X\n";
			cout << "     | X X | X X \n";
			cout << "     |  X  |  X  \n";
			cout << "     | X X | X X \n";
			cout << "     |X   X|X   X\n";
		}
		else if (cell[4] == 0 && cell[3] == cell[5] == 1) {
			cout << "X   X|     |X   X\n";
			cout << " X X |     | X X \n";
			cout << "  X  |     |  X  \n";
			cout << " X X |     | X X \n";
			cout << "X   X|     |X   X\n";
		}

		else if (cell[3] == cell[4] == cell[5] == 2) {
			cout << " XXX | XXX | XXX \n";
			cout << "X   X|X   X|X   X\n";
			cout << "X   X|X   X|X   X\n";
			cout << "X   X|X   X|X   X\n";
			cout << " XXX | XXX | XXX \n";
		}
		else if (cell[3] == 2 && cell[4] == cell[5] == 0) {
			cout << " XXX |     |     \n";
			cout << "X   X|     |     \n";
			cout << "X   X|     |     \n";
			cout << "X   X|     |     \n";
			cout << " XXX |     |     \n";
		}
		else if (cell[4] == 2 && cell[3] == cell[5] == 0) {
			cout << "     | XXX |     \n";
			cout << "     |X   X|     \n";
			cout << "     |X   X|     \n";
			cout << "     |X   X|     \n";
			cout << "     | XXX |     \n";
		}
		else if (cell[5] == 2 && cell[3] == cell[4] == 0) {
			cout << "     |     | XXX \n";
			cout << "     |     |X   X\n";
			cout << "     |     |X   X\n";
			cout << "     |     |X   X\n";
			cout << "     |     | XXX \n";
		}
		else if (cell[5] == 0 && cell[4] == cell[3] == 2) {
			cout << " XXX | XXX |     \n";
			cout << "X   X|X   X|     \n";
			cout << "X   X|X   X|     \n";
			cout << "X   X|X   X|     \n";
			cout << " XXX | XXX |     \n";
		}
		else if (cell[3] == 0 && cell[4] == cell[5] == 2) {
			cout << "     | XXX | XXX \n";
			cout << "     |X   X|X   X\n";
			cout << "     |X   X|X   X\n";
			cout << "     |X   X|X   X\n";
			cout << "     | XXX | XXX \n";
		}
		else if (cell[4] == 0 && cell[3] == cell[5] == 2) {
			cout << " XXX |     | XXX \n";
			cout << "X   X|     |X   X\n";
			cout << "X   X|     |X   X\n";
			cout << "X   X|     |X   X\n";
			cout << " XXX |     | XXX \n";
		}

		else if (cell[3] == 1 && cell[4] == 0 && cell[5] == 2) {
			cout << "X   X|     | XXX \n";
			cout << " X X |     |X   X\n";
			cout << "  X  |     |X   X\n";
			cout << " X X |     |X   X\n";
			cout << "X   X|     | XXX \n";
		}
		else if (cell[3] == 1 && cell[4] == 2 && cell[5] == 2) {
			cout << "X   X| XXX |     \n";
			cout << " X X |X   X|     \n";
			cout << "  X  |X   X|     \n";
			cout << " X X |X   X|     \n";
			cout << "X   X| XXX |     \n";
		}
		else if (cell[3] == 1 && cell[4] == cell[5] == 2) {
			cout << "X   X| XXX | XXX \n";
			cout << " X X |X   X|X   X\n";
			cout << "  X  |X   X|X   X\n";
			cout << " X X |X   X|X   X\n";
			cout << "X   X| XXX | XXX \n";
		}
		else if (cell[4] == 1 && cell[3] == cell[5] == 2) {
			cout << " XXX |X   X| XXX \n";
			cout << "X   X| X X |X   X\n";
			cout << "X   X|  X  |X   X\n";
			cout << "X   X| X X |X   X\n";
			cout << " XXX |X   X| XXX \n";
		}
		else if (cell[4] == 1 && cell[3] == 0 && cell[5] == 2) {
			cout << "     |X   X| XXX \n";
			cout << "     | X X |X   X\n";
			cout << "     |  X  |X   X\n";
			cout << "     | X X |X   X\n";
			cout << "     |X   X| XXX \n";
		}
		else if (cell[4] == 1 && cell[5] == 0 && cell[3] == 2) {
			cout << " XXX |X   X|     \n";
			cout << "X   X| X X |     \n";
			cout << "X   X|  X  |     \n";
			cout << "X   X| X X |     \n";
			cout << " XXX |X   X|     \n";
		}
		else if (cell[5] == 1 && cell[3] == cell[4] == 2) {
			cout << " XXX | XXX |X   X\n";
			cout << "X   X|X   X| X X \n";
			cout << "X   X|X   X|  X  \n";
			cout << "X   X|X   X| X X \n";
			cout << " XXX | XXX |X   X\n";
		}
		else if (cell[5] == 1 && cell[3] == 0 && cell[4] == 2) {
			cout << "     | XXX |X   X\n";
			cout << "     |X   X| X X \n";
			cout << "     |X   X|  X  \n";
			cout << "     |X   X| X X \n";
			cout << "     | XXX |X   X\n";
		}
		else if (cell[5] == 1 && cell[3] == 2 && cell[4] == 0) {
			cout << " XXX |     |X   X\n";
			cout << "X   X|     | X X \n";
			cout << "X   X|     |  X  \n";
			cout << "X   X|     | X X \n";
			cout << " XXX |     |X   X\n";
		}
		else if (cell[5] == 2 && cell[3] == cell[4] == 1) {
			cout << "X   X|X   X| XXX \n";
			cout << " X X | X X |X   X\n";
			cout << "  X  |  X  |X   X\n";
			cout << " X X | X X |X   X\n";
			cout << "X   X|X   X| XXX \n";
		}
		else if (cell[3] == 2 && cell[5] == cell[4] == 1) {
			cout << " XXX |X   X|X   X\n";
			cout << "X   X| X X | X X \n";
			cout << "X   X|  X  |  X  \n";
			cout << "X   X| X X | X X \n";
			cout << " XXX |X   X|X   X\n";
		}
		else if (cell[4] == 2 && cell[3] == cell[5] == 1) {
			cout << "X   X| XXX |X   X\n";
			cout << " X X |X   X| X X \n";
			cout << "  X  |X   X|  X  \n";
			cout << " X X |X   X| X X \n";
			cout << "X   X| XXX |X   X\n";
		}
		//////////////////////////////////////////////
		cout << "-----------------\n";
		//////////////////////////////////////////////
		if (cell[6] == cell[7] == cell[8] == 0) {
			cout << "     |     |     \n";
			cout << "     |     |     \n";
			cout << "     |     |     \n";
			cout << "     |     |     \n";
			cout << "     |     |     \n";
		}
		else if (cell[6] == cell[7] == cell[8] == 1) {
			cout << "X   X|X   X|X   X\n";
			cout << " X X | X X | X X \n";
			cout << "  X  |  X  |  X  \n";
			cout << " X X | X X | X X \n";
			cout << "X   X|X   X|X   X\n";
		}
		else if (cell[6] == 1 && cell[7] == cell[8] == 0) {
			cout << "X   X|     |     \n";
			cout << " X X |     |     \n";
			cout << "  X  |     |     \n";
			cout << " X X |     |     \n";
			cout << "X   X|     |     \n";
		}
		else if (cell[7] == 1 && cell[6] == cell[8] == 0) {
			cout << "     |X   X|     \n";
			cout << "     | X X |     \n";
			cout << "     |  X  |     \n";
			cout << "     | X X |     \n";
			cout << "     |X   X|     \n";
		}
		else if (cell[8] == 1 && cell[6] == cell[7] == 0) {
			cout << "     |     |X   X\n";
			cout << "     |     | X X \n";
			cout << "     |     |  X  \n";
			cout << "     |     | X X \n";
			cout << "     |     |X   X\n";
		}
		else if (cell[8] == 0 && cell[7] == cell[6] == 1) {
			cout << "X   X|X   X|     \n";
			cout << " X X | X X |     \n";
			cout << "  X  |  X  |     \n";
			cout << " X X | X X |     \n";
			cout << "X   X|X   X|     \n";
		}
		else if (cell[6] == 0 && cell[7] == cell[8] == 1) {
			cout << "     |X   X|X   X\n";
			cout << "     | X X | X X \n";
			cout << "     |  X  |  X  \n";
			cout << "     | X X | X X \n";
			cout << "     |X   X|X   X\n";
		}
		else if (cell[7] == 0 && cell[6] == cell[8] == 1) {
			cout << "X   X|     |X   X\n";
			cout << " X X |     | X X \n";
			cout << "  X  |     |  X  \n";
			cout << " X X |     | X X \n";
			cout << "X   X|     |X   X\n";
		}

		else if (cell[6] == cell[7] == cell[8] == 2) {
			cout << " XXX | XXX | XXX \n";
			cout << "X   X|X   X|X   X\n";
			cout << "X   X|X   X|X   X\n";
			cout << "X   X|X   X|X   X\n";
			cout << " XXX | XXX | XXX \n";
		}
		else if (cell[6] == 2 && cell[7] == cell[8] == 0) {
			cout << " XXX |     |     \n";
			cout << "X   X|     |     \n";
			cout << "X   X|     |     \n";
			cout << "X   X|     |     \n";
			cout << " XXX |     |     \n";
		}
		else if (cell[7] == 2 && cell[6] == cell[8] == 0) {
			cout << "     | XXX |     \n";
			cout << "     |X   X|     \n";
			cout << "     |X   X|     \n";
			cout << "     |X   X|     \n";
			cout << "     | XXX |     \n";
		}
		else if (cell[8] == 2 && cell[6] == cell[7] == 0) {
			cout << "     |     | XXX \n";
			cout << "     |     |X   X\n";
			cout << "     |     |X   X\n";
			cout << "     |     |X   X\n";
			cout << "     |     | XXX \n";
		}
		else if (cell[8] == 0 && cell[7] == cell[6] == 2) {
			cout << " XXX | XXX |     \n";
			cout << "X   X|X   X|     \n";
			cout << "X   X|X   X|     \n";
			cout << "X   X|X   X|     \n";
			cout << " XXX | XXX |     \n";
		}
		else if (cell[6] == 0 && cell[7] == cell[8] == 2) {
			cout << "     | XXX | XXX \n";
			cout << "     |X   X|X   X\n";
			cout << "     |X   X|X   X\n";
			cout << "     |X   X|X   X\n";
			cout << "     | XXX | XXX \n";
		}
		else if (cell[7] == 0 && cell[6] == cell[8] == 2) {
			cout << " XXX |     | XXX \n";
			cout << "X   X|     |X   X\n";
			cout << "X   X|     |X   X\n";
			cout << "X   X|     |X   X\n";
			cout << " XXX |     | XXX \n";
		}

		else if (cell[6] == 1 && cell[7] == 0 && cell[8] == 2) {
			cout << "X   X|     | XXX \n";
			cout << " X X |     |X   X\n";
			cout << "  X  |     |X   X\n";
			cout << " X X |     |X   X\n";
			cout << "X   X|     | XXX \n";
		}
		else if (cell[6] == 1 && cell[7] == 2 && cell[8] == 2) {
			cout << "X   X| XXX |     \n";
			cout << " X X |X   X|     \n";
			cout << "  X  |X   X|     \n";
			cout << " X X |X   X|     \n";
			cout << "X   X| XXX |     \n";
		}
		else if (cell[6] == 1 && cell[7] == cell[8] == 2) {
			cout << "X   X| XXX | XXX \n";
			cout << " X X |X   X|X   X\n";
			cout << "  X  |X   X|X   X\n";
			cout << " X X |X   X|X   X\n";
			cout << "X   X| XXX | XXX \n";
		}
		else if (cell[7] == 1 && cell[6] == cell[8] == 2) {
			cout << " XXX |X   X| XXX \n";
			cout << "X   X| X X |X   X\n";
			cout << "X   X|  X  |X   X\n";
			cout << "X   X| X X |X   X\n";
			cout << " XXX |X   X| XXX \n";
		}
		else if (cell[7] == 1 && cell[6] == 0 && cell[8] == 2) {
			cout << "     |X   X| XXX \n";
			cout << "     | X X |X   X\n";
			cout << "     |  X  |X   X\n";
			cout << "     | X X |X   X\n";
			cout << "     |X   X| XXX \n";
		}
		else if (cell[7] == 1 && cell[8] == 0 && cell[6] == 2) {
			cout << " XXX |X   X|     \n";
			cout << "X   X| X X |     \n";
			cout << "X   X|  X  |     \n";
			cout << "X   X| X X |     \n";
			cout << " XXX |X   X|     \n";
		}
		else if (cell[8] == 1 && cell[6] == cell[7] == 2) {
			cout << " XXX | XXX |X   X\n";
			cout << "X   X|X   X| X X \n";
			cout << "X   X|X   X|  X  \n";
			cout << "X   X|X   X| X X \n";
			cout << " XXX | XXX |X   X\n";
		}
		else if (cell[8] == 1 && cell[6] == 0 && cell[7] == 2) {
			cout << "     | XXX |X   X\n";
			cout << "     |X   X| X X \n";
			cout << "     |X   X|  X  \n";
			cout << "     |X   X| X X \n";
			cout << "     | XXX |X   X\n";
		}
		else if (cell[8] == 1 && cell[6] == 2 && cell[7] == 0) {
			cout << " XXX |     |X   X\n";
			cout << "X   X|     | X X \n";
			cout << "X   X|     |  X  \n";
			cout << "X   X|     | X X \n";
			cout << " XXX |     |X   X\n";
		}
		else if (cell[8] == 2 && cell[6] == cell[7] == 1) {
			cout << "X   X|X   X| XXX \n";
			cout << " X X | X X |X   X\n";
			cout << "  X  |  X  |X   X\n";
			cout << " X X | X X |X   X\n";
			cout << "X   X|X   X| XXX \n";
		}
		else if (cell[6] == 2 && cell[8] == cell[7] == 1) {
			cout << " XXX |X   X|X   X\n";
			cout << "X   X| X X | X X \n";
			cout << "X   X|  X  |  X  \n";
			cout << "X   X| X X | X X \n";
			cout << " XXX |X   X|X   X\n";
		}
		else if (cell[7] == 2 && cell[6] == cell[8] == 1) {
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
	do {
		cout << "1 - Play against PC(random fill)\n2 - Player versus Player\n";
		ch = _getch();
		if (ch == 27)
			return 0;
	} while (ch != '1' && ch != '2');
}