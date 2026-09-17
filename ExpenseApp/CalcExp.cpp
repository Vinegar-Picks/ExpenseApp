#include "CalcExp.h"

void CalcExp::setvalues(double m, double gp, double mpg, double pf, double tf)
{
	this->totmiles = m;
	this->gasprice = gp;
	this->mpg = mpg;
	this->parkfees = pf;
	this->tollfees = tf;
}
void CalcExp::calctotgallons()
{
	this->totgallons = this->totmiles / this->mpg;
}
void CalcExp::calcgasexp()
{
	this->totgasexp = this->totgallons * this->gasprice;
}
void CalcExp::calctotexpense()
{
	this->totexpense = this->totgasexp + this->parkfees + this->tollfees;
}
double CalcExp::gettotmiles()
{
	return this->totmiles;
}
double CalcExp::getgasprice()
{
	return this->gasprice;
}
double CalcExp::getmpg()
{
	return this->mpg;
}
double CalcExp::gettotgallons()
{
	return this->totgallons;
}
double CalcExp::gettotgasprice()
{
	return this->totgasexp;
}
double CalcExp::gettotexp()
{
	return this->totexpense;
}