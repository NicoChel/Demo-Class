//Client File

#include "MyClass.h"
#include <string>
#include <iostream>

using namespace std;


int main()
{
	myClass myVar;
	int var = 10;
	string str;
	
	cin >> var;
	cout << "var = " << var < endl;
	cin >> str;
	cout << "str = " << str;
	
	myVar.setNum(32);
	myVar.getNum();
	myVar.setRoom("LR 12");
	myVar.getRoom();
	myVar.setFun('True');
	myVar.getFun();
	
	cout<< myVar;
}
