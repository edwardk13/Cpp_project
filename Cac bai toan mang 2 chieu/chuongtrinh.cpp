#include"thuvien.h"
int main()
{
	int A[KTMT][KTMT];
	int n;
	cout << "Nhap kich thuoc cua ma tran";
	nhapSoNguyen(n);
	nhapMaTran(A, n);
	xuatMaTran(A, n);

	xuatptle(A, n);
	int tong = 0;
	tong = tongcacpt(A, n);
	cout << "\nTong cac phan tu duong la boi cua 3 va 5 la: " << tong << endl;
	float tb = 0;
	tb = tbcptduong(A, n);
	cout << "\nTrung binh cac phan tu duong la: " << tb << endl;

	xuatsnt(A, n);
	int tong = 0;
	tong = tongsnt(A, n);
	cout << "\nTong cac so nguyen to la: " << tong << endl;
	int tongk = 0;
	tongk = tongdongk(A, n);
	cout << "\nTong cac so tren dong k: " << tongk << endl;

	int dem = 0;
	dem = demsoam(A, n);
	cout << "co " << dem << " phan tu am" << endl;

	int dem1 = 0;
	dem = demsoduong(A, n);
	cout << "co " << dem << " phan tu duong" << endl;

	btlt 2
	int dem = 0;
	dem = demsochan(A, n);
	cout << "co " << dem << " phan tu chan" << endl;

	int dem1 = 0;
	dem = demsole(A, n);
	cout << "co " << dem << " phan tu le" << endl;

	int dem = 0;
	dem = demsolanxxuathien(A, n);
	cout << "co " << dem << " lan x xuat hien " << endl;

	int dem = 0;
	dem = demsonhohonx(A, n);
	cout << "co " << dem << " so nho hon x " << endl;

	int dem = 0;
	dem = demsonguyento(A, n);
	cout << "co " << dem << " so nguyen to " << endl;
	
	int dem = 0;
	dem = demsohoanthien(A, n);
	cout << "co " << dem << " so hoan thien " << endl;

	int dem = 0;
	dem = demboicua3va5(A, n);
	cout << "co " << dem << " so la boi cua 3 va 5 " << endl;

	int tong = 0;
	tong = tongdongchan(A, n);
	cout << "\ntong cac so tren dong chan la: "<< tong << endl;
	return 0;
}