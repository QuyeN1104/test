#include"mangtamgiac.h"

int main() {
	int n;
	TamGiac* t = NhapMangTamGiac(n);
	XuatMangTamGiac(t, n);
	cout << endl;
	TamGiac mx = TimChuViLonNhat(t, n);
	cout << "Tam giac chu vi lon nhat la : \n";
	XuatTamGiac(mx);
	cout << endl;
	cout << "TONG DIEN TICH LA : " << TinhTongDienTich(t, n) << endl;
	cout << "so luong tam giac lon hon dien tich trung binh : \n";
	cout << DemTamGiacLonHonDTichTBinh(t, n) << endl;
	SapGiamTheoChuVi(t, n);
	cout << "Mang sau khi sap xep theo giam dan chu vi :\n";
	XuatMangTamGiac(t, n);
	delete t;
	return 0;
}