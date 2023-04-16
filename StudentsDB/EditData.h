#pragma once
using namespace std;
class EditData
{
private:

public:
	enum class editType : char { onlyDigit, olnyLetter, all };
	bool isDigit();
	bool isStringDigit();
	bool isLetter(char ch);
	bool isSpace(char ch);
	bool isSpec(char ch);
};