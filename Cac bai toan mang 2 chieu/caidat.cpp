#include"thuvien.h"
void nhapSoNguyen(int& n)
{
	do {
		cout << " (Nhap so nguyen) : ";
		cin >> n;
	} while (n <= 0 || n > KTMT);
}
void nhapMaTran(int A[][KTMT], int n)
{
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << "Phan tu[" << i << "][" << j << "]:";
			cin >> A[i][j];
		}
	}
}
void xuatMaTran(int A[][KTMT], int n)
{
	cout << "\nCac phan tu cua ma tran la:" << endl;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
}
void xuatptle(int A[][KTMT], int n)
{
	cout << "\nCac phan tu le cua ma tran la:" << endl;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (A[i][j] % 2 != 0) {
				cout << A[i][j] << "\t";
			}
			cout << "*" << "\t";
		}
		cout << endl;
	}
}
int tongcacpt(int A[][KTMT], int n) {
	int tong = 0;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if(A[i][j] > 0 && A[i][j] % 3 == 0 && A[i][j] % 5 == 0)
			tong += A[i][j];
		}
	} return tong;
}
int tbcptduong(int A[][KTMT], int n) {
	int dem = 0;
	float tb = 0, tong = 0;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (A[i][j] > 0)
			{
				tong += A[i][j];
				dem++;
			}
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
void xuatsnt(int A[][KTMT], int n)
{
	cout << "\nCac so nguyen to cua ma tran la:" << endl;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (checksnt(A[i][j])==1)
			cout << A[i][j];
		}
		cout << endl;
	}
}
int tongsnt(int A[][KTMT], int n) {
	int tong = 0;
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				if(checksnt(A[i][j]) == 1)
				tong += A[i][j];
			}
		} return tong;
	}
int tongdongk(int A[][KTMT], int n) {
	int tong = 0;
	int k;
	cout << "\nnhap k: ";
	cin >> k;
	for (int i = 0; i <= n; i++)
	{
		for (int k = i; k < n; k++) {

			for (int j = 0; j <= n; j++)
			{
				tong += A[i][j];
			}
		} return tong;
	}
}

int demsoam(int A[][KTMT], int n) {
	int dem = 0;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if ((A[i][j]) < 0 )
				dem++;
		}
	} return dem;
}

int demsoduong(int A[][KTMT], int n) {
	int dem = 0;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if ((A[i][j]) > 0 )
				dem++;
		}
	} return dem;
}


int demsochan(int A[][KTMT], int n) {
	int dem = 0;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if ((A[i][j]) % 2 == 0 )
				dem++;
		}
	} return dem;
}

int demsole(int A[][KTMT], int n) {
	int dem = 0;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if ((A[i][j]) % 2 != 0 )
				dem++;
		}
	} return dem;
}

int demsolanxxuathien(int A[][KTMT], int n) {
	int x;
	cout << "\nnhap x: ";
	cin >> x;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
	for (int j = 0; j < n; j++)
		{
			if ((A[i][j]) = x)
				dem++;
		}
	} return dem;
}

int demsonhohonx(int A[][KTMT], int n) {
	int x;
	cout << "\nnhap x: ";
	cin >> x;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((A[i][j]) < x)
				dem++;
		}
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
int demsonguyento(int A[][KTMT], int n) {
	int dem = 0;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if ( checksnt(A[i][j]) == 0 )
				dem++;
		}
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
int demsohoanthien(int A[][KTMT], int n) {
	int dem = 0;
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				if ( checksht(A[i][j]) == 1 )
					dem++;
			}
		} return dem;
}

int demboicua3va5(int A[][KTMT], int n) {
	int dem = 0;
			for (int i = 0; i <= n; i++)
			{
				for (int j = 0; j <= n; j++)
				{
					if ( A[i][j] % 3 == 0 && A[i][j] % 3 == 0)
						dem++;
				}
			} return dem;
}

int tongdongchan(int A[][KTMT], int n) {
		int tong = 0;
	for (int i = 0; i <= n; i++)
	{
			for (int j = 0; j <= n; j++)
			{
				if (i % 2 == 0)
				tong += A[i][j];
			}
		} return tong;
}