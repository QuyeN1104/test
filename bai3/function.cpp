#include"function.h"
DuongTron* TaoDuongTron(float xV, float yV, float rV) {
	DuongTron* a = new DuongTron;
	a->banKinh = rV;
	Diem* tmp = new Diem;
	tmp->x = xV;
	tmp->y = yV;
	a->tam = tmp;
	return a;
}
float TinhChuVi(DuongTron* a) {
	float cv = 2.0f * (a->banKinh) * PI;
	return cv;
}

DuongTron* ChuViLonNhat(DuongTron** l, int n) {
	float mx = -1.0;
	DuongTron* tmp = new DuongTron;
	for (int i = 0; i < n; i++) {
		if (TinhChuVi(l[i]) > mx) {
			*tmp = *l[i];
			mx = TinhChuVi(l[i]);
		}
	}
	return tmp;
}
void PrintDuongTron(DuongTron* p) {
	cout << "[(" << p->tam->x << ";" << p->tam->y << ")" << ", " << p->banKinh << "]";
	//cout << endl;
}
float TinhDienTich(DuongTron* a) {
	float area = a->banKinh * a->banKinh * PI;
	return area;
}
void XoaDuongTron(DuongTron* p) {
	delete p;
	p = NULL;
}
float TongDienTich(DuongTron** l, int n) {
	float area = 0;
	for (int i = 0; i < n; i++) {
		area += TinhDienTich(l[i]);
	}
	return area;
}
int XuatCacDuongTronDTLonHonTB(DuongTron** l, int n) {
	float tb = TongDienTich(l, n) / n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (TinhDienTich(l[i]) > tb) {
			++cnt;
			PrintDuongTron(l[i]);
			cout << " voi S = " << TinhDienTich(l[i]);
			cout << endl;
		}
	}
	return cnt;
}
void XuatDuongTronChuViGiam(DuongTron** l, int n) {
	//sort
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (TinhChuVi(l[j]) < TinhChuVi(l[j + 1])) {
				DuongTron* tmp = new DuongTron;
				tmp = l[j];
				l[j] = l[j + 1];
				l[j + 1] = tmp;
				//delete tmp;
				tmp = NULL;
			}
		}
	}
	// xuat 
	for (int i = 0; i < n; i++) {
		PrintDuongTron(l[i]);
		cout << " voi P = " << TinhChuVi(l[i]);
		cout << endl;
	}
}
void XoaDsDuongTron(DuongTron** l, int n) {
	for (int i = 0; i < n; i++) {
		XoaDuongTron(l[i]);
	}
	delete[] l;
	l = NULL;
}
