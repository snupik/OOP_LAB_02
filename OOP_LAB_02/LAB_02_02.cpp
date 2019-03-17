#include <iostream>
#include <cmath>
//ÂÀÐ²ÀÍÒ 5

using namespace std;

class Prymokutnik
{
private:
	int *h;
	int *l;


public:
	Prymokutnik(int h, int l);
	Prymokutnik();
	Prymokutnik(const Prymokutnik &obj1);
	~Prymokutnik();
	void SetH(int a);
	void SetL(int b);
	int GetH();
	int GetL();
	double Square();
	double Perimeter();
};


Prymokutnik::Prymokutnik()
{
	this->h = new int(0);
	this->l = new int(0);
}
Prymokutnik::Prymokutnik(int h, int l)
{
	this->h = new int(h);
	this->l = new int(l);

}

Prymokutnik::Prymokutnik(const Prymokutnik &obj1)
{
	h = new int(*obj1.h);
	l = new int(*obj1.l);

}


Prymokutnik::~Prymokutnik() { delete h; delete l; }


int Prymokutnik::GetH()
{
	return *h;
}
int Prymokutnik::GetL()
{
	return *l;
}

void Prymokutnik::SetH(int b)
{
	if (b <= 0)
	{
		throw "Incorrect value";
	}
	*h = b;
}
void Prymokutnik::SetL(int a)
{
	if (a <= 0)
	{
		throw "Incorrect value";
	}
	*l = a;
}


double Prymokutnik::Square()
{
	return *h * *l;
}
double Prymokutnik::Perimeter()
{
	return 2 * *h + 2 * *l;
}

int main()
{
	system("chcp 1251");
	Prymokutnik *objdeff = new Prymokutnik;
	Prymokutnik *obj1 = new Prymokutnik;
	objdeff->SetL(2);
	objdeff->SetH(2);
	cout << "length " << objdeff->GetL() << " height=" << objdeff->GetH() << endl;
	cout << "Square=" << objdeff->Square() << endl;
	cout << "Perimetr=" << objdeff->Perimeter() << endl;
	int l, h = 0;
	cout << "input height and length" << endl;
	cin >> h;
	obj1->SetH(h);
	cin >> l;
	obj1->SetL(l);
	cout << "length " << l << " height=" << h << endl;
	cout << "Square=" << obj1->Square() << endl;
	cout << "Perimetr=" << obj1->Perimeter() << endl;
	getchar(); getchar();
	return 0;
}