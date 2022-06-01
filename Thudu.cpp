#pragma once
#include"Thudu.h"
#include<iostream>
using namespace std;
void Botot::input() {
	Thudu::input();
	cin >> solanchiudanh;
}
void Ho::input() {
	Thudu::input();
}
int Botot::getSoLanChiuDanh() { return solanchiudanh; }
void Botot::bidanh(float x) { 
	setHP(getHP() - x);
	solanchiudanh--;
}
void Ho::bidanh(float x) {
	setHP(getHP() - x);
}
int Botot::check() {
	if (getHP() < 0 || solanchiudanh == 0) { return 0; }
	return 1;
}
int Ho::check() {
	if (getHP() < 0) { return 0; }
	return 1;
}
float Thudu::getDamage() {
	return damage;
}
float Botot::satthuong() {
	return getDamage();
}
float Ho::satthuong() {
	return getDamage() * 1.5;
}
float Thudu::getHP() {
	return hp;
}
void Thudu::setHP(float hp) {
	this->hp = hp;
}
