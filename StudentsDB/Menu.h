#pragma once
#include "windows.h"
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include "EditData.h"
#include "List.h"
using namespace std;

class Menu
{
private:
	string upTitle;
	List<string> items;
	string downTitle;
public:

	Menu(string _upTitle);
	Menu() : Menu("Главное меню") 
	{
		downTitle = "Выберите пункт из меню (число): ";
	}
	void addMenuItem(string _item);
	void draw();
	int run();
};