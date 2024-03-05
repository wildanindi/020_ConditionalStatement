#include <iostream>
using namespace std;

int main()
{

    int nilaimtk, nilaibhs, nilaifis;
    string status;
    float rerata;

    cout << "Masukkan Nilai Matematika = " << endl;
    cin >> nilaimtk;
    cout << "Masukkan Nilai Bahasa = " << endl;
    cin >> nilaibhs;
    cout << "Masukkan Nilai fisika = " << endl;
    cin >> nilaifis;

    rerata = (nilaibhs + nilaimtk + nilaifis) / 3;

    if (nilaimtk > 70 || rerata > 60)
    {
        status = "lulus";
        if (nilaifis >= 90) {
            status = "lulusan terbaik";
        }
    }
    else
    {
        status = "tidak lulus";
    }

    cout << "Nilai Matematika = " << nilaimtk << endl;
    cout << "Nilai Bahasa = " << nilaibhs << endl;
    cout << "Nilai Fisika = " << nilaifis << endl;
    cout << "status kelulusan = " << status;



}
