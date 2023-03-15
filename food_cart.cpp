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
