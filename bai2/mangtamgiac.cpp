#include"mangtamgiac.h"
TamGiac* NhapMangTamGiac(int& n)
{
	// B1: Nhap so phan tu, n
	// B2: Cap phat vung nho cho mang
	// B3: Duyet tu dau den cuoi mang
	cout << "Nhap so luong phan tu : ";
	cin >> n;
	TamGiac* a = new TamGiac[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap tam giac thu " << i + 1 << " : \n";
		// B3.1: Goi ham NhapTamGiac a[i]
		NhapTamGiac(&a[i]);
	}
	return a;
}
void XuatMangTamGiac(TamGiac* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Tam giac thu a[%d]: \n", i+1);
		// Goi ham XuatTamGiac a[i]
		XuatTamGiac(a[i]);
		printf("\n");
	}
}
TamGiac TimChuViLonNhat(TamGiac* a, int n)
{
	// B1: Gia su kq = a[0] la tam giac co chu vi nho nhat
	// B2: Duyet tu dau den cuoi mang
	// B2.1: Neu chu vi (a[i]) > chu vi (kq)
	// Cap nhat kq=[i]
	TamGiac tmp = a[0];
	for (int i = 1; i < n; i++) {
		if (TinhChuVi(a[i]) > TinhChuVi(tmp)) {
			tmp = a[i];
		}
	}
	return tmp;
}
float TinhTongDienTich(TamGiac* a, int n)
{
	// B1: tong = 0
	// B2: Duyet tu dau den cuoi mang
	// B2.1: Cong tong voi dien tich a[i]
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += TinhDienTich(a[i]);
	}
	return sum;
}
int DemTamGiacLonHonDTichTBinh(TamGiac* a, int n)
{
	// B1: tb=TinhTongDienTich(a,n)/n;
	// B2: Gan dem: 0
	// B3: Duyet tu dau den cuoi mang
	// B3.1: Neu dien tich(a[i]) > tb
	// B3.1.1: dem ++
	float avr = TinhTongDienTich(a, n) / n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (TinhDienTich(a[i]) > avr) {
			++cnt;
		}
	}
	return cnt;
}
void SapGiamTheoChuVi(TamGiac* a, int n)
{
	// B1: i duyet tu 0 den n-2
	// B1.1: j duyet tu i+1 den n-1
	// B1.1.1: Neu chu vi (a[i], O) < chu vi (a[j], 0)
	// B1.1.1.1: Hoan vi a[i] va a[j]
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (TinhChuVi(a[j]) < TinhChuVi(a[j + 1])) {
				TamGiac tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}