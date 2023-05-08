#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

template<typename T>
class Lista
{
    friend class Student;

private:
	Node<T>* head;
	int countItem;
public:
	List();
	~List();

	void clear();
	void popFront();
	void popBack();

	int getSize();

	void pushFront(T _data);
	void pushBack(T _data);
	void insertByIndex(T _data, int index);
	void deleteByIndex(int index);
    void printItems4Menu();

    T& operator[](int index);
};

template<typename T>
List<T>::List()
{
    countItem = 0;
    head = nullptr;
}

template<typename T>
List<T>::~List()
{
    Node<T>* current = head;
    Node<T>* temp;
    for (int i = 0; i < countItem; i++)
    {
        temp = current;
        current = head->next;
        delete temp;
    }
}

template<typename T>
void List<T>::clear()
{
    Node<T>* current = head;
    Node<T>* temp;
    for (int i = 0; i < countItem; i++)
    {
        temp = current;
        current = head->next;
        delete temp;
    }
}

template<typename T>
void List<T>::popFront()
{
    Node<T>* temp = head;
    head = head->next;
    delete temp;
    countItem--;
}

template<typename T>
void List<T>::popBack()
{
    Node<T>* current = head;
    for (int i = 0; i < countItem; i++)
    {
        current = current->next;
    }
    delete current;
    countItem--;
}

template<typename T>
int List<T>::getSize()
{
    return countItem;
}

template<typename T>
void List<T>::pushFront(T _data)
{
    head = new Node<T>(data, head);
    countItem++;
}

template<typename T>
void List<T>::pushBack(T _data)
{
    if (head == nullptr)
    {
        head = new Node<T>(_data);
    }
    else
    {
        Node<T>* current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = new Node<T>(_data);
    }
    countItem++;
}

template<typename T>
void List<T>::insertByIndex(T _data, int index)
{
    if (index == 0)
    {
        pushFront(_data);
    }
    else
    {
        Node<T>* previous = head;
        for (int i = 0; i < index - 1; i++)
        {
            previous = previous->next;
        }
        Node<T>* newItem = new Node<T>(_data, previous->next);
        previous->next = newItem;
        countItem++;
    }
}

template<typename T>
void List<T>::deleteByIndex(int index)
{
    if (index == 0)
    {
        popFront();
    }
    else
    {
        Node<T>* previous = head;
        Node<T>* current = head->next;
        for (int i = 0; i < (index - 1); i++)
        {
            previous = previous->next;
            current = current->next;
        }
        previous->next = current->next;
        delete current;
        countItem--;
    }
}

template<typename T>
inline void List<T>::printItems4Menu()
{
    struct Node<T>* current = head;
    int i = 0;
    while (current != NULL) {
        cout << i << ". " << current->data << endl;
        i++;
        current = current->next;
    }
}

template<typename T>
inline T& List<T>::operator[](int index)
{
    Node<T>* current = head;
    for (int i = 0; i <= index; i++)
    {
        current = current->next;
    }
    return current->data;
}
