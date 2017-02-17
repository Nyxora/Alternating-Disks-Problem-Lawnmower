// Assignment 1: Alternating Disks Problem
// Megan Bond
// Given 2n alternating disks (light, dark) the program reads the number of one colored
// disk (light or dark), arranges the disks in the correct order, and outputs the number
// of swaps used.
// INPUT:  a positive integer n and a list of 2n of alternating colors starting with dark.
// OUTPUT: a list of 2n disks, the first n disks are light, the second n disks are dark,
//		   and an integer representing the number of swaps used to complete the task.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;
// Function to print a list.
void print_disks(int n, int disks[]) {
	for(int x=0; x<2*n; x++) 
		cout << disks[x];
	cout << endl;
}

int main () {
	// Variables.
	int n, m = 0, k, i;
	int *disks;
	
	// Header.
	cout << endl << "CPSC 335-1 - Programming Assignment 1" << endl;
	cout << "Alternating Disks Problem: Left-to-Right Algorithm" << endl;
	
	// Get amount of half the disks.
	cout << "Enter the number of light or dark disks: ";
	cin >> n;
	
	// Create alternating list with length 2*n. 0 = light disk, 1 = dark disk.
	disks = new int[2*n];
	for (i=0; i<n; i++) {
		disks[2*i] = 1;
		disks[2*i+1] = 0;
	}
	
	// Print initial list disks.
	cout << endl << "Initial list of disks: \n";
	print_disks(n,disks);

	// Loop to push lights before darks.
	// for k = 0 to n do (k will be start position for array and n is half the length of disks)
	for (k=0;  k < n ; k++) {
		// for u = k to 2*n-k do
		for(int u=k; u<2*n-k; u++) {
			// swap disks[u] with disks[u+1]
			disks[u]=disks[u+1];
			disks[u+1]=1;
			// increment u (to avoid moving light disks)
			u++;
			// increment m (swap counter)
			m++;
		}
		for(int u=2*n-k)
	}
	
	// Print list after shuffling.
	cout << "\nAfter moving dark ones to the right: \n";
	print_disks(n,disks);
	
	// Print number of swaps.
	cout << "\nNumber of swaps: " << m << endl;
	
	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}
