#include <iostream>
#include "ggrenci.h"
using namespace std;
ogrenci::ogrenci(int _id, string _ad, int _sinavnot) {
	id = _id;
	ad = _ad;
	sinavnot = _sinavnot;
}void ogrenci::setid(int _id) {
	id = _id;
}
void ogrenci::setad(string _ad) {
	ad = _ad;
}
void ogrenci:: setsinavnot(int _sinavnot) {
	sinavnot = _sinavnot;
}
int ogrenci::getid() {
	return id;
}
string ogrenci::getad() {
	return ad;
}
int ogrenci::getsinavnot() {
	return sinavnot;
}
void ogrenci::bilgileriyaz() {
	cout << " id:" << id << " ad:" << ad << " sinavnot:" << sinavnot << endl;
}