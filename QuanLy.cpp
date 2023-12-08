#include"QuanLy.h"
#include"PhuongTien.h"
#include"Xedap.h"
#include<iostream>

using namespace std;

void QuanLy::Nhap()
{
	cout << "Quang Duong";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		
		this->arr[i] = new Xedap;
		this->arr[i]->Nhap();
	}
}
void QuanLy::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		this->arr[i]->Xuat();
		cout << endl;
		cout << "van toc quang duong thu"<<i+1<<" " << this->arr[i]->VanToc();
		cout << endl;
		cout << "So tien quang duong thu" << i + 1<<" " << this->arr[i]->SoTien();
	}
}