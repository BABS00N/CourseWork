#pragma once
#include <iostream>

using namespace std;

//Âèçóàëèçàöèÿ äëÿ äîáàâëåíèÿ è óäàëåíèÿ ýëåìåíòîâ â îäíîñâÿçíîì ñïèñêå.
//https://www.cs.usfca.edu/~galles/visualization/StackLL.html


/// <summary>
/// Ñòðóêòóðà óçëà äèíàìè÷åñêîãî ñïèñêà
/// </summary>
struct node {
    string data;
    struct node* next;
};


class ClassList
{
private:
    struct node* myHead;
    int countItem = 0;

public:
    ClassList() {
        myHead;
        countItem = 0;
    }

    /// <summary>
    /// Äîáàâëÿåò ýëåìåíò â íà÷àëî.
    /// </summary>
    /// <param name="data"> äàííûå ýëåìåíòà</param>
    void addItem(string _data)
    {
        struct node* newItem = new node();
        newItem->data = _data;
        if (countItem == 0)
            newItem->next = NULL;
        else
            newItem->next = myHead;
        myHead = newItem;
        countItem++;
    }
    /// <summary>
    /// Âñòàâêà ýëåìåíòà â ñïèñîê
    /// </summary>
    /// <param name="index">èíäåêñ ïîñëå êîòîðîãî âñòàâèòü</param>
    /// <param name="_data">çíà÷åíèå êîòîðîå íåîáõîäèìî âñòàâèòü</param>
    void insertItem(int index, string _data) {
        if (not (index >= 0 and index <= countItem and countItem >= 0))
            return;
        if (index == 0)
            addItem(_data);
        else {
            struct node* current = myHead;
            for (int i = 0; i < index - 1; i++) {
                current = current->next;
            }
            struct node* newItem = new node();
            newItem->data = _data;
            newItem->next = current->next;
            current->next = newItem;
            countItem++;
        }
    }
    void push_back(string _data) {
        insertItem(countItem, _data);
    }
    /// <summary>
    /// Èçìåíèòü ýëåìåíò ñïèñêà
    /// </summary>
    /// <param name="index">èíäåêñ èçìåíÿåìîãî ýëåìåíòà</param>
    /// <param name="_data">çíà÷åíèå íà êîòîðîå íóæíî èçìåíèòü</param>
    void editItem(int index, string _data) {
        if (index >= 0 and index < countItem and countItem>0) {
            struct node* current = myHead;
            for (int i = 0; i < index; i++) {
                current = current->next;
                //cout << "+" << current->data;
            }
            current->data = _data;
        }
        else {
            cout << endl << "Îøèáêà èíäåêñ íå â äèàïàçîíå";
        }
    }
    /// <summary>
    /// Ôóíêöèÿ äëÿ óäàëåíèÿ ýëåìåíòà èç äèíàìè÷åñêîãî ñïèñêà
    /// </summary>
    /// <param name="index">èíäåêñ óäàëÿåìîãî ýëåìåíòà</param>
    void deleteItem(int index) {
        if (index >= 0 and index < countItem and countItem>0) {
            struct node* current = myHead;
            struct node* old;
            if (index == 0) {
                old = myHead;
                myHead = current->next;
                delete old;
                countItem--;
            }
            else {
                int i = 0;
                while (current) {
                    if (i == index - 1) {
                        old = current->next->next;
                        delete current->next;
                        current->next = old;
                        countItem--;
                        break;
                    }
                    i++;
                    current = current->next;
                }
            }
        }

    }
    int getCount() {
        return countItem;
    }
    string getItem(int index) {
        string _data = "Error";
        if (index >= 0 and index < countItem and countItem>0) {
            struct node* current = myHead;
            for (int i = 0; i < index; i++) {
                current = current->next;
                //cout << "+" << current->data;
            }
            _data = current->data;
        }
        else {
            cout << endl << "Îøèáêà èíäåêñ íå â äèàïàçîíå";
        }
        return _data;
    }
    void printItems4Menu()
    {
        struct node* current = myHead;
        int i = 0;
        while (current != NULL) {
            cout << i << ". " << current->data << endl;
            i++;
            current = current->next;
        }
    }
};