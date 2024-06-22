#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Proyek {
private:
    string namaProyek;
    vector<string> karyawan;

public:
    Proyek(string nama) : namaProyek(nama) 

    void addKaryawan(string nama) {
        karyawan.push_back(nama);
    }

    string getNamaProyek() {
        return namaProyek;
    }

    vector<string> getKaryawan {
        return karyawan;
    }
};

class Karyawan {
private:
    string namaKaryawan;
    vector<Proyek*> proyek;

public:
    Karyawan(string nama) : namaKaryawan(nama) {}

    void addProyek(Proyek* proyek) {
        this->proyek.push_back(proyek);
    }

    string getNamaKaryawan() {
        return namaKaryawan;
    }

    vector<Proyek*> getProyek() {
        return proyek;
    }
};

class Perusahaan {
private:
    string namaPerusahaan;
    vector<Karyawan> karyawan;

public:
    Perusahaan(string nama) : namaPerusahaan(nama) {}

    void addKaryawan(Karyawan karyawan) {
        this->karyawan.push_back(karyawan);
    }

    string getNamaPerusahaan() {
        return namaPerusahaan;
    }

    vector<Karyawan> getKaryawan() {
        return karyawan;
    }
};

