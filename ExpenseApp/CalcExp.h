class CalcExp
{
private:
	double totmiles;
	double gasprice;
	double mpg;
	double parkfees;
	double tollfees;
	double totgallons;
	double totgasexp;
	double totexpense;
public:
	void setvalues(double, double, double, double, double);
	void calctotgallons();
	void calcgasexp();
	void calctotexpense();
	double gettotmiles();
	double getgasprice();
	double getmpg();
	double gettotgallons();
	double gettotgasprice();
	double gettotexp();
};

