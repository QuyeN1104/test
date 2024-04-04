#ifndef _tamgiac_h_
#define _tamgiac_h_
#include"diem.h"
struct TamGiac
{
	Diem* A, * B, * C;
};
void NhapTamGiac(TamGiac* t);
void XuatTamGiac(TamGiac t);
float TinhChuVi(TamGiac t);
float TinhDienTich(TamGiac t);
#endif // !_tamgiac_h_
