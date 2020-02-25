#include<iostream>
using namespace std;
enum Year{ Y1 = 2010, y2, y3, y4, y5, y6};
enum Month{ Jan=1,Feb,Mar,Apr,May,June,July,Aug,Sept,Oct,Nov,Dec};
int year0;
int month0;
int day0;
int hour0;
int min0;
int sec0;

class Timedate
{
private:
	int year;
	int month;
	int day;
	int hour;
	int min;
	int sec;
public:
	Timedate();
	void setfun(void);
	void getfun(int year0,int month0,int day0,int hour0,int min0,int sec0);
	void printfun(void);
};

Timedate::Timedate() {};

void Timedate::setfun(void)
{
	cout << "Please input the time information:" << endl;
	cout << "(year(2010-2015).month.day.hour.min.sec)" << endl;
	cin >> year0 >> month0 >> day0 >> hour0 >> min0 >> sec0;
}

void Timedate::getfun(int year0, int month0, int day0, int hour0, int min0, int sec0)
{
	year = year0;
	month = month0;
	day = day0;
	hour = hour0;
	min = min0;
	sec = sec0;
}

void Timedate::printfun(void)
{
	month0 = Month(month);
	cout << int(year) << "年" <<month0 << "月" << day << "日" << hour << "时" << min << "分" << sec << "秒\n";
}

int main()
{
	Timedate timedate;
	timedate.setfun();
	timedate.getfun(year0,month0,day0,hour0,min0,sec0);
	timedate.printfun();
	return 0;
}