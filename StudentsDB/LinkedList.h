#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

template<typename T>
class LinkedList:private Node<T>
{
private:
	Node<T>* head;
	int countItem;
public:
	LinkedList();
	~LinkedList();

	void clear();
	void popFront();
	void popBack();

	int size();

	void pushFront(T _data);
	void pushBack(T _data);
	void insertByIndex(T _data, int index);
	void deleteByIndex(int index);

};