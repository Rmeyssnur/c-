using namespace std;
#include <iostream>
int main()
{

	/*
	int hava;
	cout << "hava yagmurlu ise 1 değilse 0:";
	cin >> hava;
	(hava == 1) ? cout << "semsiye al" : cout << "semsiye alma";*/

	/* kaldı geçti durumu
	int puan;
	cout << "puan girin";
	cin >> puan;
	(puan > 50) ? cout << "geçti" : cout << "kaldı:";*/

	/*kullanıcıdan 2 sayı al ve en büyüğünü ekrana yazdır
	* ternany örneği ile
	int a, b;
	cout << "bir sayi girin:";
	cin >> a >> b;
	(a > b) ? cout<<a : cout<<b;
	/*çift bulma 
	int a;
	cout << "bir sayi girin:";
	cin >> a;
	 (a % 2 == 0) ? cout << "çift" : cout << "tek";*/

	/*Kullanıcı sıcaklık girer, sıcaklık 100°C’ye ulaşana kadar cihaz çalışmaya devam eder.
Mantık: Do while ile koşul sıcaklığa bağlı.
	int sicaklik;
	do {
		cout << "sicaklik girniz:";
		cin >> sicaklik;
	} while (sicaklik < 100);
	cout << "sicakliginiz 100 dereceye yükselmiştir";*/


	/*kullanıcıdan adim al ve topla tüm adimlari
	int adim, toplam = 0;
	do {
		cout << "bugun kaç adim attiniz:";
		cin >> adim;
		toplam = toplam + adim;
	} while (toplam< 1000);
	cout << toplam;*/


	/*
	int secim;
	do {
		cout << "1-Pizza\n2-Hamburger\n3-Makarna\n0-Cikis\n";
		cout << "Seciminizi girin: ";
		cin >> secim;

		if (secim != 0) {
			cout << "Siparis alindi\n";
		}

	} while (secim != 0);

	cout << "Programdan cikiliyor";*/


	/*
	int yemek;
	do {
		cout << "1,2,3,4,çıkış için 0 basın.";
		cin >> yemek;
		if (yemek == 0) {
			cout << "çıkış yapıldı:";
		}
		if (yemek > 4) {
			cout << "hatalı giriş yapyınız:";
		}
	} while (yemek != 0);*/

		/*kullanıcıdan bakiye al sonra çekmek istediği miktarı al eğer bakiyeden fazla isterse yetersiz bakiye yaz en sonunda güncel bakiyeyi göster
		int bakiye, a, son;
		do {
			cout << "bakiyenizi girin:";
			cin >> bakiye;
			cout << "kaç lira çekmek isterseniz yazın lütfen:";
			cin >> a;
			if (bakiye < a) {
				cout << "yetersiz bakiye";
			}
		} while (a > bakiye);
		son = bakiye - a;
		cout << "bakiye durumunuz:" << son << endl;*/

		/*kullanıcıdan şifre doğru olana kadar veri al
		int a;
		do {
			cout << "şifre girin:";
			cin >> a;

		} while (a != 123);
		cout << "şifre doğru:";*/
}
