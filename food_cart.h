#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

// zhang loves teriyaki chkn
struct Foodcart
{
	Foodcart();
	~Foodcart();

	bool readUserInput();
	int display();

	char* name;
	/*char fav_food;
		double cost;
		char description;
		char address;*/
};

//each node holds a FoodCart and a pointer to the next FoodCart
struct Node
{
	Foodcart cart; 
	Node * next;
};

class FoodcartList
{
	public:
		FoodcartList();
		~FoodcartList();

		bool insert(); 
		int display();

	private:
		Node* head;
};
