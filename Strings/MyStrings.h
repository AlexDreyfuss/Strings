#pragma once
#include <iostream>
using namespace std;
 // this is a custom string class which has string features
//1. GetLength() -get lenth of string
//2. Assign() - set a new string 
//3. CharAt() - get char at given index
//4. Append() - append string to current 
//5. Compare() between two strings
//6. IsEmpty() - check if cuurent is empty
//7. Clear(); - clears the current string
class MyStrings 
{
	char * theString;
	size_t mysize;
public:
	MyStrings();
	MyStrings(char * str);
	~MyStrings();
	size_t GetLength();
	char* Assign(MyStrings* otherString);
	char CharAt(size_t index);
	char* Append(MyStrings* otherString);
	bool Compare(MyStrings* otherString);
	bool IsEmpty();
	void Clear();
};
