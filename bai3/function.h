#ifndef _function_h_
#define _function_h_

#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>
#define cout cout << fixed << setprecision(2) 
#define PI 3.14156
using namespace std;
struct Diem
{
	float x, y;
};
struct DuongTron
{
	Diem* tam;
	float banKinh;
};
DuongTron* TaoDuongTron(float xV, float yV, float rV);
void XoaDuongTron(DuongTron* p);
void PrintDuongTron(DuongTron* p);
float TinhChuVi(DuongTron* a);
DuongTron* ChuViLonNhat(DuongTron** l, int n);
float TinhDienTich(DuongTron* a);
float TongDienTich(DuongTron** l, int n);
int XuatCacDuongTronDTLonHonTB(DuongTron** l, int n);
void XuatDuongTronChuViGiam(DuongTron** l, int n);
void XoaDsDuongTron(DuongTron** l, int n);
#endif  //_function_h_

