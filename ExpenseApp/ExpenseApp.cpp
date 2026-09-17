#include <iostream>
#include "CalcExp.h"
using namespace std;

int main()
{
	double m, gp, mpg, pf, tf;
	cout << "Travel Expense App /w classes\n";
	cout << "Enter value for miles ==> ";
	cin >> m;
	cout << "Enter the cost of current gas prices ==> ";
	cin >> gp;
	cout << "Enter value for your vehicles miles per gallon ==> ";
	cin >> mpg;
	cout << "Enter cost for parking fees ==> ";
	cin >> pf;
	cout << "Enter cost for toll fees ==>";
	cin >> tf;
	CalcExp TotTravelExp;
	TotTravelExp.setvalues(m, gp, mpg, pf, tf);
	TotTravelExp.calctotgallons();
	TotTravelExp.calcgasexp();
	TotTravelExp.calctotexpense();

	cout << "\nThe total expense is ==> " << TotTravelExp.gettotexp() << endl;
	return 0;
}