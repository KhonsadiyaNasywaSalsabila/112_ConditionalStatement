

#include <iostream>
using namespace std;

int main()
{
    float nMat, nFisika, nRerata;
    string status;

    cout << "Masukkan nilai Matematika =";
    cin >> nMat;
    cout << "Masukkan nilai Fisika =";
    cin >> nFisika;

    nRerata = (nFisika + nMat) / 2;

    if (nRerata >= 60) {
        status = "Lulus jalur rerata";
    }

    else if (nMat >= 70) {
        status = "Lulus jalur Matematika";
    }

    else {
        status = "Tidak Lulus";
    }

    cout << "Statusnya adalah =" << status << endl;

}


