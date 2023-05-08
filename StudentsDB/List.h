#pragma once
#include "Node.h"
#include <iostream>

template <typename T>
class List
{
private:
	int size;
	Node<T>* head, * tail;
public:
	List();
	~List();

	void pushBack(T data);
	int getSize() { return size; }
	T& operator[](const int index);
	void popFront();
	void clear();
	void pushFront(T data);
	void insertByIndex(T data, int index);
	void deleteByIndex(int index);
	void popBack();
	void printItems4Menu();
};

template <typename T>
inline List<T>::List()
{
	size = 0;
	head = tail = nullptr;
}

template<typename T>
inline List<T>::~List()
{
	clear();
}

template<typename T>
void List<T>::pushBack(T data)
{
	Node<T>* pNew = new Node<T>(data);
	if (tail != nullptr)
	{
		tail->next = pNew;
		tail = pNew;
	}
	else if (head == nullptr)
	{
		head = tail = pNew;
	}
	size++;
}

template<typename T>
T& List<T>::operator[](const int index)
{
	Node<T>* current = this->head;
	int cnt = 0;
	while (current != nullptr)
	{
		if (cnt == index) return current->data;
		current = current->next;
		cnt++;
	}
}

template<typename T>
void List<T>::popFront()
{
	if (head == nullptr) return;
	if (head == tail)
	{
		delete tail;
		head = tail = nullptr;
		size--;
		return;
	}
	Node<T>* pTemp = this->head;
	head = head->next;
	delete pTemp;
	size--;
}

template<typename T>
void List<T>::clear()
{
	while (size)
	{
		popFront();
	}
}

template<typename T>
void List<T>::pushFront(T data)
{
	head = new Node<T>(data, head);
	size++;
	if (tail == nullptr) tail = head;
}

template<typename T>
void List<T>::insertByIndex(T data, int index)
{
	if (index == 0) pushFront(data);
	else
	{
		Node<T>* pLeft = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			pLeft = pLeft->next;
		}
		pLeft->next = new Node<T>(data, pLeft->next);
		size++;
		if (pLeft->next->next == nullptr) tail = pLeft->next;
	}
}

template<typename T>
void List<T>::deleteByIndex(int index)
{
	if (index < 0) return;
	if (index == 0)
	{
		popFront();
		return;
	}
	else
	{
		Node<T>* pLeft = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			pLeft = pLeft->next;
		}
		Node<T>* ptoDelete = pLeft->next;
		pLeft->next = ptoDelete->next;
		delete ptoDelete;
		size--;
	}
}

template<typename T>
void List<T>::popBack()
{
	deleteByIndex(size - 1);
}

template<typename T>
void List<T>::printItems4Menu()
{
	Node<T>* current = this->head;
	int i = 0;
	while (current != nullptr) {
		std::cout << i << ". " << current->data << std::endl;
		i++;
		current = current->next;
	}
}