//Main.cpp
//Client File

#include "MyClass.h"
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

void print(string pre, MyClass m, string suff)
{
	cout<<pre<<" ( "<<m.getNum()<<" : "<<m.getRoom()<<" : "<<boolalpha<<m.getFun()<<" : " <<suff<<" ) "<<endl;
}

int main()
{
     MyClass myvar, myvar2;
     int var = 10;
     string str;
     MyClass m1;
     MyClass m2 = {35, "LR10"};
     MyClass m3 = {16, "MSSr6"};
     MyClass m4 = {11, "LT1"};
    

     vector<MyClass> M;
     
     M.push_back(m1);
     M.push_back(m2);
     M.push_back(m3);
	 M.push_back(m4); 
	 
	 return 0;
}
