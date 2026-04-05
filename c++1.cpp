// 3.hafta.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
int main()
{



	/* sınav puanına göre harflendirme yap 
	int puan;
	cout << "puan giriniz :";
	cin >>puan;
	if (puan >= 0 && puan <= 39) {
		cout << "ff basarisiz";
	}
	else if (puan >= 40 && puan <= 49) {
		cout << "fd basarisiz";
	}
	else if (puan >= 50 && puan <= 59) {
		cout << "dd basarili";
	}
	else if (puan >= 60 && puan <= 64) {
		cout << "cc basarili";
	}
	else if (puan >= 65 && puan <= 69) {
		cout << "cb basarili ";
	}
	else if (puan >= 70 && puan <= 74) {
		cout << "bb basarili";
	}
	else if (puan >= 75 && puan <= 84) {
		cout << "ba basarili";
	}
	else if (puan >= 85 && puan <= 100) {
		cout << "aa basarili";
	}
	else {
		cout << "tanimsiz bir değer girdiniz tekrar deneyiniz ";
	}*/

	/* bir sıcaklık girin onu maddenin katı ,sıvı ve gaz olduğunu yazan 
	int sicaklik;
	cout << "bir sicaklik giriniz:";
	cin >> sicaklik;
	if (sicaklik < 0) {
		cout << "maddeniz katıdır :";
	}
	else if (sicaklik >= 0 && sicaklik <= 100) {
		cout << "maddeniz sıvıdır:";
	}
	else if (sicaklik > 100) {
		cout << "maddeniz gazdır:";
	}
	else {
		cout << "tanimlanmamis bir değer girdiniz";
	}*/

	/* 4 işlem yaptıma
	int sayi = 3;
	int sayi2 = 5;
	cout << (sayi + sayi2) << endl;
	cout << (sayi - sayi2) << endl;
	cout << (sayi * sayi2) << endl;
	cout << (sayi / sayi2) << endl;

	cout << sayi << endl;
	cout << sayi2 < endl;*/

	/* verilen sayıya 1 ekleme
	int sayi1 = 3;
	sayi1++;
	cout << sayi1;*/

	/* ekranda 15 yazar
	int sayi = 5;
	sayi = sayi + 5;
	sayi += 5;
	cout << sayi;
	*/

	/*
	int sayi = 5;
	sayi = sayi + 5; uzun hali
	sayi += 5; kısa hali
	sayi *= 2;
	sayi /= 4;
	sayi -= 8;
	cout << sayi;
	*/

	/* doğru ise 1, yanlış ise
	int yas = 16;
	cout << (yas > 17);
	cout << (yas > 16);
	cout << (yas >= 16);
	cout << (yas <= 16);
	cout << (yas = 16); bunun yanına  16 yazar
	cout << (yas != 16);
	*/


	/* && = ve demek ||=veya demek  eğer koşul dogru ise 1 yanlış ise 0 demeek
	int sayi = 3;
	cout << (sayi < 5 && sayi < 4); doğru
	cout << (sayi < 3 && sayi < 4); yanlış
	cout << (sayi < 3 || sayi < 2);yanlış
	cout << (sayi < 3 || sayi < 4);doğru
	cout << !(sayi < 3 || sayi < 2);doğru*/

	/* ad ve isimi beraber yazar
	string ad = "emre";
	string soyad = "coban";
	string isim = ad + soyad;
	cout << isim;*/

	/* length = verilen metnin karakter sayısını sayıyor boşlukta dahil
	string metin = "merhaba nasılsınız iyisiniz umarım :)";
	cout << metin.length();*/

	/* [0]=ilk harfi verir metin.length()-1 =ise son harfi verir
	string metin = "merhaba nasılsınız ?";
	cout << metin[0] << endl;
	cout << metin[metin.length() - 1];*/


	/* \" \" ="buradayım"
	string metin = "selam dunya ,nasilsin?";
	string metin2="o sunu dedi:\"buradayim\"";
	cout << metin2;*/

	/* \t\t = boşluk bırakır
	string metin = "selam dunya nasilsin?";
	string metin2 = "o sunu dedi :\t\t\"buradayim\"";
	cout << metin2;*/

	/* ekranda \\=\ yazar \n= yeni satır \'=tek tırnak
	string metin = "selam dunyali nasilsin?";
	string metin2 = "o sunu \\ dedi:\"buradayim\"";
	cout << metin2;*/

	/* hatalı bir kod getline boşluk bırakır
	string adVesoyad;
	cout << "lutfen ad soyad giriniz ";
	getline(cin, adVesoyad);
	cout << "girdiniz ad ve soyad :" << adVesoyad;
	return 0;*/

	/* puan aldık kullancıdan ve bunu başarılı yada başarıszı durumunaa baktık
	int puan;
	cout << "puan girin";
	cin >> puan;
	if (puan >= 50) {
		cout << "basarili";
	}
	else (puan < 50); {
		cout << "başarısız";

	}*/


}


// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
