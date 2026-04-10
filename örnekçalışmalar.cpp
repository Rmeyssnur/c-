#include <iostream>
using namespace std;
int main()
{
    /*kullanıcıdan kaç ders çalıştığını al 7'ye eşit olana kadar sayi gisin
    * sonra 7 olunca basardi yazsın ve sonunda toplamı göstersin:
    int ders, toplam = 0;
    while (toplam < 7) {
        cout << "kaç saat ders çalıştınız:";
        cin >> ders;
        toplam = ders + toplam;
    }cout << "basardiniz:";
    cout << toplam << endl;

    /*Kullanıcının günlük hedefi 10.000 adım.
Program kullanıcıya her tur: "Kaç adım attınız?" diye soracak.
Adım sayısı toplam 10.000’e ulaşana kadar döngü devam edecek.
Hedefe ulaşınca: "Tebrikler! Günlük adım hedefinize ulaştınız!"
    int adim, toplam = 0;
    while (toplam< 1000) {
        cout << "kaç adım attiniz:" << endl;
        cin >> adim;
        toplam = adim + toplam;
        }cout << "başardiniz:";
    cout << toplam << endl;*/

    /*Program günlük 8 bardak su hedefini takip eder. 
Kullanıcıdan her bardak için 1 (evet) veya 0 (hayır) girmesi istenir. 
While döngüsü, bardak sayısı 8 olana kadar devam eder. 
Eğer kullanıcı 1 girerse bardak sayısı artırılır, 0 girerse tekrar sorulur. 
8 bardak tamamlanınca tebrik mesajı yazdırılır.
    int bardak = 0, cevap;
    while (bardak < 8) {
        cout << "bir bardak su içtiniz mi evet yada hayır";
        cin >> cevap;
        if (cevap == 1) {
            bardak++;
            cout << "toplam bardak sayısı:" << bardak;
        }
    }*/

    /*kuallnıcı 123 doğru şifre girene kadar şifre iste
    int sifre;
    cout >> sifre;
    while (sifre != 123) {
        cout << "basarıszı tekrar deneyin:";
        cin >> sifre;
    }cout << "giris basarılı:";


    /*kullanıcıdan 5 tane sayı al toplamını bul ve ortalamasını bul
    int toplam = 0,sayac = 1, sayi;
    while (sayac <= 5) {
        cout << "bir sayi girin:";
        cin >> sayi;
        toplam += sayi;
        sayac++;
    }cout << toplam << endl;
    cout << (float)toplam / 5 << endl;*/


    /* çift sayıları yazdırma
    int a, b;
    b = 1;
    cout << "kullanıcı bir sayi girin :";
    cin >> a;
    while (b <= a) {
        for (b % 2 == 0) {
            cout << b << " ";
        }
        b++
    }*/
    /*i sayaç değişkenidir.
Döngünün kaç kez çalışacağını kontrol eder. kullanıcıdan bir sayı al o sayıyı
Kullanıcıdan bir n sayısı al.
while döngüsü kullanarak 1’den n’e kadar olan sayıların toplamını bul.
    int i, a,toplam;
    toplam = 0;
    i = 1;
    cout << "bir sayi girin:";
    cin >> a;
    while (i <= a) {
        toplam = toplam + i;
        i++;

    }cout << toplam;*/

    /* kullanıcıdan sayı al ve onu çarpım tablosu yap ve çarpım tablosunda sonucları çift olanları ekrana yazdır
    int a, i, sonuc, b, aa;
    cout << "bir sayı girin:";
    cin >> a;
    for (i = 1; i <= a; i++) {
        for (b = 1; b <= a; b++) {
            sonuc = i * b;
            if (sonuc % 2 == 0) {
                cout << sonuc << endl;
            }
        }
    }

    /* kullanıcıdan sayı al ve 1'den o sayıya kadar çarpım tablosu yap 
    int a,i, b;
    cout << "bir sayı girin:";
    cin >> a;
    for (i = 1; i <= a; i++) {
        for (b = 1; b <= a; b++) {
            cout << i << "*" << b << "=" << b * i << endl;
        }
    }*/

    /*kullanıcıdan sayi al ve faktöriyelini bul
    int i,a, sonuc;
    sonuc = 1;
    cout << "faktöriyeli öğrenmek için sayi yazin:";
    cin >> a;
    for (i = 1; i <= a; i++) {
        sonuc = sonuc * i;
    }cout << sonuc;*/

    /* kullanıcıdan 5 tane sayı al ve o sayıları topla:
    * for döngüsü ile yap
    int a, i, sonuc;
    sonuc = 0;
    for (i = 1; i < 6; i++) {
        cout << "sayi girin:";
        cin >> a;
        sonuc = sonuc + a;
    }cout << sonuc;*/

    /*geriye dogru sayma
    int n;
    cout << "sayi girin:";
    cin >> n;
    for (n; n >= 1; n--) {
        cout << n << endl;
    }*/

    /*
    int n;
    cout << "Bir sayi girin: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {   // 2’den başla, 2’şer artır
        cout << i << " ";
    }*/


   /* çiftleri yazdırma 
    int n;
    cout << "Bir sayi girin: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {   // i çift mi?
            cout << i << " ";
        }
    }*/
    /* kullanıcıdan sayı alın ve bu sayıları 1'den o sayıya kadar toplayın
    int n, sonuc ,i;
    sonuc = 0;
    cout << "sayı girin lütfen:" << endl;
    cin >> n;
    for (i = 1; i <= n; i++) {
        sonuc = sonuc + i;

    }cout << sonuc;*/


    /* kullanıcıdan iki sayı alın ve bu hangisi büyük oldugunu bulun
    int a, b;
    cout << "iki sayi girin:" << endl;
    cin >> a >> b;
    if (a > b) {
        cout << "a b'den daha büyük";
    }
    else if (a < b) {
        cout << "b a'dan daha büyük";
    }
    else {
        cout << "iki sayi birbirine esittir";
    }

    /* kullanıcıdan bir tutar al eğer 100'den azsa indirim yok yazsın 
    * 100 ile 500 arasında ise yüzde 10 indirim yapsın
    * eğer 500'den yüksekse yüzde 20 indirim yapsın
    int tutar,sonuc,a ;
    sonuc =0;
    a =0;
    cout << "aliveriş tutarını giriniz lütfen:";
    cin >> tutar;
    if (tutar < 100) {
        cout << "indirim yok";
    } 
    else if (tutar >= 100 && tutar < 500) {
        sonuc = tutar * 0.1;
        a = tutar - sonuc;
        cout << a<< endl;
    }
    else {
        sonuc =tutar * 0.2;
        a =tutar - sonuc;
        cout << a<< endl;
    }*/

    /* kullanıcıdan yas bilgisi al yası 18'den küçükse ehliyet alamasın 18 ile 65 arasında ise ehliyet alabilir yazdır eğer 65'ten yüksekse dikkatli kullansın yazdır 
    int yas;
    cout << "yasinizi girin";
    cin >> yas;
    if (yas < 18) {
        cout << "ehliyet alamaz ve araba kullanamaz ";
    }
    else if (yas >= 18 && yas < 65) {
        cout << "ehliyet alabilir ";
    }
    else {
        cout << "dikatli kullanısın ";
    }

    /*çift  mi tek mi kontrol sağlama
    int a;
    cout << "bir sayi girin:";
    cin >> a;
    if (a % 2 == 0) {
        cout << "çift sayidir";
    }
    else {
        cout << "tek sayidir";
    }*/
}

