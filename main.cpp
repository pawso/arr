#include "array.hpp"
#include <iostream>

int main()
{
	Array arr;
	
	// arr.Traverse();
	
	std::cout << "Adding 0 at index 0" << std::endl;
	arr.Insert(0, 0);
	arr.Traverse();
	
	std::cout << "Adding 1 at index 0" << std::endl;
	arr.Insert(1, 0);
	arr.Traverse();
	
	std::cout << "Adding 2 at index 0" << std::endl;
	arr.Insert(2, 0);
	arr.Traverse();
	
	
	std::cout << "Pushing back 3" << std::endl;
	arr.PushBack(3);
	arr.Traverse();
	
	std::cout << "Pushing back 4" << std::endl;
	arr.PushBack(4);
	arr.Traverse();
	
	std::cout << "Replacing number at index 4 with number 6" << std::endl;
	arr.Update(6, 4);
	arr.Traverse();
	
	std::cout << "Replacing number at index 0 with number 6" << std::endl;
	arr.Update(6, 0);
	arr.Traverse();
	
	std::cout << "Replacing number at index 10 with number 6" << std::endl;
	arr.Update(6, 10);
	arr.Traverse();
	
	std::cout << "Replacing number at index 5 with number 23" << std::endl;
	arr.Update(23, 5);
	arr.Traverse();
	
	std::cout << "Replacing number at index 4 with number 23" << std::endl;
	arr.Update(23, 4);
	arr.Traverse();
	
	std::cout << "Deleting number at index 0" << std::endl;
	arr.Delete(0);
	arr.Traverse();
}
