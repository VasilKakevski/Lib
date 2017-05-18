//============================================================================
// Name        : currency.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include <sstream>
using namespace std;
void my_Currency_converter(float, char, char);

int main()
{
	float val;
	char x,y;
	cout<<"Please enter a value"<<endl;
	cin>>val;
	cout<<"Please choose your current currency \n 1.Euro \n 2.Dollar \n 3.Pounds "<<endl;
	cin>>x;
	cout<<"Please choose the currency you wanna convert it into \n 1.Euro \n 2.Dollar \n 3.Pounds "<<endl;
	cin>>y;
	my_Currency_converter(val,x,y);
	string String = static_cast<ostringstream*>( &(ostringstream() << val) )->str();
	cout<<"This is string my friend "<<String;
return 0;
}

void my_Currency_converter(float val, char x, char y) {
	if (x == '1') {
		if (y == '1') {
			cout << "Your new currency is " << val << endl;
		}
		if (y == '2') {
			cout << "Your new currency is " << val / 100 << endl;
		}
		if (y == '3') {
			cout << "Your new currency is " << val / 150 << endl;
		}

	}
	if (x == '2') {
		if (y == '1') {
			cout << "Your new currency is " << val * 100 << endl;
		}
		if (y == '2') {
			cout << "Your new currency is " << val << endl;
		}
		if (y == '3') {
			cout << "Your new currency is " << val * 0.5 << endl;
		}
	}
	if (x == '3') {
		if (y == '1') {
			cout << "Your new currency is " << val / 150 << endl;
		}
		if (y == '2') {
			cout << "Your new currency is " << val * 1.5 << endl;
		}
		if (y == '3') {
			cout << "Your new currency is " << val << endl;
		}
	}
}



