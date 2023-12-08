#pragma once
#ifndef _QUANLY_
#define _QUANLY_
#include"PhuongTien.h"

class QuanLy
{
protected:
	PhuongTien* arr[100];
	int loai[100];
	int n;
public:
	void Nhap();
	void Xuat();
};

#endif // !_QUANLY_

