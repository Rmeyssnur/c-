#include <iostream>
using namespace std;
int hesapla(int sayi,int  sayi11) {
    return sayi + sayi11;
};
int main() {
    int sayi, sayi11;
    cout << "lütfen bir sayi girniz:";
    cin >> sayi >> sayi11;
    cout << hesapla(sayi,sayi11);

}
/*
int hesapla(int sayi) {
    return sayi + 5;
};
int main() { 
    cout<<hesapla(5);
}*/


/*
void nesnetabanlı(string dil = "bilinmeyen deger",int yas=18) {
    cout << "proglama dili:" << dil << endl;
    cout << "yas bilgisi:" << yas << endl;
};
int main() {
    nesnetabanlı("c++");
    nesnetabanlı("python");
    nesnetabanlı();
    nesnetabanlı();
    nesnetabanlı();
    nesnetabanlı("java");
}*/
/*varsılayan değer 
void nesnetabanlı(string dil="bilinmeyen deger") {
    cout << "proglama dili:" << dil << endl;
};
int main() {
    nesnetabanlı("c++");
    nesnetabanlı("python");
    nesnetabanlı();
    nesnetabanlı();
    nesnetabanlı();
    nesnetabanlı("java");
}*/
/*
void profil(string isim, int yas, string sehir, char sinif) {
    cout << "kullanicin ismi:" << isim << endl;
    cout << "kullanicin yasi:" << yas << endl;
    cout << "kullanicin sehiri:" << sehir << endl;
    cout << "kullaniicin sinifi:" << sinif << endl;
}
int main() {
    int yas1;
    char sinif1;
    string sehir1, isim1;
    cout<< "ismininizi girin";
    cin >> isim;
    cout << "yasinizi girin";
    cin >> yas;
    cout << "sehrinizi girin:";
    cin >> sehir;
    cout << "sinifinizi girin:";
    cin >> sinif;
    profil(isim, yas, sehir, sinif);
 }*/

/*2-FONKSİYON ÖRNEĞİ*/
/*void profilolustur(string isim, int yas, string nereli, char sinifi) {
    cout << "kullanıcının ismi:" <<isim<<endl;
    cout << "kullancinin yasi:" << yas << endl;
    cout << "kullanıcı nereli:" << nereli << endl;
    cout << "kullanicinin sinifi:" << sinifi << endl;
};
int main() {
    profilolustur("gökçe",27,"samsun",'2');*/
/*1-FONKSİYON KONUSU*/
/*void benimfaksiyon() {
    cout << "merhaba fonksiyondan bir mesaj var" << endl;
}
void digerfonkisyon() {
    cout << "bu da diğer fonksiyon";
}
void digerrfonksiyon() {
    cout << "merhabalar nasılsınız :";
}
int main()
{
    cout << "merhaba baslatici fonksiyondan mesaj var:";
    benimfaksiyon();
    digerfonkisyon();
    digerrfonksiyon();
}*/

