#include"thuvien.h"
void nhapSoNguyen(int& n)
{
	do {
		cout << " (Nhap so nguyen) : ";
		cin >> n;
	} while (n <= 0);
}
void nhap(int A[], int n)
{
	for (int i = 0; i <= n; i++)
	{
			cout << "Phan tu[" << i << "]:";
			cin >> A[i];
		}
}
void xuat(int A[], int n)
{
	cout << "\nphan tu cua mang la:" << endl;
	for (int i = 0; i <= n; i++)
	{
			cout << A[i] <<;

		cout << endl;
	}
}
void xuatptle(int A[], int n)
{
	cout << "\nCac phan tu chan cua mang la:" << endl;
	for (int i = 0; i <= n; i++)
	{
			if (A[i]% 2 == 0) {
				cout << A[i][j] << "\t";
			}
			cout << "*" << "\t";
		cout << endl;
	}
}
int tongcacpt(int A[], int n) {
	int tong = 0;
	for (int i = 0; i <= n; i++)
	{
			tong += A[i];
		
	} return tong;
}
int tbcptduong(int A[], int n) {
	int dem = 0;
	float tb = 0, tong = 0;
	for (int i = 0; i <= n; i++)
	{
			if (A[i] > 0)
			{
				tong += A[i];
				dem++;
			}
	}
	tb = (float)  tong / dem;
	return tb;
}


int checksnt(int n)
{
	if (n < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
void xuatsnt(int A[], int n)
{
	cout << "\nCac so nguyen to cua mang la:" << endl;
	for (int i = 0; i <= n; i++)
	{
			if (checksnt(A[i])==1)
			cout << A[i];
		cout << endl;
	}
}
int tongsnt(int A[], int n) {
	int tong = 0;
		for (int i = 0; i <= n; i++)
		{
				if(checksnt(A[i]) == 1)
				tong += A[i];
			
		} return tong;
	}

int demsoam(int A[][KTMT], int n) {
	int dem = 0;
	for (int i = 0; i <= n; i++)
	{
		
			if ((A[i]) < 0 )
				dem++;
		
	} return dem;
}

int demsoduong(int A[], int n) {
	int dem = 0;
	for (int i = 0; i <= n; i++)
	{
		
			if ((A[i]) > 0 )
				dem++;
		
	} return dem;
}


int demsochan(int A[], int n) {
	int dem = 0;
	for (int i = 0; i <= n; i++)
	{
		
			if ((A[i]) % 2 == 0 )
				dem++;
		
	} return dem;
}

int demsole(int A[], int n) {
	int dem = 0;
	for (int i = 0; i <= n; i++)
	{
		
			if ((A[i]) % 2 != 0 )
				dem++;
	} return dem;
}

int demsolanxxuathien(int A[], int n) {
	int x;
	cout << "\nnhap x: ";
	cin >> x;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
	
			if ((A[i][j]) = x)
				dem++;
	
	} return dem;
}

int demsonhohonx(int A[], int n) {
	int x;
	cout << "\nnhap x: ";
	cin >> x;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
			if ((A[i][j]) < x)
				dem++;
		
	} return dem;
}


int checksnt(int n)
{
	if (n < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
int demsonguyento(int A[], int n) {
	int dem = 0;
	for (int i = 0; i <= n; i++)
	{
			if ( checksnt(A[i]) == 0 )
				dem++;
		
	} return dem;
}

int checksht(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			s += i;
	if (s == n)
		return 1;
	return 0;
}
int demsohoanthien(int A[], int n) {
	int dem = 0;
		for (int i = 0; i <= n; i++)
		{
				if ( checksht(A[i][j]) == 1 )
					dem++;
		} return dem;
}
