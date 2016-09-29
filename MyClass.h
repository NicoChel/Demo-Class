//Header File
#include <string>
#include <iostream>

using namespace std;

class MyClass
{
	private:
		int num = 0;
		string room = " ";
		bool fun = true;
	 
	public:
		void setNum(int);
		int getNum();
		void setRoom (string);
		string getRoom();
		void setFun(bool);
		bool getFun();
};
