#include<iostream>
#include<string>
#include"Vukhi.h"
#include"Thudu.h"
#include"APhu.h"
using namespace std;
int main() {
	APhu a; a.input();
	string loai;
	Taykhong z;
	Vukhi **x= new Vukhi*[a.getSoluongvukhi()];
	for (int i = 0; i < a.getSoluongvukhi(); i++) {
		cin.ignore();
		getline(cin, loai);
		if (loai == "Dao") x[i] = new Dao();
		else if (loai == "Cung ten") x[i] = new Cungten();
		x[i]->input();
	}
	int m; cout << "\nNhap vao so luong thu du: "; cin >> m;
	Thudu** y = new Thudu * [m];
	string loai1;
	for (int i = 0; i < m; i++) {
		cin.ignore();
		getline(cin, loai1);
		if (loai1 == "Bo tot") y[i] = new Botot();
		else if (loai1 == "Ho") y[i] = new Ho();
		y[i]->input();
	}
	int i = 0, j = 0;
	while (a.getHP() > 0 && m > i) {
		if (j == a.getSoluongvukhi()) {
			y[i]->bidanh(z.STsudung());
			a.bidanh(a.getHP() * 1 / 10);
		}
		else {
			y[i]->bidanh(x[j]->STsudung());
			int c = x[j]->getSoLuotSuDung();
			x[j]->setSoLuotSuDung(c--);
			if (c == 0) j++;
		}
		if (y[i]->check() > 0) a.bidanh(y[i]->satthuong());
		else i++;
	}
	if (a.getHP() > 0) cout << "A Phu chien thang, hp con lai: " << a.getHP() << ", so luong vu khi con lai: " << a.getSoluongvukhi();
	else cout << "A Phu that bai, so thu du con lai: " << m-i+1;
	return 0;
}
