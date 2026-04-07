#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*kullanıcı şifresi:123
* kullanıcı şifreyi doğru  girene kadar şifreyi girmesini isteyin
* şifre yanlış ise yanlış uyarısı yapın kullanıcı doğru şifreyi girdiği an işlemi durdurun
* ve "giriş başarlı uyarısını gösterin*/
    /*
    using namespace std;
        int sifre;
        do
        {
            cout << "Sifreyi girin: ";
            cin >> sifre;

            if (sifre != 123)
            {
                cout << "Yanlis sifre!" << endl;
            }

        } while (sifre != 123);

        cout << "Giris basarili";

        return 0;*/


/*kullanıcı şifresi:123
* kullanıcı şifreyi doğru  girene kadar şifreyi girmesini isteyin
* şifre yanlış ise yanlış uyarısı yapın kullanıcı doğru şifreyi girdiği an işlemi durdurun
* ve "giriş başarlı uyarısını gösterin*/
   
 /*
    int sayi;
    do {
        cout << "lütfen sayı girin:";
        cin >> sayi;
    } while (sayi > 0);*/


    //WHİLE DÖNGÜSÜ=ÖNCE KOŞULA BAKAR EĞER DOĞRUYSA ÇALIŞIR KOŞUL SAĞLANANA KADAR KOŞUL YANLIŞ OLDUĞU AN DÖNGÜ KENDİNİ DURDURUR
    /* ekrana 3 ve 4 yazar
    int i = 3;
    while (i < 5) {
        cout << i << endl;
        i++;
    }*/
    

    //DO-WHİLE DÖNGÜSÜ= koşula bakmaksızın içindeki kodu en az bir kere çalıştırır ve ekranda 5 görünür
   /* int i = 5;
    do {
        cout << i << endl;
        i++;
    } while (i < 5);*/


    /*tüm sayıların karesini alır 
    int s = 1;
    while (s <= 10) {
        cout << s * s << endl;
        s++;
    }*/

    /* 10'dan geri sayar
    int sayi = 1;
    while (sayi <= 10) {
        cout << sayi << endl;
        sayi++;
    }*/

    /*10'dan geri sayar ve en sonunda mutlu yıllar yazar
    int i = 10;
    while (i > 0) {
        cout << i << endl;
        i = i - 1;
    }
    cout << "mutlu yıllar"; */


    /* 10 defa 10'dan geriye sayarak ekran mutlu yıllar yazdırır
    int i = 10;
    while (i > 0) {
        cout << i << " " << "mutlu yillar" << endl;
        i--;
    }*/


    /*i değişkeni 4 olarak başlar i<5 oldugu için döngü bir kez çalışır ekrana sadace 4 yazar
    int i = 4;
    while (i < 5) {
        cout << i << endl;
        i++;
    }*/

    /*şimdi bir tane menu yzp sonra kullanıcıdan bir sayı al ve o urunun fiyatını yazsın
    int siparis;
    cout << "1=türk kahvesi" << endl;
    cout << "2=çay" << endl;
    cout << "3-limonata" << endl;
    cout << "4-salep:" << endl;
    cout << "siparis vermek istediginiz urunun numarasını yazınız:";
    cin >> siparis;

    switch (siparis) {
        case 1:
            cout << "15 tl'dir:";
            break;
        case 2:
           cout << "20 tl'dir";
           break;
        case 3:
           cout << "30 tl'dir";
           break;
        case 4:
          cout << "50 tl'dir";
          break;
        default:
            cout << "geçersiz seçim yaptın:";
            break; }*/

            /*switch =bir değişkenin değerine göre farklı kodları çalıştırmak için kullanılır
            * switch içinde "bu değer olursa sunu yap demek
            * break ise o case'nin işini bitir anlamına gelir eğer break olmazsa diğer caselerde çalışır
            int gun = 10;
            switch (gun) {
            case 1:
                cout << "pazartesi";
                break;
            case 2:
                cout << "sali";
                break;
            case 3:
                cout << "carsamba";
                break;
            case 4:
                cout << "persembe";
                break;
            case 5:
                cout << "cuma";
                break;
            case 6:
                cout << "cumartesi";
                break;
            case 7:
                cout << "pazar haftanın son günü :!";
                break;
            default :
                cout << "gunler 1 ile 7 arasında olmalı:";
                break;
            }*/

            /* sayının sıfır mı pozitif mi yoksa negatif olduğuna bak
            int sayi;
            cout << "bir sayı girin:";
            cin >> sayi;
            string sonuc = (sayi > 0) ? "pozitif" : (sayi < 0) ? "negatiftir" : "sıfır ";
            cout << sonuc;*/

            /* reşit olup olmadığını bak eğer reşit ise oy verebilir veremez yap
            int yas = 17;
            bool vatandas = true;
            if (18<=yas) {
                cout << "bu kisi resittir";
                if (vatandas) {
                    cout << "bu kisi oy verebilir :";
                }
                else {
                    cout << "bu kisi vatandas olmadigi icin oy veremez:";
                }
            }
            else{
                cout << "bu kisi oy veremez:";
            }*/


            /* kullanıcın reşit mi reşit değil mi
            int yas;
            cout << "yasınızı girin:";
            cin >> yas;
            string durum = (yas >= 18) ? "resittir" : "resit degil";
            cout << durum;*/


            /*ternany operatörün string kullanımı
            int sicaklik = 10;
            string sonuc = (sicaklik <= 10) ? "küçük" : "büyük";
            cout << sonuc;*/

            /* Bu bir ternany operatörü anlamı ise if, else if ve elseyi daha kısa halini kullanmak ! doğru ise yazdır yanlış ise diğerini çalıştır
            * ? KOŞUL DOĞRU İSE BUNU KULLAN DEMEK : KOŞUL YANLIŞ İSE BUNU KULLAN DEMEK
            int sicaklik= 10;
            cout << ((sicaklik < 77) ? "sicak" : "soguk") << endl;*/
}