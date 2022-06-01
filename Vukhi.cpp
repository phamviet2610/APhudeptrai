#pragma once
#include"Vukhi.h"
#include<iostream>
using namespace std;
void Vukhi::setSoLuotSuDung(int soluotsudung) {
	this->soluotsudung = soluotsudung;
}
int Vukhi::getSoLuotSuDung() { return soluotsudung; }
void Vukhi::setChiSoSt(float chisost) {
	this->chisost = chisost;
}
float Vukhi::getChiSoSt() { return chisost; }
void Dao::setChieudai(float chieudai) {
	this->chieudai = chieudai;
}
void Cungten::setSoMuiTen(int somuiten) {
	this->somuiten = somuiten;
}
void Taykhong::setA(APhu a) {
	this->a = a;
}
void Dao::input(){
	Vukhi::input();
	cin >> chieudai;
}
void Cungten::input() {
	Vukhi::input();
	cin >> somuiten;
}
float Dao::STsudung() { return chieudai * getChiSoSt(); }
float Cungten::STsudung() { return (somuiten / 2) * getChiSoSt(); }
float Taykhong::STsudung() {
	return	a.getHP() * 1 / 10;
}
