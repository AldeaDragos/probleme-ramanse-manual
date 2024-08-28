#pragma once
#include <iostream>
#include <string.h>
using namespace std;


void afisareMatrice(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}


// Teza 2  // pg 162 // Sub 2 Ex 3

void tablouBidimensional1(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][j] = 1;
			a[i][n - i - 1] = 3;

		}
	}

}

// Teza 3  // pg 165 // Sub 2 Ex 3

void tablouBidimensional2(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][j] = 1;
			a[i][i] = 2;

		}
	}

}


// Teza 5  // pg 165 // Sub 2 Ex 3

void tablouBidimensional3(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
				a[i][j] = 1;
			}
			else if (i == 1 || i == n - 2 || j == 1 || j == n - 2) {
				a[i][j] = 2;
			}
			else {
				a[i][j] = 3;
			}
		}
	}
}

// Teza 6  // pg 175 // Sub 2 Ex 3

void tablouBidimensional4(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][j] = (i + j) + 2;

		}
	}

}

// Teza 8  // pg 180 // Sub 2 Ex 3


void tablouBidimensional5(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][j] = i + j + 6;


		}
	}

}

// Teza 9  // pg 185 // Sub 2 Ex 3

void tablouBidimensional6(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i % 2 == 0) {
				a[i][j] = j;
			}
			else {
				a[i][j] = 2 * i + j;
			}


		}
	}

}