#include"tamgiac.h"
void NhapTamGiac(TamGiac* t)
{
	cout << "Nhap dinh A : \n" ;
	t->A = new Diem;
	NhapDiem(t->A);
	cout << "Nhap dinh B : \n";
	t->B = new Diem;
	NhapDiem(t->B);
	cout << "Nhap dinh C : \n";
	t->C = new Diem;
	NhapDiem(t->C);
}
void XuatTamGiac(TamGiac t)
{
	printf("Dinh A: ");
	XuatDiem(t.A);
	printf("\n");
	printf("Dinh B: ");
	XuatDiem(t.B);
	printf("\n");
	printf("Dinh C: ");
	XuatDiem(t.C);
	printf("\n");
}
float TinhChuVi(TamGiac t)
{
	float AB = TinhKhoangCach(t.A, t.B);
	float BC = TinhKhoangCach(t.B, t.C);
	float CA = TinhKhoangCach(t.C, t.A);
	return AB + BC + CA;
}
float TinhDienTich(TamGiac t)
{
	float AB = TinhKhoangCach(t.A, t.B);
	float BC = TinhKhoangCach(t.B, t.C);
	float CA = TinhKhoangCach(t.C, t.A);
	// Tinh nua chu vi
	float p = (AB + BC + CA) / 2;
	return sqrt(p * (p - AB) * (p - BC) * (p - CA));
}
