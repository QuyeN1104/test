#include"mangdiem.h"
Diem* NhapMangDiem(int& n) {
	cout << "Nhap so luong : ";
	cin >> n;
	Diem* a = new Diem[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap diem thu " << i + 1 << " : \n";
		NhapDiem(&a[i]);
	}
	return a;
}
void XuatMangDiem(Diem* a, int n) {
	for (int i = 0; i < n; i++) {
		XuatDiem(a[i]);
		cout << endl;
	}
}
Diem TimXaNhat(Diem* a, int n, Diem A) {
	Diem ans = a[0];
	float res = TinhKhoangCach(a[0], A);
	for (int i = 1; i < n; i++) {
		float tmp = TinhKhoangCach(a[i], A);
		if (tmp > res) {
			ans = a[i];
			res = tmp;
		}
	}
	return ans;
}
void LietKeToaDoDuong(Diem* a, int n) {
	bool f = false;
	for (int i = 0; i < n; i++) {
		if (a[i].x > 0 && a[i].y > 0) {
			XuatDiem(a[i]);
			cout << '\n';
			f = true;
		}
	}
	if (!f) cout << "KHONG TON TAI PHAN TU NAO :\n";
}
void SapTangTheoKhoangCach(Diem* a, int n) {
	Diem O = { 0,0 };
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (TinhKhoangCach(a[j], O) > TinhKhoangCach(a[j + 1], O)) {
				Diem tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}

}