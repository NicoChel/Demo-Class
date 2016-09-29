//Main.cpp
//Client File

#include "MyClass.h"
#include <string>
#include <iostream>

using namespace std;
/*void print(string pre, MyClass m, string suff)
{
	cout << pre<< "(" << m.getNum()<< m. getRoom()<<"," << boolalpha << m.getfun()<< suff;
}*/

int main()
{
	MyClass myVar;
	//int var = 10;
	//string str;
	
	/*cin >> var;
	cout << "var = " << var << endl;
	cin >> str;
	cout << "str = " << str << endl; */
	
	myVar.setNum(32);
	cout<< myVar.getNum()<< endl;
	myVar.setRoom("LR 12");
	cout<<myVar.getRoom()<< endl;
	myVar.setFun(true);
	cout<<myVar.getFun()<<endl;
	
	
	//cout << myVar; this shit doesnt work...!!!
}
