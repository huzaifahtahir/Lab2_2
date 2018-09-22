// Writing a C++ Program. Circuit Board Price
/* An electronics company makes circuit boards that cost $14.95 a piece to produce.
Write a C++ program to determine how much the company should sell them for if
it wants to make a 35 percent profit.
Display the result on the screen.
Once finished writing, compiling, and testing your code:
Save your program as Lab2-2-yourname.cpp for submission.
Also, copy and paste your program into the Word document.
Also, include screen shots showing how your program works in the Word document.

*/

#include <iostream>

using namespace std;

int main()
{
	double unitPrice = 14.95;
	double unitPerc = .35;
	double unitSell;

	unitSell = unitPrice + (unitPrice * unitPerc);

	cout << "You should sell the product for $" << unitSell << endl;
	return 0;


}