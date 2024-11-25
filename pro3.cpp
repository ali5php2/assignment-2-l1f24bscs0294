#include<iostream>

using namespace std;

int main()
{
	// Variables for controlling loops and printing
	int i = 1,x = 1,y=1,m=1,a=1,b=1,l=1,k=1;
	// First pattern: Printing numbers in increasing order
	while (i < 6)  // Outer loop controlling the number of rows
	{
		x = 1;  // Reset x for each row
		while (x < i+1)  // Inner loop printing numbers from 1 to i
		{
			cout << x;  // Print the current number
			x++;  // Increment x
		}
		cout << '\n';  // Newline after each row
		i++;  // Increment i for the next row
}
	cout << "\n\n";  // Space between patterns

	//doing the same pattern with do while loop
	do
	{
		y = 1;  // Reset y for each row
		do
		{
			cout << y;  // Print the current number
			y++;  // Increment y
		} 
		while (y < m + 1);  // Inner loop condition based on m
		cout << "\n";  // Newline after each row
		m++;  // Increment m for the next row
	} 
	while (m < 6);  // Outer loop runs until m is 6

	cout << "\n\n";  // Space between patterns

	// Third pattern: Printing a right-aligned triangle of asterisks
	while (a < 6)  // Outer loop controlling the number of rows
	{
		b = 1;  // Reset b for each row
		while (b < 6 - a)  // Print spaces to align the stars to the right
		{
			cout << " ";  // Print space
			b++;  // Increment b
		}
		while (b < 6)  // After spaces, print stars
		{
			cout << "*";  // Print star
			b++;  // Increment b
		}
		cout << "\n";  // Newline after each row
		a++;  // Increment a for the next row
}

cout << "\n\n";  // Space between patterns

	// Fourth pattern: Using a do-while loop to print a right-aligned triangle of asterisks
	do
	{
		l = 0;  // Reset l for each row

		do
		{
			cout << " ";  // Print space
			l++;  // Increment l
		} 
		while (l <= 5 - k);  // Inner loop to print the leading spaces
		do
		{
			cout << "*";  // Print star
			l++;  // Increment l
		} 
		while (l <= 5);  // Inner loop to print the stars after the spaces
		cout << "\n";  // Newline after each row
		k++;  // Increment k for the next row
	} 
	while (k <= 5);  // Outer loop runs until k is 6
	return 0;  // Program ends here
}