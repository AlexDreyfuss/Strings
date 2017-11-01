// written by alexandre dreyfuss
// class: my own String class
#include  <iostream>
#include "MyStrings.h"
using namespace std;

void main()
{
	MyStrings newString("append string: ");
	std::cout << "test 1: append string"<< endl;
	std::cout << newString.Append(new MyStrings("test1"))<< endl;

	std::cout << "test 2: assign String" << endl;
	MyStrings* tmp = new MyStrings("Test2");
	std::cout << newString.Assign(tmp) << endl;

	std::cout << "test 3: compare String" << endl;
	std::cout << newString.Compare(tmp) << endl;

	std::cout << "test 4: is epmty String" << endl;
	std::cout << newString.IsEmpty() << endl;

	std::cout << "test 4: is epmty String" << endl;
	std::cout << newString.IsEmpty() << endl;

	std::cout << "test 5: is clear String" << endl;
	newString.Clear();
	std::cout << newString.Append(new MyStrings("test5")) << endl;
	delete tmp;
	system("PAUSE");
}