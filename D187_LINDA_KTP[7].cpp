#include <iostream>
using namespace std;

class KTP {
public:
    string nik, nama, tempatLahir, tanggalLahir;
    string jenisKelamin, alamat, agama, statusPerkawinan, pekerjaan, kewarganegaraan;

    void inputData() {
        cout << "============ INPUT DATA KTP ==========" << endl;

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

        cout << "Tanggal Lahir : ";
        getline(cin, tanggalLahir);
        cout<<endl<<endl;
		
       
        int pilihJK;
        cout << "Jenis Kelamin:\n1. Laki-laki\n2. Perempuan\nPilih (1/2): ";
        cin >> pilihJK;
        
        cin.ignore();
        jenisKelamin = (pilihJK == 1) ? "Laki-laki" : "Perempuan";
        cout<<endl<<endl;
        cout << "Alamat Lengkap: ";
        getline(cin, alamat);
        
        cout<<endl<<endl;

        int pilihAgama;
        cout << "Agama:\n1. Islam\n2. Kristen\n3. Katolik\n4. Hindu\n5. Buddha\n6. Konghucu\nPilih (1-6): ";
        cin >> pilihAgama;
        cin.ignore();
        switch (pilihAgama) {
            case 1: agama = "Islam"; break;
            case 2: agama = "Kristen"; break;
            case 3: agama = "Katolik"; break;
            case 4: agama = "Hindu"; break;
            case 5: agama = "Buddha"; break;
            case 6: agama = "Konghucu"; break;
            default: agama = "Lainnya"; break;
        }
        cout<<endl<<endl;

      
        int pilihStatus;
        cout << "Status Perkawinan:\n1. Belum Kawin\n2. Kawin\n3. Cerai Hidup\n4. Cerai Mati\nPilih (1-4): ";
        cin >> pilihStatus;
        cin.ignore();
        switch (pilihStatus) {
            case 1: statusPerkawinan = "Belum Kawin"; break;
            case 2: statusPerkawinan = "Kawin"; break;
            case 3: statusPerkawinan = "Cerai Hidup"; break;
            case 4: statusPerkawinan = "Cerai Mati"; break;
            default: statusPerkawinan = "Tidak Diketahui"; break;
        }
        cout<<endl<<endl;

      
        int pilihPekerjaan;
        cout << "Pekerjaan:\n1. Pelajar/Mahasiswa\n2. PNS\n3. Karyawan Swasta\n4. Wiraswasta\n5. Lainnya\nPilih (1-5): ";
        cin >> pilihPekerjaan;
        cin.ignore();
        switch (pilihPekerjaan) {
            case 1: pekerjaan = "Pelajar/Mahasiswa"; break;
            case 2: pekerjaan = "PNS"; break;
            case 3: pekerjaan = "Karyawan Swasta"; break;
            case 4: pekerjaan = "Wiraswasta"; break;
            case 5: pekerjaan = "Lainnya"; break;
            default: pekerjaan = "Tidak Diketahui"; break;
        }
        cout<<endl<<endl;

        cout << "Kewarganegaraan: ";
        getline(cin, kewarganegaraan);
    }
 

    void tampilkanData() {
        cout << "\n=============== KTP ================" << endl;
        cout << "NIK              : " << nik << endl;
        cout << "Nama             : " << nama << endl;
        cout << "Tempat/Tgl Lahir : " << tempatLahir << ", " << tanggalLahir << endl;
        cout << "Jenis Kelamin    : " << jenisKelamin << endl;
        cout << "Alamat           : " << alamat << endl;
        cout << "Agama            : " << agama << endl;
        cout << "Status           : " << statusPerkawinan << endl;
        cout << "Pekerjaan        : " << pekerjaan << endl;
        cout << "Kewarganegaraan  : " << kewarganegaraan << endl;
        cout << "======================================" << endl;
    }
};

int main() {
    KTP dataKTP;
    dataKTP.inputData();
    dataKTP.tampilkanData();

    return 0;
}

