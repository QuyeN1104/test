#include"function.h"
int main(){
	srand(4003);
	// số lượng đường tròn
	int n = 5 + rand() % 20;
	// tạo mảng các đường tròn
	DuongTron** listDT = new DuongTron* [n];
	float xV, yV, rV;
	for (int i = 0; i < n; ++i)
	{
		xV = (rand() % 1000) * 1.0f / 50;
		yV = (rand() % 1000) * 1.0f / 50;
		rV = (rand() % 1000 + 1) * 1.0f / 50;
		listDT[i] = TaoDuongTron(xV, yV, rV);
	}
	//ok
	cout << "Duong tron co chu vi lon nhat: ";
	DuongTron* pDTPMax = ChuViLonNhat(listDT, n);
	PrintDuongTron(pDTPMax);
	cout << "\n\n";
	cout << "Tong dien tich: " << TongDienTich(listDT, n) << endl;
	cout << "\n";
	cout << "Cac duong tron co dien tich lon hon TB:\n";
	cout << "S trung binh: " << TongDienTich(listDT, n) / n << endl;
	
	int dem = XuatCacDuongTronDTLonHonTB(listDT, n);
	cout << "So luong: " << dem;
	cout << "\n\n";

	cout << "Ds duong tron chu vi giam dan:\n";
	XuatDuongTronChuViGiam(listDT, n);
	cout << "\n\n";
	XoaDsDuongTron(listDT, n);
	XoaDuongTron(pDTPMax);
	_getch();
	return 0;
}
