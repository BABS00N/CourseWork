/*#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList()
{
	countItem = 0;
	head = nullptr;
}

template<typename T>
LinkedList<T>::~LinkedList()
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
void LinkedList<T>::clear()
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
void LinkedList<T>::popFront()
{
    Node<T>* temp = head;
    head = head->next;
    delete temp;
    countItem--;
}

template<typename T>
void LinkedList<T>::popBack()
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
int LinkedList<T>::size()
{
	return countItem;
}

template<typename T>
void LinkedList<T>::pushFront(T _data)
{
    Node<T>* newItem = new Node<T>;
    newItem->data = _data;
    newItem->next = head;
    head = newItem;
    countItem++;
}

template<typename T>
void LinkedList<T>::pushBack(T _data)
{
    Node<T>* newItem = new Node<T>;
    newItem->data = _data;
    Node<T>* current = head;
    for (int i = 0; i < countItem; i++)
    {
        current = current->next;
    }
    current->next = newItem;
    countItem++;
}

template<typename T>
void LinkedList<T>::insertByIndex(T _data, int index)
{
    if (index == 0)
    {
        pushFront(_data);
    }
    else if (index == countItem - 1)
    {
        pushBack(_data);
    }
    else if (0 < index and index < countItem)
    {
        Node<T>* newItem = new Node<T>;
        newItem->data = _data;
        Node<T>* current = head;
        Node<T>* temp;
        for (int i = 0; i < index; i++)
        {
            current = current->next;
        }
        temp = current->next;
        current->next = newItem;
        newItem->next = temp;
        countItem++;
    }
    else
    {
        cout << "Invalid index" << endl;
    }
}

template<typename T>
void LinkedList<T>::deleteByIndex(int index)
{
    if (index == 0)
    {
        popFront();
    }
    else if(0 < index < countItem)
    {
        Node<T>* previous = head;
        Node<T>* current = head->next;
        for (int i = 0; i < (index - 1) ; i++)
        {
            previous = previous->next;
            current = current->next;
        }
        previous->next = current->next;
        delete current;
        countItem--;
    }
    else
    {
        cout << "Invalid index" << endl;
    }
}*/