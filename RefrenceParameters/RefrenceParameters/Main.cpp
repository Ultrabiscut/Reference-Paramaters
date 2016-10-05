#include <iostream>
using namespace std;

//REFRENCE PARAMETER: a formal parameter that receives the memory address
//of the actual parameter, rather than its value.

//The result is that whatever you do to the parameter in the function,
//affects the parameter that was passed in. (the actual paramter)

//function protypes
void DoSomething(int &iVal, int &iNum);

int main()
{
	int x = 5;
	int y = 22;

	DoSomething(x, y);

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	return 0;
}

//iNum and iVal will be passed in by refrence. This is
//indicated with the ampersand next to the data  type in the 
//parameter list.
void DoSomething(int &iVal, int &iNum)
{
	iVal++; //increment iVal by one
	iNum--; //decrement iNum by one

}