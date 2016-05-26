#include <stdlib.h>

class Array {
	
public:
	Array(void);
	~Array(void);
	
	// print all the values
	void Traverse(void);
	
	// insert element at index
	void Insert(int element, size_t idx);
	
	// delete element at index
	void Delete(size_t idx);
	
	// look for first occurencce of element given
	size_t Search(int element);
	
	// update element at index
	void Update(int element, size_t idx);
	
	// Adds element at the end of array
	void PushBack(int element);

private: 
	size_t size;
	int *storage;
};
