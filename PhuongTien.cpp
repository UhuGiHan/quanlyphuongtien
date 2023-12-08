#include"PhuongTien.h"
#include<iostream>

using namespace std;

void PhuongTien::Nhap()
{
	cin >> _KC;
	cin >> _t;
}
void PhuongTien::Xuat()
{
	cout << _KC << " " << _t;
}

float PhuongTien::VanToc()
{
	return _KC/_t;
}
float PhuongTien::SoTien()
{
	return 0;
}