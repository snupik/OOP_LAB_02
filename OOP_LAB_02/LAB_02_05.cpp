#include <iostream>
#include <cmath>
//ÂÀÐ²ÀÍÒ 3
#define M_PI            3.14159265358979323846
using namespace std;

class Ñalendar
{
private:
	int *day;
	int *mounth;
	int *year;


public:
	Ñalendar(int day, int mounth, int year);
	Ñalendar();
	Ñalendar(const Ñalendar &obj1);
	~Ñalendar();
	void Setday(int a);
	void Setmounth(int b);
	void Setyear(int c);
	int Getday();
	int Getmounth();
	int Getyear();
	void check(int m);
	void checkIn();
};


Ñalendar::Ñalendar()
{
	this->day = new int(0);
	this->mounth = new int(0);
	this->year = new int(0);
}
Ñalendar::Ñalendar(int day, int mounth, int  year)
{
	this->day = new int(day);
	this->mounth = new int(mounth);
	this->year = new int(year);

}

Ñalendar::Ñalendar(const Ñalendar &obj1)
{
	day = new int(*obj1.day);
	mounth = new int(*obj1.mounth);
	year = new int(*obj1.year);

}


Ñalendar::~Ñalendar() {
	delete day; delete mounth; delete year;
}


int Ñalendar::Getday()
{
	return *day;
}
int Ñalendar::Getmounth()
{
	return *mounth;
}
int Ñalendar::Getyear()
{
	return *year;
}
void Ñalendar::Setmounth(int b)
{
	if (b < 1 || b >= 13)
	{
		throw "Incorrect value";
	}
	*mounth = b;
}
void Ñalendar::Setday(int a)
{
	if (a < 1 || a >= 32)
	{
		throw "Incorrect value";
	}
	*day = a;
}
void Ñalendar::Setyear(int c)
{
	if (c < 0)
	{
		throw "Incorrect value";
	}
	*year = c;
}
void Ñalendar::check(int m)
{
	if (m >= 10)
	{
		cout << m;
	}
	else
	{
		cout << "0" << m;
	}
}
void Ñalendar::checkIn()
{
	switch (*mounth)
	{
	case 1:
	{
		cout << *day << " ñ³÷íÿ" << *year << "ð" << endl;
		break;
	}
	case 2:
	{
		cout << *day << " ëþòîãî " << *year << "ð" << endl;
		break;
	}
	case 3:
	{
		cout << *day << " áåðåçíÿ " << *year << "ð" << endl;
		break;
	}
	case 4:
	{
		cout << *day << " êâ³òíÿ " << *year << "ð" << endl;
		break;
	}
	case 5:
	{
		cout << *day << " òðàâíÿ " << *year << "ð" << endl;
		break;
	}
	case 6:
	{
		cout << *day << " ÷åðâíÿ " << *year << "ð" << endl;
		break;
	}
	case 7:
	{
		cout << *day << " ëèïíÿ " << *year << "ð" << endl;
		break;
	}
	case 8:
	{
		cout << *day << " ñåðïíÿ " << *year << "ð" << endl;
		break;
	}
	case 9:
	{
		cout << *day << " âåðåñíÿ " << *year << "ð" << endl;
		break;
	}
	case 10:
	{
		cout << *day << " æîâòíÿ " << *year << "ð" << endl;
	}
	case 11:
	{
		cout << *day << " ëèñòîïàäà " << *year << "ð" << endl;
		break;
	}
	case 12:
	{
		cout << *day << " ãðóäíÿ " << *year << "ð" << endl;
		break;
	}

	}
}




int main()
{

	Ñalendar *obj1 = new Ñalendar;
	Ñalendar *objdeff = new Ñalendar;
	system("chcp 1251");
	objdeff->Setday(25);
	objdeff->Setmounth(06);
	objdeff->Setyear(2005);
	objdeff->checkIn();
	objdeff->check(objdeff->Getday());
	cout << ":";
	objdeff->check(objdeff->Getmounth());
	cout << ":";
	objdeff->check(objdeff->Getyear());
	cout << endl;
	int day, year, mounth = 0;
	cout << "pls input day,mounth,year" << endl;
	cin >> day;
	obj1->Setday(day);
	cin >> mounth;
	obj1->Setmounth(mounth);
	cin >> year;
	obj1->Setyear(year);
	obj1->checkIn();
	obj1->check(day);
	cout << ":";
	obj1->check(mounth);
	cout << ":";
	obj1->check(year);
	cout << endl;
	getchar(); getchar();
	return 0;
}