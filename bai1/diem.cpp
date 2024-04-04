#include"diem.h"
void NhapDiem(Diem* d) {
	cout << "NHAP x : ";
	cin >> d->x;
	cout << "Nhap y : ";
	cin >> d->y;
}
void XuatDiem(Diem d) {
	cout << "(" << d.x << "," << d.y << ")";
}
float TinhKhoangCach(Diem a, Diem b) {
	return sqrt((b.x - a.x) * (b.x - a.x)
		+ (b.y - a.y) * (b.y - a.y));
}