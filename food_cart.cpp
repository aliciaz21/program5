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


bool FoodcartList::insert(const Foodcart & foodcart)
{
	if(!head)
	{

	head = new Node;

	//foodcart.name changes from null to assigning it a dynamically allocated array
	head -> foodcart.name = new char[strlen(foodcart.name) + 1]; //SIZE before which is int... strlen gives number of indexes filled, no given space -> space as needed, calc size for you
	strcpy(head -> foodcart.name, foodcart.name);
	head -> next = NULL;
	
	return true;
	
	//head -> foodcart.insert();


// strcpy(destination, source)


//1. gets name from the argument 
//2. making exact space to copy name from the argument
//3. copy info into the member strcpy

	}

	Node* temp = new Node;
	temp -> foodcart.name = new char[strlen(foodcart.name) + 1];
	strcpy(temp -> foodcart.name, foodcart.name);
	temp -> next = head;
	head = temp;

	return true;
}


