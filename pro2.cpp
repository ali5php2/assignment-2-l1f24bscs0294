#include<iostream>

using namespace std;

int main()
{
	// Initializing the variables for available and borrowed book counts
	int c1=3,c2=2,c3=1,c4=0,c5=5, option,boption,uc1=0,uc2=0,uc3=0,uc5=0;
	bool menu = false;  // Control variable for the menu loop
	// Start of the main program loop
	do {
		cout << "Welcome to the library system \n";  // Display the welcome message
		cout << "Please eneter an option:- \n";  // Prompt for user input
		cout << "1. Borrow a book \n";  // Option to borrow a book
		cout << "2. Return a book \n";  // Option to return a book
		cout << "3. Exit \n";  // Option to exit the system
		cout << "Enter your choice:- \n";  // Prompt for user's choice
		cin >> option;  // Read the user's choice

		// If the user chooses to borrow a book
		if (option == 1)
		{
			cout << "Select from the followin books:- \n\n";  // Display list of books
			cout << "1. The Catcher in the Rye \n";
			cout << "2. 1984 \n";
			cout << "3. To Kill a Mockingbird \n";
			cout << "4. The Great Gatsby \n";
			cout << "5. Moby Dick \n";
			cout << "Enter your option:- \n";  // Ask for the book selection
			cin >> boption;  // Get the user's book choice
			cout << '\n';  // Blank line for readability

			// Handle borrowing for each book
			if (boption == 1)
			{
				// Check if the book has already been borrowed by the user
				if (uc1 < 1)
				{
					c1--;  // Decrease available count
					uc1 = 1;  // Mark the book as borrowed
					cout << "You have Borrowed The book The catcher in the Rye \n\n";
				}
				else
				{
					// If already borrowed
					cout << "you have already borrowed the book\n\n";
				}
				menu = true;  // Continue the menu loop
			}
			else if (boption == 2)
			{
				if (uc2 < 1)
				{
					c2--;  // Decrease available count
					uc2 = 1;  // Mark the book as borrowed
					cout << "You have The book Borrowed 1984 \n\n";
				}
				else
				{
					cout << "you have already borrowed the book\n\n";
				}
				menu = true;
			}
			else if (boption == 3)
			{
				if (uc3 < 1)
				{
					c3--;  // Decrease available count
					uc3 = 1;  // Mark the book as borrowed
					cout << "You have Borrowed The book To kill a Mockingbird \n\n";
				}
				else
				{
					cout << "you have already borrowed the book\n\n";
				}
				menu = true;
			}
			else if (boption == 4)
			{
				// Book not available
				cout << "This book is not available \n\n";
				menu = true;
			}
			else if (boption == 5)
			{
				if (uc5 < 1)
				{
					c5--;  // Decrease available count
					uc5 = 1;  // Mark the book as borrowed
					cout << "You have Borrowed The book Moby Dick \n\n";
				}
				else
				{
					cout << "you have already borrowed the book\n\n";
				}
				menu = true;
			}
		}
		// If the user chooses to return a book
		else if (option == 2)
		{
			cout << "Select from the followin books:- \n\n";  // Display list of books again
			cout << "1. The Catcher in the Rye \n";
			cout << "2. 1984 \n";
			cout << "3. To Kill a Mockingbird \n";
			cout << "4. The Great Gatsby \n";
			cout << "5. Moby Dick \n";
			cout << "Enter your option:- \n";  // Ask for the book to return
			cin >> boption;  // Get the user's selection
			cout << '\n';  // Blank line for readability

			// Handle returning for each book
			if (boption == 1)
			{
				// Check if the book was borrowed by the user
				if (c1 < 3)
				{
					c1++;  // Increase available count
					uc1 = 0;  // Mark the book as returned
					cout << "You have returned The book The catcher in the Rye \n\n";
				}
				else
				{
					// If no books are currently borrowed
					cout << "You cannot return the book, as the max amount of books are already present\n\n";
				}
				menu = true;
			}
			else if (boption == 2)
			{
				if (c2 < 2)
				{
					c2 ++;  // Increase available count
					uc2 = 0;  // Mark the book as returned
					cout << "You have returned The book Borrowed 1984 \n\n";
				}
				else
				{
					// If no books are currently borrowed
					cout << "You cannot return the book, as the max amount of books are already present\n\n";
				}
				menu = true;
			}
			else if (boption == 3)
			{
				if (c3 < 1)
				{
					c3++;  // Increase available count
					uc3 = 0;  // Mark the book as returned
					cout << "You have returned The book To kill a Mockingbird \n\n";
				}
				else
				{
					// If no books are currently borrowed
					cout << "You cannot return the book, as the max amount of books are already present\n\n";
				}
				menu = true;
			}
			else if (boption == 4)
			{
				//as the library has 0 copies of this book
				cout << "You cannot return this book \n\n";
				menu = true;
			}
			else if (boption == 5)
			{
				if (c5 < 5)
				{
					c5 ++;  // Increase available count
					uc5 = 0;  // Mark the book as returned
					cout << "You have returned The book Moby Dick \n\n";
				}
				else
				{
					// If no books are currently borrowed
					cout << "You cannot return the book, as the max amount of books are already present\n\n";
				}
				menu = true;
			}
		}
		// If the user chooses to exit
		else if(option == 3)
		{
			cout << "You have exited \n";  // Exit message
			return 0;  // Exit the program
			}

	} while (menu == true);  // Continue looping until menu condition is true
	return 0;  // Program ends here
}