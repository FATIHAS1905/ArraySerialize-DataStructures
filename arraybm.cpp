#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	char B[5][4];
	char M[5][7];
	B[0][0] = B[0][1] = B[0][2] = B[1][0] = B[1][3] = B[2][0] = B[2][1] = '*';
	B[2][2] = B[3][0] = B[3][3] = B[4][0] = B[4][1] = B[4][2] = '*';
	B[0][3] = B[1][1] = B[1][2] = B[2][3] = B[3][1] = B[3][2] = B[4][3] = ' ';
	M[0][0] = M[0][1] = M[0][5] = M[0][6] = M[1][0] = M[1][2] = M[1][3] = '*';
	M[1][4] = M[1][6] = M[2][0] = M[2][2] = M[2][3] = M[2][4] = M[2][6] = '*';
	M[3][0] = M[3][3] = M[3][6] = M[4][0] = M[4][6] = '*';
	M[0][2] = M[0][3] = M[0][4] = M[1][1] = M[1][5] = M[2][1] = M[2][5] = '*';
	M[3][1] = M[3][2] = M[3][4] = M[3][5] = M[4][1] = M[4][2] = M[4][3] = M[4][4] = M[4][5] = ' ';
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << B[i][j];
		}
		cout << "	";
		for (int x = 0; x < 7; x++) {
			cout << M[i][x];
		}
		cout << endl;
	}
	return 0;
}
