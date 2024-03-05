#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    srand(time(0));

    bilangan = rand() % 10;
    cout << "Nilai awal = " << bilangan << endl;

    if (bilangan)
    {
        bilangan = 2 * bilangan;
    }
    else
    {
        bilangan = 4 * bilangan;
    }

    cout << "Nilai Akhir = " << bilangan;
}

