#include <stdlib.h>

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

template <class T>
class Array {
	
public:
	Array(void);
	~Array(void);
	
	// print all the values
	void Traverse(void);
	
	// insert element at index
	void InsertAtIndex(T element, size_t idx);
	
	// delete element at index
	void DeleteAtIndex(size_t idx);
	
	// look for first occurencce of element given
	size_t Search(T element);
	
	// update element at index
	void UpdateAtIndex(T element, size_t idx);
	
	// Adds element at the end of array
	void PushBack(T element);

private: 
	size_t size;
	T *storage;
};

#endif
