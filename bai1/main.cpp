#include"mangdiem.h"
int main() {
	int n;
	cout << "NHAP THONG TIN MANG A : \n";
	Diem* a = NhapMangDiem(n);
	XuatMangDiem(a, n);
	cout << "NHAP VAO TOA DO A : \n";
	Diem A;
	NhapDiem(&A);
	Diem ans = TimXaNhat(a, n, A);
	cout << "Diem xa A nhat la : ";
	XuatDiem(ans);
	cout << '\n';
	cout << "CAC DIEM CO TOA DO DUONG :\n";
	LietKeToaDoDuong(a, n);
	SapTangTheoKhoangCach(a, n);
	cout << "MANG THEO THU TU TANG DAN KHOANG CACH VOI GOC TOA DO : \n";
	XuatMangDiem(a, n);
}