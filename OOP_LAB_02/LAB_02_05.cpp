#include <iostream>
#include <cmath>
//��в��� 3
#define M_PI            3.14159265358979323846
using namespace std;

class �alendar
{
private:
	int *day;
	int *mounth;
	int *year;


public:
	�alendar(int day, int mounth, int year);
	�alendar();
	�alendar(const �alendar &obj1);
	~�alendar();
	void Setday(int a);
	void Setmounth(int b);
	void Setyear(int c);
	int Getday();
	int Getmounth();
	int Getyear();
	void check(int m);
	void checkIn();
};


�alendar::�alendar()
{
	this->day = new int(0);
	this->mounth = new int(0);
	this->year = new int(0);
}
�alendar::�alendar(int day, int mounth, int  year)
{
	this->day = new int(day);
	this->mounth = new int(mounth);
	this->year = new int(year);

}

�alendar::�alendar(const �alendar &obj1)
{
	day = new int(*obj1.day);
	mounth = new int(*obj1.mounth);
	year = new int(*obj1.year);

}


�alendar::~�alendar() {
	delete day; delete mounth; delete year;
}


int �alendar::Getday()
{
	return *day;
}
int �alendar::Getmounth()
{
	return *mounth;
}
int �alendar::Getyear()
{
	return *year;
}
void �alendar::Setmounth(int b)
{
	if (b < 1 || b >= 13)
	{
		throw "Incorrect value";
	}
	*mounth = b;
}
void �alendar::Setday(int a)
{
	if (a < 1 || a >= 32)
	{
		throw "Incorrect value";
	}
	*day = a;
}
void �alendar::Setyear(int c)
{
	if (c < 0)
	{
		throw "Incorrect value";
	}
	*year = c;
}
void �alendar::check(int m)
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
void �alendar::checkIn()
{
	switch (*mounth)
	{
	case 1:
	{
		cout << *day << " ����" << *year << "�" << endl;
		break;
	}
	case 2:
	{
		cout << *day << " ������ " << *year << "�" << endl;
		break;
	}
	case 3:
	{
		cout << *day << " ������� " << *year << "�" << endl;
		break;
	}
	case 4:
	{
		cout << *day << " ����� " << *year << "�" << endl;
		break;
	}
	case 5:
	{
		cout << *day << " ������ " << *year << "�" << endl;
		break;
	}
	case 6:
	{
		cout << *day << " ������ " << *year << "�" << endl;
		break;
	}
	case 7:
	{
		cout << *day << " ����� " << *year << "�" << endl;
		break;
	}
	case 8:
	{
		cout << *day << " ������ " << *year << "�" << endl;
		break;
	}
	case 9:
	{
		cout << *day << " ������� " << *year << "�" << endl;
		break;
	}
	case 10:
	{
		cout << *day << " ������ " << *year << "�" << endl;
	}
	case 11:
	{
		cout << *day << " ��������� " << *year << "�" << endl;
		break;
	}
	case 12:
	{
		cout << *day << " ������ " << *year << "�" << endl;
		break;
	}

	}
}




int main()
{

	�alendar *obj1 = new �alendar;
	�alendar *objdeff = new �alendar;
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