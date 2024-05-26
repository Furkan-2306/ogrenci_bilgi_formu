#include <iostream>
#include "ggrenci.h"
#include <list>
using namespace std;
void menuyugoster() {
	cout << "* * * * * * * * * * *\n";
	cout << "*                   *\n";
	cout << "*        MENU       *\n";
	cout << "*                   *\n";
	cout << "* * * * * * * * * * *\n";
	cout << "1. Yeni kayit ekle \n";
	cout << "2. Tum listeyi goster \n";
	cout << "3. ogrenci id ye gore kayit sil \n";
	cout << "4. ogrenci ara \n";
	cout << "5. cikis \n";
}
void ogrenciekle(list<ogrenci>* lst) {
	int id;
	string ad , soyad ,isim;
	int sinavnot;
	cout << "Lutfen ogrenci id giriniz: ";
	cin >> id;
	cout << "ogrencinin adini ve soyadini giriniz: ";
	cin >> ad >> soyad;
	isim = ad + " " + soyad;
	cout << "sinav notu giriniz: ";
	cin >> sinavnot;
	ogrenci ogr(id, isim, sinavnot);
	lst->push_back(ogr);
}
void showlist(list<ogrenci>* lst) {
	list<ogrenci>::iterator it;
	cout << endl << "- - - -Tum ogrenci listesi- - - -\n";
	for (it = lst->begin(); it != lst->end(); it++) {
		it->bilgileriyaz();
	}
	cout << endl;


}
void ogrencisil(list<ogrenci>* lst) {
	int id;
	cout << "Lutfen silinecek ogrenci idsini giriniz: ";
	cin >> id;
	list<ogrenci>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++) {
		if (it->getid() == id)
			break;
	}
	if (it == lst->end())
		cout << "Belirlenilen id bulanamadi tekrar deneyiniz..";
	else 
	lst->erase(it);
}
void ogrenciara(list<ogrenci>*lst) {
	int id;
	cout << "Lutfen aranacak ogrenci idsini giriniz: ";
	cin >> id;
	list<ogrenci>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++) {
		if (it->getid() == id)
			break;
	}
	if (it == lst->end())
		cout << "Belirlenilen id bulanamadi..";
	else{
		cout << endl << "aradiginiz ogrenci bilgileri: ";
		it->bilgileriyaz();
		cout << endl;
	}
}
int main (){

	list<ogrenci>* ogrencilist = new list<ogrenci>();


	int secim = 0;
	do
	{
		menuyugoster();
		cout << "yapilacak islemi secin :";
		cin >> secim;
		if (secim == 1)
			ogrenciekle(ogrencilist);
		else if (secim == 2)
			showlist(ogrencilist);
		else if (secim == 3)
			ogrencisil(ogrencilist);
		else if (secim == 4)
			ogrenciara(ogrencilist);
		else if (secim == 5)
			break;
		else
			cout << "Hatali giris yaptniz , lutfen tekrar deneyiniz ... \n";
	} while (secim != 5);

	return 0;
}