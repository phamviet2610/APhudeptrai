#pragma once
#include"APhu.h"
#include<iostream>
using namespace std;
void APhu:: input() {
	cin >> hp;
	cin >> soluongvukhi;
}
int APhu::getSoluongvukhi() { return soluongvukhi; }
float APhu::getHP() { return hp; }
void APhu::bidanh(float x) {
	hp -= x;
}
