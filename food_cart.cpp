#include "food_cart.h"

//constructor 
Foodcart::Foodcart(): name(nullptr) {};

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
	char userInput[100];
	cout << "Enter the name of the food cart: ";
	cin.get(userInput, 100, '\n').ignore(100, '\n');
	this -> name = new char[strlen(userInput)+1];
	strcpy(this -> name, userInput);

	return true;
}

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


int FoodcartList::display()
{
	Node* current = head;

	if(head == nullptr)
	{
		cout << "No food carts to display" << endl;
		return 0;
	}

	cout << "Food Carts: " << endl;
	while(current != nullptr)
	{
		cout << "Name: " << current -> cart.name << endl;
		current = current -> next;
	}

	return 1;
}





