#include<iostream>
using namespace std;

void nhap(int &x, int &y) {
	cout << "Nhap gia tri so duong x, y: ";
	cin >> x >> y;
}

void veHinhChuNhat(int x, int y) {
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << " " << '+' << " ";
		}
		cout << endl;
	}
}

int main() {
	int x, y;
	nhap(x, y);
	veHinhChuNhat(x, y);
	return 0;
}