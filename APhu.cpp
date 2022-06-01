#pragma once
#include"APhu.h"
#include<iostream>
using namespace std;
void APhu:: input() {
	cout << "\nNhap vao luong HP toi da cua A Phu hien tai: "; cin >> hp;
	cout << "\nNhap so luong vu khi ma A Phu dem theo: "; cin >> soluongvukhi;
}
int APhu::getSoluongvukhi() { return soluongvukhi; }
float APhu::getHP() { return hp; }
void APhu::bidanh(float x) {
	hp -= x;
}