#pragma once

enum class Sex : char { male, female };

struct StudentNode
{
	char surname[30];
	char name[30];
	char patronymic[30];
	char birthDate[15];
	int admissionYear;
	char faculty[30];
	char department[30];
	char group[15];
	char recordBookNumber[15];
	Subject recordBook[9][10];
	Sex sex;
};