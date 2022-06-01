#pragma once
#include<iostream>
using namespace std;
class Thudu {
	float hp;
	int damage;
public:
	void setHP(float hp);
	float getHP();
	float getDamage();
	virtual void input() {
		cin >> hp >> damage;
	}
	virtual void bidanh(float x){}
	virtual float satthuong() = 0;
	virtual int check() = 0;
};
class Botot : public Thudu {
	int solanchiudanh;
public:
	int getSoLanChiuDanh();
	void input();
	void bidanh(float x);
	float satthuong();
	int check();
};
class Ho : public Thudu {
public:
	void input();
	void bidanh(float x);
	float satthuong();
	int check();
};