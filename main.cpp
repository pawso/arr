#include "array.hpp"
#include <iostream>

template <typename T>
void testArray(float data[], int operation[], size_t size)
{
	Array<T> arr;
	size_t currPos = 0;
	
	do {
		float num1 = data[2 * currPos];
		int num2 = data[2 * currPos + 1];
		
		try {
			switch (operation[currPos]) {
				case 0:
					std::cout << "Adding " << num1 << " at index " << num2 << std::endl;
					arr.InsertAtIndex(num1, num2);
					break;
				case 1:
					std::cout << "Pushing back " << num1 << std::endl;
					arr.PushBack(num1);
					break;
				case 2:
					std::cout << "Replacing number at index " << num2 << " with number " << num1 << std::endl;	
					arr.UpdateAtIndex(num1, num2);
					break;
				case 3:
					std::cout << "Deleting number at index " << num2 << std::endl;
					arr.DeleteAtIndex(num2);
					break;
				default:
					break;
			}
		} catch (const char* msg) {
			std::cout << "Got execption: " << msg << std::endl;
		}
		
		try {
			arr.Traverse();
		} catch (const char* msg) {
			std::cout << "Got execption: " << msg << std::endl;
		}
		
		currPos++;
		if (currPos >= size - 1)
			break;
		
	} while (1);
}

int main()
{
	const size_t SIZE = 10;
	
	float *data = new float[SIZE * 2];
	int *operations = new int[SIZE];
	
	for (int i = 0; i < SIZE; i++) {
		data[i * 2] = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / SIZE));
		data[i * 2 + 1] = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / SIZE));
		operations[i] = rand() % 4;
	}
	
	std::cout << " ----------------------- Testing on INTEGERS ----------------------- " << std::endl;
	testArray<int>(data, operations, SIZE);
	
	std::cout << " ----------------------- Testing on FLOATS ----------------------- " << std::endl;
	testArray<float>(data, operations, SIZE);
	
	delete[] data;
	delete[] operations;
}
