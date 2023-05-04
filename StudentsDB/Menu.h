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
	List<string> items;
	string downTitle;
public:

	ClassMenu(string _upTitle) {
		upTitle = move(_upTitle);
	}

	ClassMenu() : ClassMenu("Главное меню") {
		downTitle = "Выберите пункт из меню (число): ";
	}

	void addMenuItem(string _item) {
		items.pushBack(_item);
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
		cl->setLabel("Введите число");
		int min = 0, max = items.getSize();
		int selectItem = cl->getData(editType::onlyDigit, min, max);
		delete cl;
		return selectItem;
	}
};