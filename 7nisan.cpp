// 7nisan.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
using namespace std;
#include <iostream>

int main()
{
	/* bir sınav salonunda 3 sıra vardır her sırada 4 koltuk vardır her koltuğu sıra-koltuk numarasoıyla yazdır (iç içe döngü ile)
	for (int a = 1; a < 4; a++) {
		for (int b = 1; b < 5; b++) {
			cout << "sira:" << a << " " << "koltuk:" << b << endl;
		}
	}*/

	/* iç içe döngü 1’den 10’a kadar çarpım tablosunu ekrana yazdırır
	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10; b++) {
			cout << a << "x" << b << "=" << a * b << endl;
		}
	}
	/*iç içe döngü 4 defa yaz yazar 8 tane iç içe döngü yazar
	for (int sayac = 0; sayac < 4; sayac++) {
		cout << "yaz" << endl;
		for (int a = 2; a < 4; a++) {
			cout << "içerdeki döngü çalıştı " << endl;
		}
	}*/


	/*for döngüsü ile kullanıcıdAn 3 sayı al bunların toplamı 
	int toplam = 0;
	int sayi;
	for (int i = 1; i <= 3; i++) {
		cin << sayi;
		toplam += sayi
	}cout << toplam;*/


	/*50 ile 100 arasındaki sayıların 2 katlarının toplamını hesaplar.
	int toplam = 0;
	for (int sayac = 50; sayac <= 100; sayac++) {
		toplam = toplam + sayac * 2;
	}cout << toplam << endl;*/


	/*1'den kadar 5'e kadar sayıların toplamını yazdırır
	int toplam = 0;
	for (int sayac = 1; sayac <= 5; sayac++) {
		toplam = toplam + sayac;
	}cout << toplam << endl;*/

	/* 0'dan başlayarak çift sayıları yazdırır
	for (int sayac = 0; sayac <13; sayac +=2) {
		cout << sayac << endl;
	}*/


	/*10'dan geri sayar ve en sonunda mutlu yıllar yazar
	for (int sayac = 11; sayac > 1; sayac--) {
		cout << sayac - 1 << endl;
	}
	cout << ".mutlu yıllar";*/


	/*0.merhaba arkadaşlar 1.arkadaşlar 2 ,3 ve en son 4.merhaba arkadaşlar yazar ekrana 
	for (int sayac = 0; sayac < 5; sayac++) {
		cout << sayac << ".merhaba arkadaslar!" << endl;
	}*/

	
	/* 5 defa merhaba arkadaslar yazdırır ekrana 
	for (int sayac = 0; sayac < 5; sayac++) {
		cout << "merhaba arkadaslar" << endl;
		*/
}

