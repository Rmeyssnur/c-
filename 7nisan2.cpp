// 7nisan2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
int main()
{
	int giris;
	cout << "bir sayi girin";
	cin >> giris;
	switch (giris) {
	case 1:cout << "bir";
	break;
	case 2:cout << "iki";
	break;
	default:cout << "girilen değer yanlış";

	}
	/*
	switch (deger) {
		case 1;//komutlar
		break;
		case 2;//komutlar
		break;
		default;
	}*/
	/* asal sayı bulma
	int a, asal = 1; // asal = 1: sayı asal varsayılsın
		cout << "Sayi girin: ";
		cin >> a;

		for (int i = a / 2; i > 1; i--) {
			if (a % i == 0) {
				asal = 0; // bölen bulundu, sayı asal değil
				break;    // artık kontrol etmeye gerek yok
			}
		}

		if (asal == 1)
			cout << a << " sayisi asaldir" << endl;
		else
			cout << a << " sayisi asal değildir" << endl;

		return 0;*/
	


	/* asal sayı bulma sayının yarısından başlar sebebi ise en büyük böleni kendisinden hariç yarısı olduğu içindir :)
	int a;
	cout << "bir sayi girin";
	cin >> a;
	for (int i = (a / 2); i > 1; i--) {
		if (a % i == 0) {
			cout << "asal değil";
		}
		else {
			cout << "asal sayı";
		}
	}*/


	/*koşul dogru olana kadar çalışır 
	int i, a;
	for (i = 10, a = 2; i != a; a++)
	{
		cout << i << endl;
	}cout << "atesleme basladi";*/
	
	/*10'dan geri sayar 5'e gelince mesaş yazar
	for (int i = 10; i > 0; i--) {
		cout << i << endl;
		if (i == 5) {
			cout << "ateslemeye yarıda kesildi";
			break;
		}
	}*/

	/*
	for (başlangıç; şart; artış) {
		//komut
	}*/

	/* kullanıcıdan sayı al  ve o sayı 10'dan büyükse döngüden çık
	* 10'dan küçük döngü devam etsin sonsuza kadar
	int n;
	do {
		cout << "bir sayi girin:";
		cin >> n;
	}while(n<10)*/

	/*sadacw n değişkenin değerini yazar
	int n = 10;
	do {
		cout << "n degiskenin degeri nedir :";
		n++;
	} while (n < 10);*/


	/* do while kullanımı
	int a = 0;
	do {
		cout << "ne degeri:" << a << endl;
		a += 1;
	}while(a<10)*/


	/* while kullanımı
	int a = 0;
	while (a < 10) {
		cout << "ne degeri:" << a << endl;
		a += 1;

	}cout << "çıkış yapildi:";*/


	/*do {
		//komutlar 
	}while(şartlar) önce komut çalışır sonra şartlar sağlanırsa o yazılır*/
	
	/*while (şartlar)
	{
		komut //önce şarta bakılır eğer doğruysa çalışır
	}*/

	/* cinsiyete göre askerlik yapma yapıp kontrol sağlama
	int yas;
	char cinsiyet;
	cout << "yas girin";
	cin >> yas;
	cout << "cinsiyet girin";
	cin >> cinsiyet;
	if (cinsiyet == "erkek") {
		cout << "asker zorunlu:";
		if (yas >= 18) {
			cout << "askerlik yapmak zorunda";
		}
		else {
			cout << "yapmak zorunda değil";
		}
	}
	else if (cinsiyet == "kız") {
		cout << "yapmak zorunda değildir";
	}
	else {
		cout << "hatalı giriş yaptınız";
	} */

	/* çift mi tek mi onu kontrol eder
	int sayi;
	cout << "sayi girin";
	cin >> sayi;
	if (sayi % 2 == 0) {
		cout << "çift";
	}
	else {
		cout << "tek sayidir";
	}*/

	/* 3 yazar 
	int a, b, c;
	a = 2;
	b = 3;
	c = (a > b) ? a : b;
	cout << c;*/

	//|| veya operatörü birnin 1 olması yetiyor 
	//&& ve operatörü ikisininde doğru olması gerek
	/*doğru yazar ! değil tam tersi alınır 
	cout << (10 == 10);*/

	/*25 yazar
	int a = 10;
	int b = 15;
	cout << a + b;*/

	/*
	int yas = 17;
	double boy = 1.77; //ondaklı sayı
	char a = 'a'; // tek karakter atama 
	s  tring = "m";//metinsel ifadeleri ifade eder
	bool b= 1;//doğru yanlış ifadesi için kullanılır
	*/

	/*büyük yazar
	signed int s = -4;
	unsigned int u = 1;
	if (s <u) {
		cout << "kucuk";
	}
	else {
		cout << "büyük";
	}*/


	/* ekranda merhaba yazar
	char a[] = "merhaba";
	cout << a;
	*/

	/*240 yazar
	char d = 120;
	char a = 120;
	cout << d+a;*/

	/*int a, b, c;
	a = 5;
	b = 7;
	c = a + b;
	cout << c << endl;*/
}

