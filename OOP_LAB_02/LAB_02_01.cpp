#include <iostream>
#include <cmath>
//ÂÀÐ²ÀÍÒ 8
#define M_PI            3.14159265358979323846
using namespace std;

class Konus
{
private:
	int *r;
	int *h;


public:
	Konus(int r, int h);
	Konus();
	Konus(const Konus &obj1);
	~Konus();
	void SetR(int a);
	void SetH(int b);
	int GetR();
	int GetH();
	double V();
	double S();
};


Konus::Konus()
{
	this->r = new int(0);
	this->h = new int(0);
}
Konus::Konus(int r, int h)
{
	this->r = new int(r);
	this->h = new int(h);

}

Konus::Konus(const Konus &obj1)
{
	r = new int(*obj1.r);
	h = new int(*obj1.h);

}


Konus::~Konus() { delete r; delete h; }


int Konus::GetR()
{
	return *r;
}
int Konus::GetH()
{
	return *h;
}

void Konus::SetH(int b)
{
	if (b <= 0)
	{
		throw "Incorrect value";
	}
	*h = b;
}
void Konus::SetR(int a)
{
	if (a <= 0)
	{
		throw "Incorrect value";
	}
	*r = a;
}


double Konus::S()
{
	return *r*M_PI*(*r + sqrt(*r**r + *h**h));
}
double Konus::V()
{
	return (*r **r * M_PI**h) / 3;
}

int main()
{
	system("chcp 1251");
	Konus *objdeff = new Konus;
	Konus *obj1 = new Konus;
	objdeff->SetR(2);
	objdeff->SetH(2);
	cout << "radius= " << objdeff->GetR() << " height=" << objdeff->GetH() << endl;
	cout << "Square=" << objdeff->S() << endl;
	cout << "V=" << objdeff->V() << endl;
	int r, h = 0;
	cout << "input height and radius" << endl;
	cin >> h;
	obj1->SetH(h);
	cin >> r;
	obj1->SetR(r);
	cout << "radius= " << r << " height=" << h << endl;
	cout << "Square=" << obj1->S() << endl;
	cout << "V=" << obj1->V() << endl;
	getchar(); getchar();
	return 0;
}