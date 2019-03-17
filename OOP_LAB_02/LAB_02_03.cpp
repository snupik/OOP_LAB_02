#include <iostream>
#include <cmath>
//ÂÀÐ²ÀÍÒ 9
#define M_PI            3.14159265358979323846
using namespace std;

class Kolo
{
private:
	int *x;
	int *y;
	int *r;


public:
	Kolo(int x, int y, int r);
	Kolo();
	Kolo(const Kolo &obj1);
	~Kolo();
	void SetX(int a);
	void SetY(int b);
	void SetR(int c);
	int GetX();
	int GetY();
	int GetR();
	double Square();
	double length();
};


Kolo::Kolo()
{
	this->x = new int(0);
	this->y = new int(0);
	this->r = new int(0);
}
Kolo::Kolo(int x, int y, int r)
{
	this->x = new int(x);
	this->y = new int(y);
	this->r = new int(r);

}

Kolo::Kolo(const Kolo &obj1)
{
	x = new int(*obj1.x);
	y = new int(*obj1.y);
	r = new int(*obj1.r);

}


Kolo::~Kolo() {
	delete x; delete y; delete r;
}


int Kolo::GetX()
{
	return *x;
}
int Kolo::GetY()
{
	return *y;
}
int Kolo::GetR()
{
	return *r;
}


void Kolo::SetX(int b)
{
	if (b <= 0)
	{
		throw "Incorrect value";
	}
	*x = b;
}
void Kolo::SetY(int a)
{
	if (a <= 0)
	{
		throw "Incorrect value";
	}
	*y = a;
}
void Kolo::SetR(int c)
{
	if (c <= 0)
	{
		throw "Incorrect value";
	}
	*r = c;
}

double Kolo::Square()
{
	return *r**r*M_PI;
}
double Kolo::length()
{
	return *r * 2 * M_PI;
}

int main()
{
	system("chcp 1251");
	Kolo *objdeff = new Kolo;
	Kolo *obj1 = new Kolo;
	objdeff->SetX(2);
	objdeff->SetY(4);
	objdeff->SetR(5);
	cout << "x=" << objdeff->GetX() << " y=" << objdeff->GetY() << " r=" << objdeff->GetR() << endl;
	cout << "Square=" << objdeff->Square() << endl;
	cout << "length=" << objdeff->length() << endl;
	int x, y, r = 0;
	cout << "input x,y,r coordinates and radius" << endl;
	cin >> x;
	obj1->SetX(x);
	cin >> y;
	obj1->SetY(y);
	cin >> r;
	obj1->SetR(r);
	cout << "x=" << x << " y=" << y << " r=" << r << endl;
	cout << "Square=" << obj1->Square() << endl;
	cout << "length=" << obj1->length() << endl;
	getchar(); getchar();
	return 0;
}