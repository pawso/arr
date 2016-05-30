#include "array.hpp"
#include <iostream>

void testInt()
{
	std::cout << "=================================== Ints: " << std::endl; 
	
	Array<int> arr;
	
	std::cout << "Adding 0 at index 0" << std::endl;
	arr.InsertAtIndex(0, 0);
	arr.Traverse();
	
	std::cout << "Adding 1 at index 0" << std::endl;
	arr.InsertAtIndex(1, 0);
	arr.Traverse();
	
	std::cout << "Adding 2 at index 0" << std::endl;
	arr.InsertAtIndex(2, 0);
	arr.Traverse();
	
	std::cout << "Pushing back 3" << std::endl;
	arr.PushBack(3);
	arr.Traverse();
	
	std::cout << "Pushing back 4" << std::endl;
	arr.PushBack(4);
	arr.Traverse();
	
	std::cout << "Replacing number at index 4 with number 6" << std::endl;
	arr.UpdateAtIndex(6, 4);
	arr.Traverse();
	
	std::cout << "Replacing number at index 0 with number 6" << std::endl;
	arr.UpdateAtIndex(6, 0);
	arr.Traverse();
	
	std::cout << "Replacing number at index 10 with number 6" << std::endl;
	arr.UpdateAtIndex(6, 10);
	arr.Traverse();
	
	std::cout << "Replacing number at index 5 with number 23" << std::endl;
	arr.UpdateAtIndex(23, 5);
	arr.Traverse();
	
	std::cout << "Replacing number at index 4 with number 23" << std::endl;
	arr.UpdateAtIndex(23, 4);
	arr.Traverse();
	
	std::cout << "Deleting number at index 0" << std::endl;
	arr.DeleteAtIndex(0);
	arr.Traverse();
}

void testFloat()
{
	std::cout << "=================================== Floats: " << std::endl;
	Array<float> arr;
	
	std::cout << "Adding 0 at index 0" << std::endl;
	arr.InsertAtIndex(0, 0);
	arr.Traverse();
	
	std::cout << "Adding 1 at index 0" << std::endl;
	arr.InsertAtIndex(1.1, 0);
	arr.Traverse();
	
	std::cout << "Adding 2 at index 0" << std::endl;
	arr.InsertAtIndex(2.2, 0);
	arr.Traverse();
	
	
	std::cout << "Pushing back 3" << std::endl;
	arr.PushBack(3.4);
	arr.Traverse();
	
	std::cout << "Pushing back 4" << std::endl;
	arr.PushBack(4.5);
	arr.Traverse();
	
	std::cout << "Replacing number at index 4 with number 6" << std::endl;
	arr.UpdateAtIndex(6.6, 4);
	arr.Traverse();
	
	std::cout << "Replacing number at index 0 with number 6" << std::endl;
	arr.UpdateAtIndex(6.7, 0);
	arr.Traverse();
	
	std::cout << "Replacing number at index 10 with number 6" << std::endl;
	arr.UpdateAtIndex(6.8, 10);
	arr.Traverse();
	
	std::cout << "Replacing number at index 5 with number 23" << std::endl;
	arr.UpdateAtIndex(23.9, 5);
	arr.Traverse();
	
	std::cout << "Replacing number at index 4 with number 23" << std::endl;
	arr.UpdateAtIndex(23.11, 4);
	arr.Traverse();
	
	std::cout << "Deleting number at index 0" << std::endl;
	arr.DeleteAtIndex(0);
	arr.Traverse();
}

int main()
{
	testInt();
	testFloat();
}
