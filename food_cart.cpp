#include "food_cart.h"

//constructor 
Foodcart::Foodcart(): name(nullptr){};

//destructor
Foodcart::~Foodcart()
{
	if(name) delete name;
	name = nullptr;
}

FoodcartList::~FoodcartList(){}
FoodcartList::FoodcartList(): head(nullptr) {};


//Read in user input and store in the foodcart object
bool Foodcart::readUserInput() 
{
	char userInput[100];//buffer to store user input
	cout << "Enter the food cart name: ";
	cin.get(userInput, 100, '\n').ignore(100, '\n');
	name = new char[strlen(userInput)+1]; //create a dynamically allocated array with the exact indexes required
	strcpy(name, userInput);//copy user input from buffer into the name array

	cout << "Enter your favorite menu item: ";
	cin.get(fav_item, SIZE).ignore(100, '\n');

	cout << "Enter the cost: ";
	(cin >> cost).ignore(100, '\n');

	cout << "Enter item description: ";
	cin.get(description, SIZE).ignore(100, '\n');

	cout << "Enter the food cart address: ";
	cin.get(address, SIZE).ignore(100, '\n');

	return true;
}

//function to insert a food cart into the list
bool FoodcartList::insert()
{
	if(!head)
	{
		head = new Node;
		head->cart.readUserInput();
		return true;
	}

	Node* temp = new Node;
	temp-> cart.readUserInput();
	temp-> next = head;
	head = temp;
	return true;
}

//function to display all food carts
int FoodcartList::display()
{
	Node* current = head;

	if(head == nullptr)
	{
		cout << "No food carts to display" << endl;
		return 0;
	}

	cout << "[My List of Food Carts]" << endl << endl;
	while(current != nullptr)
	{	
		cout << "Name: " << current -> cart.name << endl;
		cout << "Favorite menu item: " << current -> cart.fav_item << endl;
		cout << "Cost: " << current -> cart.cost << endl;
		cout << "Item Description: " << current -> cart.description << endl;
		cout << "Address: " << current -> cart.address << endl;
		cout << endl;
		current = current -> next;
	}

	return 1;
}





