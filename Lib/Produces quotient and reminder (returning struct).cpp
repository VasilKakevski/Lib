//============================================================================
// Name        : Produces.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <cstdio>
#include <cstdlib>
using namespace std;
typedef struct {
        int  quot; /* quotient */
        int  rem;  /* remainder */
} struc;
int main(){

int num = 10, den = 3;
div_t ans;


ans = div(num,den);

printf("Answer:\n\t Quotient = %d\n\t Remainder = %d\n", \
ans.quot,ans.rem);
return 0;
}
