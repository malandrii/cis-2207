// Andrii Malakhovtsev
// CIS 2207 501
// 03.09.2025
// Palindrome-recognition algorithm

#ifndef STACK_INTERFACE_H
#define STACK_INTERFACE_H

template <typename ItemType>
class StackInterface {
public:
	virtual bool isEmpty() const = 0;
	virtual bool push(const ItemType& newEntry) = 0;
	virtual bool pop() = 0;
	virtual ItemType peek() const = 0;
	virtual ~StackInterface() {}
};

#endif
