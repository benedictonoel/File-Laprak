#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string nama;
    int jamkerja;
    double tarifPerjam;

    cout << "Nama Karyawan  : ";
    getline(cin, nama);

    cout << "Jam Kerja : ";
    cin >> jamkerja;

    cout << "Tarif / Jam : ";
    cin >> tarifPerjam;
    
    double gajitotal = jamkerja * tarifPerjam;

    cout << endl;
    cout << left << setw(15) << "Nama"
         << right << setw(10) << "Jam Kerja"
         << setw(15) << "Tarif Per Jam"
         << setw(15) << "Gaji Total" << endl;

    cout << string(55, '-') << endl;

    cout << left << setw(15) << nama
         << right << setw(10) << jamkerja
         << setw(15) << fixed << setprecision(0) << tarifPerjam
         << setw(15) << gajitotal << endl;
         
    return 0;
}