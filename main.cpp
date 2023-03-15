#include "food_cart.h"


//function prototype 
void printMenu(int &menuChoice);

int main()
{
	int menuChoice = 0;
	Foodcart foodcart;
	bool stop = false;
	FoodcartList foodcarts;


	for(bool stop = false; stop != true;)
	{
		printMenu(menuChoice);
		switch(menuChoice)
		{

			case 1: 
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
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
	cout << "1. Add New Activity" << endl;
	cout << "2. Display the list of all food carts" << endl;
	cout << "3. Quit" << endl;

	cout << "PLease choose from the following menu options: ";
	(cin >> menuChoice).get();
	cout << endl;

}
