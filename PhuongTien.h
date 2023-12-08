#pragma once
#ifndef _PHUONGTIEN_
#define _PHUONGTIEN_

class PhuongTien
{
protected:
	float _KC;
	float _t;
public:
	void Nhap();
	void Xuat();

	virtual float VanToc();
	virtual float SoTien();
};

#endif // !_PHUONGTIEN_
