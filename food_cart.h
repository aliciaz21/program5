#include <iostream>
using std::cout;
using std::cin;
using std::endl;

struct Foodcart
{
	Foodcart();
	~Foodcart();

	bool insert();
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
	Foodcart foodcart; 
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
