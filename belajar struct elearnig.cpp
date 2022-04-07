//belajar struct elearning
#include <iostream>
using namespace std;

int main(){
	//struct tungal (satu data)
	struct mahasiswa{
		int nim;
		char nama[20];
		float ipk;
	}mhs;
	
	cin >> mhs.nim;
    cin >> mhs.nama;
    cin >> mhs.ipk;
    
    cout << "nim: " << mhs.nim << endl;
    cout << "nama: " << mhs.nama << endl;
    cout << "ipk: " << mhs.ipk << endl;
}


//#include <iostream>
//using namespace std;
//
//int main(){
//	//struct tungal (satu data)
//	struct mahasiswa{
//		int nim;
//		char nama[20];
//		float ipk;
//	};
//	
//	mahasiswa mhs[2];
//	for(int i = 0; i < 2; i++){
//	    cin >> mhs[i].nim;
//        cin >> mhs[i].nama;
//        cin >> mhs[i].ipk;
//    }
//    
//    for(int i =0; i < 2; i++){
//    cout << "nim: " << mhs[i].nim << endl;
//    cout << "nama: " << mhs[i].nama << endl;
//    cout << "ipk: " << mhs[i].ipk << endl;
//	}
//    return 0;
//}
    

#include <iostream>
#include <string.h>
using namespace std;

int main(){
	//struct tungal (satu data)
	struct buku{
		int halaman;
		char judul[10];
	}b;
	
	b.halaman = 100;
	strcpy(b.judul,"Belajar C");
	
	printf("%s=%d", b.judul,b.halaman);
	return 0;
}

//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int main(){
//	//struct tungal (satu data)
//	struct mobil{
//		int tahun;
//		char warna[10];
//	}mobil1,mobil2;
//	
//    mobil1.tahun=2010;
//    mobil2 = mobil1;
//	printf("mobil2=%d",mobil2.tahun);
//	return 0;
//}
