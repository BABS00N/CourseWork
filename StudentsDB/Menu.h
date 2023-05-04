#pragma once
#include "windows.h"
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include "EditData.h"
#include "List.h"
using namespace std;

class ClassMenu
{
private:
	string upTitle;
	List items; 
	string downTitle;
public:

	ClassMenu(string _upTitle) {
		upTitle = move(_upTitle);
	}

	ClassMenu() : ClassMenu("Ãëàâíîå ìåíþ") {
		downTitle = "Âûáåðèòå ïóíêò èç ìåíþ (÷èñëî): ";
	}

	void addMenuItem(string _item) {
		items.push_back(_item);
	}
	void draw() {
		system("cls");
		cout << upTitle << endl;
		items.printItems4Menu();
		cout << downTitle << endl;
	}
	int run() {
		draw();
		EditData* cl = new EditData();
		cl->setLabel("Ââåäèòå ÷èñëî");
		int min = 0, max = items.getCount();
		int selectItem = cl->getData(editType::onlyDigit, min, max);
		delete cl;
		return selectItem;
	}

};