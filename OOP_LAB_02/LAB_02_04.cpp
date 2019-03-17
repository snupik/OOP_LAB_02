#include <iostream>
#include <cmath>
//ÂÀÐ²ÀÍÒ 4
#define M_PI            3.14159265358979323846
using namespace std;

class Allthetime
{
private:
	int *hours;
	int *seconds;
	int *minutes;


public:
	Allthetime(int hours, int seconds, int minutes);
	Allthetime();
	Allthetime(const Allthetime &obj1);
	~Allthetime();
	void Sethours(int a);
	void Setseconds(int b);
	void Setminutes(int c);
	int Gethours();
	int Getseconds();
	int Getminutes();

};


Allthetime::Allthetime()
{
	this->hours = new int(0);
	this->seconds = new int(0);
	this->minutes = new int(0);
}
Allthetime::Allthetime(int hours, int seconds, int  minutes)
{
	this->hours = new int(hours);
	this->seconds = new int(seconds);
	this->minutes = new int(minutes);

}

Allthetime::Allthetime(const Allthetime &obj1)
{
	hours = new int(*obj1.hours);
	seconds = new int(*obj1.seconds);
	minutes = new int(*obj1.minutes);

}


Allthetime::~Allthetime() {
	delete hours; delete seconds; delete minutes;
}


int Allthetime::Gethours()
{
	return *hours;
}
int Allthetime::Getseconds()
{
	return *seconds;
}
int Allthetime::Getminutes()
{
	return *minutes;
}

void Allthetime::Setseconds(int b)
{
	if (b < 0 && b >= 60)
	{
		throw "Incorrect value";
	}
	*seconds = b;
}
void Allthetime::Sethours(int a)
{
	if (a < 0 && a >= 24)
	{
		throw "Incorrect value";
	}
	*hours = a;
}
void Allthetime::Setminutes(int c)
{
	if (c < 0 && c >= 60)
	{
		throw "Incorrect value";
	}
	*minutes = c;
}



int main()
{
	system("chcp 1251");
	Allthetime *objdeff = new Allthetime;
	Allthetime *obj1 = new Allthetime;
	objdeff->Sethours(2);
	objdeff->Setminutes(4);
	objdeff->Setseconds(5);
	cout << objdeff->Gethours() << "hour " << objdeff->Getseconds() << "minute " << objdeff->Getminutes() << "second" << endl;
	cout << objdeff->Gethours() << ":" << objdeff->Getseconds() << ":" << objdeff->Getminutes() << endl;
	int hours, minutes, seconds = 0;
	cout << "pls input time  hour,minute,second" << endl;
	cin >> hours;
	obj1->Sethours(hours);
	cin >> minutes;
	obj1->Setminutes(minutes);
	cin >> seconds;
	obj1->Setseconds(seconds);
	cout << hours << "hour " << seconds << "minute " << minutes << "second" << endl;
	cout << hours << ":" << seconds << ":" << minutes << endl;
	getchar(); getchar();
	return 0;
}