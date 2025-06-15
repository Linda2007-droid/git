#include <iostream>
using namespace std;

class KTP {
public:
    string nik;
    string nama;
    string tempatLahir;
    string tanggalLahir;
    string jenisKelamin;
    string alamat;
    string agama;
    string statusPerkawinan;
    string pekerjaan;
    string kewarganegaraan;

    void inputData() {
        cout << "========== INPUT DATA KTP ==========" << endl;

        cout << "Masukkan NIK (16 digit): ";
        cin >> nik;
        cin.ignore(); 

	        if (nik.length() != 16) {
	            cout << "??  NIK harus 16 digit!" << endl;
	            exit(1);
	        }

	        cout << "Masukkan Nama Lengkap: ";
	        getline(cin, nama);
	
	        cout << "Tempat Lahir: ";
	        getline(cin, tempatLahir);
	
	        cout << "Tanggal Lahir (dd-mm-yyyy): ";
	        getline(cin, tanggalLahir);
	
	        cout << "Jenis Kelamin: ";
	        getline(cin, jenisKelamin);
	
	        cout << "Alamat Lengkap: ";
	        getline(cin, alamat);
	
	        cout << "Agama: ";
	        getline(cin, agama);
	
	        cout << "Status Perkawinan: ";
	        getline(cin, statusPerkawinan);
	
	        cout << "Pekerjaan: ";
	        getline(cin, pekerjaan);
	
	        cout << "Kewarganegaraan: ";
	        getline(cin, kewarganegaraan);
	    }

    void tampilkanData() {
        cout << "\n============ KTP ============" << endl;
        cout << "NIK              : " << nik << endl;
        cout << "Nama             : " << nama << endl;
        cout << "Tempat/Tgl Lahir : " << tempatLahir << ", " << tanggalLahir << endl;
        cout << "Jenis Kelamin    : " << jenisKelamin << endl;
        cout << "Alamat           : " << alamat << endl;
        cout << "Agama            : " << agama << endl;
        cout << "Status           : " << statusPerkawinan << endl;
        cout << "Pekerjaan        : " << pekerjaan << endl;
        cout << "Kewarganegaraan  : " << kewarganegaraan << endl;
        cout << "==============================="<<endl;
    }
};

	int main() {
	    KTP dataKTP;
	    dataKTP.inputData();
	    dataKTP.tampilkanData();
	
	    return 0;
	}

