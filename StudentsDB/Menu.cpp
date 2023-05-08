#include "Menu.h"

Menu::Menu(string _upTitle)
{
	upTitle = move(_upTitle);
}

void Menu::addMenuItem(string _item)
{
	items.pushBack(_item);
}

void Menu::draw()
{
	system("cls");
	cout << upTitle << endl;
	items.printItems4Menu();
	cout << downTitle << endl;
}

int Menu::run()
{
	draw();
	EditData* cl = new EditData();
	cl->setLabel("¬ведите число");
	int min = 0, max = items.getSize();
	int selectItem = cl->getData(editType::onlyDigit, min, max);
	delete cl;
	return selectItem;
}
