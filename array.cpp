#include "array.hpp"
#include <iostream>

template <class T>
Array<T>::Array(void)
{
	size = 0;
	storage = NULL;
}

template <class T>
Array<T>::~Array(void)
{
	free(storage);
}

template <class T>
void Array<T>::Traverse(void)
{
	if (size == 0) {
		std::cout << "Array size is zero" << std::endl;
		return;
	}
	
	for (size_t i = 0; i < size; i++)
		std::cout << "[" << i << "]" << storage[i] << std::endl;
	std::cout << std::endl;
}

template <class T>
void Array<T>::InsertAtIndex(T element, size_t idx)
{
	if (idx > (int) size - 1) {
		std::cout << "Idx is out of bounds" << std::endl;
		return;
	}
	
	T* newStorage = (T*) realloc(storage, (size + 1) * sizeof(T));
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

template <class T>
void Array<T>::DeleteAtIndex(size_t idx)
{
	if (idx > size - 1) {
		std::cout << "Index idx = " << idx << " out of bound" << std::endl;
		return;
	}
	
	for (int i = idx; i < size - 1; i++)
		storage[i] = storage[i+1];
		
	size--;
	
	T* newStorage = (T*) realloc(storage, size * sizeof(T));
	if (newStorage == NULL) {
		std::cout << "Could insert object" << std::endl;
		return;
	}
	storage = newStorage;
}

template <class T>
size_t Array<T>::Search(T element)
{
	for (size_t i = 0; i < size; i++) {
		if (storage[i] == element) {
			std::cout << "Found element [" << element << "]" 
			<< "at index " << i << std::endl;
		}
	}
}

template <class T>
void Array<T>::UpdateAtIndex(T element, size_t idx)
{
	if (idx > size - 1) {
		std::cout << "Index idx = " << idx << " out of bound" << std::endl;
		return;
	}
	
	storage[idx] = element;
}

template <class T>
void Array<T>::PushBack(T element)
{
	InsertAtIndex(element, size - 1);
}

// Declarations below to avoid linking errors
template class Array<int>;
template class Array<float>;
