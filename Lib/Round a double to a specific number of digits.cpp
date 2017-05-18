//============================================================================
// Name        : Round.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {

	float value = 3.14777777;
	float rounded = ((int)(value * 100 + .5) / 100.0);
	cout<<rounded;
	return 0;
}
