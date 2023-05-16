#pragma once
#include <iostream>
using namespace std;

enum class markType : char { Fail, Pass, Excellent, Good, Satisfactory, Bad };

struct Subject
{
	char name[15];
	markType mark;
	bool isEmpty;
};

