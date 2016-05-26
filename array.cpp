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

void Array::InsertAtIndex(int element, size_t idx)
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

void Array::DeleteAtIndex(size_t idx)
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

size_t Array::Search(int element)
{
	for (size_t i = 0; i < size; i++) {
		if (storage[i] == element) {
			std::cout << "Found element [" << element << "]" 
			<< "at index " << i << std::endl;
		}
	}
}

void Array::UpdateAtIndex(int element, size_t idx)
{
	if (idx > size - 1) {
		std::cout << "Index idx = " << idx << " out of bound" << std::endl;
		return;
	}
	
	storage[idx] = element;
}

void Array::PushBack(int element)
{
	InsertAtIndex(element, size - 1);
}
