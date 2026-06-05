#include <iostream>
using namespace std;
class hasta {
public:

	int yas;
	string kani;
	string adi;

	hasta(string adi, int yas, string kani) {
		cout << "yeni hasta kaydedildi: " << adi << endl;
	}

	void bilgilerigoster() {
		cout << "adi : " << adi << endl;
		cout << "yasi : 20" << yas;
		cout << "kangurubu : A+" << kani;
	}

};
int main()
{
	hasta ali("ali", 20, "A+");
	ali.bilgilerigoster();

}
/*
class araba {
public:
	int model;
	string renk;
	araba(string gelenrenk, int gelenyil) {
		cout << "araba calisti!" << endl;
		cout << "arabamin rengi:" << gelenrenk << endl;
		cout << "arabamın yili:" << gelenyil << endl;
		renk = gelenrenk;
		model = gelenyil;
	}
};

int main()
{
	araba benimArabam("beyaz", 2025);
	araba digerArabam("kırmızı", 2004);
}*/
/*
class araba {
public: 
	int model;
	int yili;
	araba(int a, int b) {
		cout << "araba calisti:" << endl;
		cout << "arabanin modeli" << a << endl;
		cout << "arabanin yili:" << b << endl;
	}
};
int main() {
	araba a(77, 777);
	araba b(17, 787);

}*/

/*
class araba {
public:
	int model;
	string renk;
	araba(string b, int a) {
		cout << "araba calisti" << endl;
		cout << "arbanin rengi:" << b << endl;
		cout << "arabnin yili:" << a << endl;
	}
};
int main() {
	araba c("mavi", 2017);
}*/

/*
class araba {
public:
	int model;
	string renk;
	araba() {
		cout << "araba calisti:" << endl;

	}
};
int main() {
	araba a;
	a.model = 2025;
	a.renk = "mavi:";
}*/

/*
class köpek {
public:
	köpek() {
		cout << "havhav";
	}
};
int main() {
	köpek k9;
}*/

/*
class köpek {
public:
	void havhav() {
		cout << "havhav" << endl;
	}
	void havhav(string havhav) {
		cout << "havla:" << havhav;
	}
};
int main() {
	köpek nesne;
	nesne.havhav();
	nesne.havhav("havhav");
}*/

/*
class benimsinif {
public:
	void foksiyonum() {
		cout << "selamlama:" << endl;
	}
	void baskafonkisyon(string isim) {
		cout << "senin adin:" << endl;

	}
};
int main() {
	benimsinif nesne;
	nesne.foksiyonum();
	nesne.baskafonkisyon("bedriye");
}*/

/*
class kitab {
public:
	int yili;
	string adi;
	int sayfa;
};
int main() {
	kitab b;
	b.yili = 2017;
	b.adi = "bilinmeyene gitmek";
	b.sayfa = 77777;
	cout << b.adi << endl;
	cout << b.sayfa << endl;
	cout << b.yili << endl;
}*/


/*
class araba {
public:
	int fiyat;
	string model;
	int yili;
};
int main() {
	araba a,b;
	a.fiyat = 777;
	a.model = "opel:";
	a.yili = 2017;
	b.fiyat = 7777;
	b.yili = 2027;
	b.model = "a:";
	cout << "arabanin özellikeleri:" << endl;
	cout << a.fiyat << endl;
	cout << a.model << endl;
	cout << a.yili << endl;
	cout << b.fiyat << endl;
	cout << b.model << endl;
	cout << b.yili << endl;
}*/


/*class araba {
public:
	string renk;
	int fiyat;
	string marka;
};
int main() {
	araba a;
	a.renk = "mavi:";
	a.fiyat = 777;
	a.marka = "opel:";
	cout << "arabanin ozellikleri:" << endl;
	cout << a.fiyat << endl;
	cout << a.marka << endl;
	cout << a.renk << endl;
}*/

/*
int sayi = 20;
void fonksiyonum() {
	int sayi = 5;
	cout << sayi;
}
int main() {
	fonksiyonum();
	cout << sayi;
}*/

/*
int sayi = 20;
void fonksiyonum() {
	int sayi = 5;
	cout << sayi << endl;
}
int main()
{
	fonksiyonum();

}*/