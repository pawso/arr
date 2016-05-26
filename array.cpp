#include "array.hpp"
#include <iostream>

Array::Array(void)
{
	size = 0;
	storage = NULL;
}

Array::~Array(void)
{
	free(storage);
}

// print all the values
void Array::Traverse(void)
{
	if (size == 0) {
		std::cout << "Array size is zero" << std::endl;
		return;
	}
	
	for (size_t i = 0; i < size; i++)
		std::cout << "[" << i << "]" << storage[i] << std::endl;
	std::cout << std::endl;
}

// insert element at index idx
void Array::Insert(int element, size_t idx)
{
	if (idx > (int) size - 1) {
		std::cout << "Idx is out of bounds" << std::endl;
		return;
	}
	
	int* newStorage = (int*) realloc(storage, (size + 1) * sizeof(int));
	if (newStorage == NULL) {
		std::cout << "Could insert object" << std::endl;
		return;
	}
	storage = newStorage;
	
	for (int i = size - 1; i >= (int) idx; i--)
		storage[i + 1] = storage[i];
	
	storage[idx] = element;
	size++;
}

// delete element at index
void Array::Delete(size_t idx)
{
	if (idx > size - 1) {
		std::cout << "Index idx = " << idx << " out of bound" << std::endl;
		return;
	}
	
	for (int i = idx; i < size - 1; i++)
		storage[i] = storage[i+1];
		
	size--;
	
	int* newStorage = (int*) realloc(storage, size * sizeof(int));
	if (newStorage == NULL) {
		std::cout << "Could insert object" << std::endl;
		return;
	}
	storage = newStorage;
}

// look for element given
size_t Array::Search(int element)
{
	for (size_t i = 0; i < size; i++) {
		if (storage[i] == element) {
			std::cout << "Found element [" << element << "]" 
			<< "at index " << i << std::endl;
		}
	}
}

// update element at index
void Array::Update(int element, size_t idx)
{
	if (idx > size - 1) {
		std::cout << "Index idx = " << idx << " out of bound" << std::endl;
		return;
	}
	
	storage[idx] = element;
}

// Adds element at the end of array
void Array::PushBack(int element)
{
	Insert(element, size - 1);
}
