#include "Student.h"

string str;

template<typename T>
inline void Student::swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

Student::Student()
{
	fileName = "database.bin";
	edit = new EditData();
};

Student::~Student()
{
	delete edit;
}

void Student::setDefaultData()
{
	strncpy_s(SN.surname, "Иванов", 30);
	strncpy_s(SN.name, "Иван", 30);
	strncpy_s(SN.patronymic, "Иванович", 30);
	strncpy_s( SN.faculty, "ИКБ", 30);
	strncpy_s( SN.department, "Информационная безопасность", 30);
	strncpy_s( SN.group, "БББО-05-22", 15);
	strncpy_s( SN.recordBookNumber, "123456789", 15);
	strncpy_s(SN.birthDate,"01.01.2004",15);
	SN.sex = Sex::male;
	 SN.admissionYear = 2022;
	/*for (int i = 0; i < 9; i++)
		for (int j = 0; j < 10; j++) {
			SN.recordBook[i][j].isEmpty = true;
		}*/
}
void Student::setDefaultData1()
{
	strncpy_s(SN.surname, "Жумайев", 30);
	strncpy_s(SN.name, "Жумай", 30);
	strncpy_s(SN.patronymic, "Жумайевич", 30);
	strncpy_s(SN.faculty, "ИИБ", 30);
	strncpy_s(SN.department, "Информабубубубпасность", 30);
	strncpy_s(SN.group, "БСБО-01-22", 15);
	strncpy_s(SN.recordBookNumber, "3756454", 15);
	strncpy_s(SN.birthDate, "61.61.2064", 15);
	SN.sex = Sex::male;
	SN.admissionYear = 2022;
	/*for (int i = 0; i < 9; i++)
		for (int j = 0; j < 10; j++) {
			SN.recordBook[i][j].isEmpty = true;
		}*/
}
void Student::setDefaultData2()
{
	strncpy_s(SN.surname, "Денидиираимон", 30);
	strncpy_s(SN.name, "Денидиираимон", 30);
	strncpy_s(SN.patronymic, "Денидиираимон", 30);
	strncpy_s(SN.faculty, "ИИТХКБ", 30);
	strncpy_s(SN.department, "Химя", 30);
	strncpy_s(SN.group, "ИНБО-15-27", 15);
	strncpy_s(SN.recordBookNumber, "134143143789", 15);
	strncpy_s(SN.birthDate, "31.31.2094", 15);
	SN.sex = Sex::male;
	SN.admissionYear = 2022;
	/*for (int i = 0; i < 9; i++)
		for (int j = 0; j < 10; j++) {
			SN.recordBook[i][j].isEmpty = true;
		}*/
}

void Student::setSurname()
{
	
	edit->clear(SN.surname); edit->setLabel("Введите фамилию: ");
	str = edit->getData(editType::onlyLetter, 30).c_str();
	strncpy_s(SN.surname, str.c_str(), str.size());
}

void Student::setName()
{
	
	edit->clear(SN.name); edit->setLabel("Введите имя: ");
	str = edit->getData(editType::onlyLetter, 30).c_str();
	strncpy_s(SN.name, str.c_str(), str.size());
}

void Student::setPatronymic()
{
	
	edit->clear(SN.patronymic); edit->setLabel("Введите отчество: ");
	str = edit->getData(editType::onlyLetter, 30).c_str();
	strncpy_s(SN.patronymic, str.c_str(), str.size());
}

void Student::setBirthDate()
{
	
	edit->clear(SN.birthDate);
	edit->setLabel("Введите дату рождения: ");
	str = edit->getData(editType::all, 15);
	strncpy_s(SN.birthDate, str.c_str(), 10);
}

void Student::setSex(string header)
{
	Menu* sexMenu = new Menu(header);
	sexMenu->addMenuItem("Выход");
	sexMenu->addMenuItem("Мужской");
	sexMenu->addMenuItem("Женский");
	int sexItem = -1;
	while (sexItem != 0) {
		sexItem = sexMenu->run();
		if (sexItem == 1) { SN.sex = Sex::male; sexItem = 0; }
		if (sexItem == 2) { SN.sex = Sex::female; sexItem = 0; }
	}
	delete sexMenu;
}

void Student::setAdmissionYear()
{
	
	edit->clear(to_string(SN.admissionYear));
	edit->setLabel("Введите год начала обучения: ");
	SN.admissionYear = edit->getData(editType::onlyDigit, 1940, 2022);
}

void Student::setFaculty()
{
	
	edit->clear(SN.faculty); edit->setLabel("Введите факультет: ");
	str = edit->getData(editType::onlyLetter, 30).c_str();
	strncpy_s(SN.faculty, str.c_str(), str.size());
}

void Student::setDepartment()
{
	
	edit->clear(SN.department); edit->setLabel("Введите кафедру: ");
	str = edit->getData(editType::onlyLetter, 30).c_str();
	strncpy_s(SN.department, str.c_str(), str.size());
}

void Student::setGroup()
{
	
	edit->clear(SN.group); edit->setLabel("Введите номер группы: ");
	str = edit->getData(editType::onlyLetter, 15).c_str();
	strncpy_s(SN.group, str.c_str(), str.size());
}

void Student::setRecordBookNumber()
{
	
	edit->clear(SN.recordBookNumber);
	edit->setLabel("Введите номер зачетной книжки: ");
	str = edit->getData(editType::all, 15).c_str();
	strncpy_s(SN.recordBookNumber, str.c_str(), str.size());
}

void Student::printInfo()
{
	cout << endl << " _________Информация о студенте:_________" << endl;
	cout << " Фамилия: " << SN.surname << " Имя: " << SN.name << " Отчество: " << SN.patronymic << endl;
	cout << " Факультет: " <<  SN.faculty << " Кафедра: " <<  SN.department << " Группа: " <<  SN.group << endl;
	cout << " Номер зачетной книжки: " <<  SN.recordBookNumber << " День рождения: " << SN.birthDate<< endl;
	cout << " Пол: ";
	if (SN.sex == Sex::male) { cout << "мужской "; }
	if (SN.sex == Sex::female) { cout << "женский "; }
	cout << " Год  начала обучения: " <<  SN.admissionYear << endl;

}

void Student::editStudent()
{
	setDefaultData();
	Menu* studMenu = new Menu("Меню редактирования студента");

	studMenu->addMenuItem("Выход");
	studMenu->addMenuItem("Введите фамилию");
	studMenu->addMenuItem("Введите имя");
	studMenu->addMenuItem("Введите отчество");
	studMenu->addMenuItem("Введите дату рождения");
	studMenu->addMenuItem("Введите год  начала обучения");

	studMenu->addMenuItem("Введите факультет");
	studMenu->addMenuItem("Введите кафедру");
	studMenu->addMenuItem("Введите номер группы");

	studMenu->addMenuItem("Введите номер зачетной книжки");
	studMenu->addMenuItem("Введите пол");
	
	studMenu->addMenuItem("Просмотреть/Введите успеваемость");
	int selectedItem = -1;
	while (selectedItem != 0) {
		printInfo();
		_getch();
		selectedItem = studMenu->run();
		switch (selectedItem)
		{
		case 1:
			setSurname();
			break;
		case 2:
			setName();
			break;
		case 3:
			setPatronymic();
			break;
		case 4:
			setBirthDate();
			break;
		case 5:
			setAdmissionYear();
			break;
		case 6:
			setFaculty();
			break;
		case 7:
			setDepartment;
			break;
		case 8:
			setGroup();
			break;
		case 9:
			setRecordBookNumber();
			break;
		case 10:
			setSex("Меню редактирования пола");
			break;

		deafault:
			break;
		}
	}
	delete studMenu;
}

void Student::clearStudentNode()
{
	strncpy_s(SN.surname, "", 30);
	strncpy_s(SN.name, "", 30);
	strncpy_s(SN.patronymic, "", 30);
	strncpy_s(SN.faculty, "", 30);
	strncpy_s(SN.department, "", 30);
	strncpy_s(SN.group, "", 15);
	strncpy_s(SN.recordBookNumber, "", 15);
	strncpy_s(SN.birthDate, "", 15);
	SN.sex = Sex::male;
	SN.admissionYear = 0;
	/*for (int i = 0; i < 9; i++)
		for (int j = 0; j < 10; j++) {
			SN.recordBook[i][j].isEmpty = true;
		}*/
}

void Student::addStudentToFile()
{
	FILE* binaryFile;
	fopen_s(&binaryFile, fileName.c_str(), "a+");
	fwrite(&SN, sizeof(SN), 1, binaryFile);
	fclose(binaryFile);
}

int Student::countRecords()
{
	FILE* binaryFile;
	fopen_s(&binaryFile, fileName.c_str(), "r");
	fseek(binaryFile, 0L, SEEK_END);
	int size = ftell(binaryFile);
	fclose(binaryFile);
	return size / sizeof(SN);
}

void Student::getShortInfoFromFile()
{
	system("cls");
	cout << "Список данных о студентах: " << endl;
	int size = countRecords();
	FILE* binaryFile;
	fopen_s(&binaryFile, fileName.c_str(), "r");
	for (int i = 0; i < size; i++) {
		fread_s(&SN, sizeof(SN), sizeof(SN), 1, binaryFile);
		cout << i << ". " << SN.surname << " " << SN.name << " " << SN.patronymic << " " << SN.group << endl;
	}
	fclose(binaryFile);
	_getch();
	edit->clear();
	edit->setLabel("Введите номер из списка чтобы получить подробную информацию о студенте. ");
	int num = edit->getData(editType::onlyDigit, 0, size);
	setStudentData(num);
	editStudent();
	writeToFileStudentData(num);
}

void Student::setStudentData()
{
	clearStudentNode();
	setSurname();
	setName();
	setPatronymic();
	setBirthDate();
	setAdmissionYear();
	setFaculty();
	setDepartment();
	setGroup();
	setRecordBookNumber();
	setSex("Меню добавления пола");
	//setRecordBook();
}

void Student::setStudentData(int num)
{
	FILE* binaryFile;
	fopen_s(&binaryFile, fileName.c_str(), "r");
	fseek(binaryFile, num * sizeof(SN), SEEK_SET);
	fread_s(&SN, sizeof(SN), sizeof(SN), 1, binaryFile);
	fclose(binaryFile);
}

void Student::writeToFileStudentData(int num)
{
	int size = countRecords();
	FILE* binaryFile;
	FILE* tmpFile;
	fopen_s(&binaryFile, fileName.c_str(), "r");
	fopen_s(&tmpFile, "tmp.txt", "w+");
	StudentNode tmp_SN;
	for (int i = 0; i < size; i++) {
		fread_s(&tmp_SN, sizeof(tmp_SN), sizeof(tmp_SN), 1, binaryFile);
		if (i == num)
			fwrite(&SN, sizeof(SN), 1, tmpFile);
		else
			fwrite(&tmp_SN, sizeof(tmp_SN), 1, tmpFile);
	}
	fclose(binaryFile);
	fclose(tmpFile);
	remove(fileName.c_str());
	rename("tmp.txt", fileName.c_str());
}

void Student::deleteStudent(int num)
{
	int size = countRecords();
	FILE* binaryFile;
	FILE* tmpFile;
	fopen_s(&binaryFile, fileName.c_str(), "r");
	fopen_s(&tmpFile, "tmp.txt", "w+");
	StudentNode tmp_SN;
	for (int i = 0; i < size; i++) {
		fread_s(&tmp_SN, sizeof(tmp_SN), sizeof(tmp_SN), 1, binaryFile);
		if (i != num)
			fwrite(&tmp_SN, sizeof(tmp_SN), 1, tmpFile);
	}
	fclose(binaryFile);
	fclose(tmpFile);
	remove(fileName.c_str());
	rename("tmp.txt", fileName.c_str());
}

void Student::sortingStudentsByAdmissionYear()
{
	int countItems = countRecords();
	List<StudentNode> studentList;
	for (int i = 0; i < countItems; i++)
	{
		setStudentData(i);
		studentList.pushBack(SN);
	}

	unsigned short _admissionYear = studentList[0].admissionYear;
	for (int i = 0; i < countItems-1; i++)
	{
		unsigned short max = studentList[i].admissionYear;
		int i_max = i;
		for (int j = i+1; j < countItems; j++)
		{
			if (max > studentList[j].admissionYear)
			{
				max = studentList[j].admissionYear;
				i_max = j;
			}
		}
		swap(studentList[i_max].admissionYear, studentList[i].admissionYear);
	}

	for (int i = 0; i < countItems; i++)
	{
		SN = studentList[i];
		deleteStudent(0);
		addStudentToFile();
	}
}