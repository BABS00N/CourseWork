#pragma once
#include <iostream>
using namespace std;

enum class markType : char { Fail, Pass, Excellent5, Good4, Satisfactory3, Bad2 };

struct Subject
{
	char name[50];
	markType mark;
};

