#include<iostream>

using namespace std;

int main()
{
	// Variables to store user details and account information
	string name;
	double balance = 1000, option, balances, pin = 1234;
	// Variables used to track account status and validate transactions
	bool check = false, checker = false, acc = false;
	// Display the system's title
	cout << "********************Bank Account management System*************************** \n\n";
	// Repeat the menu until the user chooses to exit
	do {
		// Show available options
		cout << "Select from the following options:- \n\n";
		cout << "Press 1 to create an Account (Initial Amount = $1000) \n";
		cout << "Press 2 to Deposit Money in the Account \n";
		cout << "Press 3 to Withdraw Money from the Account \n";
		cout << "Press 4 to Check Balance \n";
		cout << "Press 5 to Exit \n\n";
		// Ask the user for their choice
		cout << "Enter option:- \n";
		cin >> option;
		if (option == 1)
		{
			// Option to create an account
			if (acc != true)
			{
				//Getting users name for Account
				cout << "Make your Banking Account \n";
				cout << "Enter your name:- \n";
				cin.ignore();  // Ignore the leftover newline character from previous input
				getline(cin, name); 
				// Account created successfully
				cout << '\n' << "Your account has been created \n\n";
				acc = true;
				checker = true;
			}
			else
			{
				// If account already exists
				cout << '\n' << "You already have a account \n\n";
				checker = true;
			}
		}
		else if (option == 2)
		{
			// Option to deposit money
			if (acc == true)
			{
				// Keep asking for the correct PIN until it matches
				do {
					// Ask for the user's pin
					cout << "Enter your pin:- \n";
					cin >> pin;
					if (pin == 1234)
					{
						// Pin correct
						check = false;
					}
					else
					{
						// Pin incorrect, re-prompt
						cout << "The pin is incorrect \n";
						cout << "Enter your pin:- \n";
						cin >> pin;
						if (pin == 1234)
						{
							check = false;
						}
						else
						{
							check = true;
						}
					}
				} while (check);
				// Ask for deposit amount
				cout << "Enter the amount of money to deposit:- \n";
				cin >> balances;
				// Ensure deposit amount is positive
				while (balances < 0)
				{
					cout << "Enter a Positive Amount:- \n";
					cin >> balances;
				}
				// Update balance
				balance += balances;
				cout << '\n' << "$" << balances << " has been deposited in the account \n\n";
				checker = true;
			}
			else
			{
				// If no account exists
				cout << '\n' << "First create an account \n\n";
				checker = true;
			}
		}
		else if (option == 3)
		{
			// Option to withdraw money
			if (acc == true)
			{
				// Keep asking for the correct PIN until it matches
				do {
					 // Ask for the user's pin
					cout << "Enter your pin:- \n";
					cin >> pin;
					if (pin == 1234)
					{
						// Pin correct
						check = false;
					}
					else
					{
						// Pin incorrect, re-prompt
						cout << "The pin is incorrect \n";
						cout << "Enter your pin:- \n";
						cin >> pin;
						if (pin == 1234)
						{
							check = false;
						}
						else
						{
							check = true;
						}
					}
				} while (check);
				// Ask for withdrawal amount
				cout << "Enter the amount of money to withdraw:- \n";
				cin >> balances;
				// Ensure amount does not exceed balance
				while (balances > balance)
				{
					cout << "The amount entered to be withdrawn is greater than the amount in the account \n\n";
					cout << "Enter a the correct Amount:- \n";
					cin >> balances;
				}
				// Ensure withdrawal amount is positive
				while (balances < 0)
				{
					cout << "Enter a Positive Amount:- \n";
					cin >> balances;
				}
				// Update balance
				balance = balance - balances;
				cout << '\n' << "$" << balances << " has been withdrawn from the account \n\n";
				checker = true;
			}
			else
			{
				// If no account exists
				cout << '\n' << "First create an account \n\n";
				checker = true;
			}
		}
		else if (option == 4)
		{
			// Option to check balance
			if (acc == true)
			{
				// Keep asking for the correct PIN until it matches
			do {
				// Ask for the user's pin
				cout << "Enter your pin:- \n";
				cin >> pin;
				if (pin == 1234)
				{
					// Pin correct
					check = false;
				}
				else
				{
					// Pin incorrect, re-prompt
					cout << "The pin is incorrect \n";
					cout << "Enter your pin:- \n";
					cin >> pin;
					if (pin == 1234)
					{
						check = false;
					}
					else
					{
						check = true;
					}
				}
			} while (check);
			// Display balance
				cout << '\n' << "$" << balance << " is the total amount in the account \n\n";
				checker = true;
			}
			else
			{
				// If no account exists
				cout << '\n' << "First create an account \n\n";
				checker = true;
			}
		}
		else if (option == 5)
		{
			// Option to exit the program
			checker = false;
			cout << "Thanks for using our banking services";
			return 0;
		}
		else
		{
			// Handle invalid options
			cout << "Incorrect option\n";
			checker = true;
		}
	} while (checker == true);
	return 0;
}