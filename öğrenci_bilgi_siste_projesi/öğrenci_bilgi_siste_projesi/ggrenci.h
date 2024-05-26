#pragma once
#include <iostream>
using namespace std;
class ogrenci {
private:
	int id;
	string ad;
	int sinavnot;
public:
	ogrenci(int _id, string _ad, int _sinavnot);
	void setid(int _id);
	void setad(string _ad);
	void setsinavnot(int _sinavnot);
	int getid();
	string getad();
	int getsinavnot();
	void bilgileriyaz();
};