#include "food_cart.h"


//function prototype 
void printMenu(int &menuChoice);

int main()
{
	int menuChoice = 0;
	bool stop = false;
	FoodcartList list;


	for(bool stop = false; stop != true;)
	{
		printMenu(menuChoice);
		switch(menuChoice)
		{

			case 1: 
				list.insert(); 
				break;
			case 2:
				list.display();
				break;
			case 3:
				cout << "Goodbye!" << endl;
				stop = true; 
				break;
		}


	}
	return 0;
}


//function to print the menu interface
void printMenu(int &menuChoice)
{

	cout << "\n[My Activities List: Menu Options]" << endl;
	cout << "1. Add New Food Cart" << endl;
	cout << "2. Display the list of all food carts" << endl;
	cout << "3. Quit" << endl;

	cout << "PLease choose from the following menu options: ";
	(cin >> menuChoice).ignore(100, '\n');
	cout << endl;

}
