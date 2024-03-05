#include <iostream>
using namespace std;

int main()
{
    int bilangan1, bilangan2;
    srand(time(0));

    bilangan1 = rand() % 10;
    cout << "bilangan pertama = " << bilangan1 << endl;
    bilangan2 = rand() % 10;
    cout << "bilangan kedua = " << bilangan2 << endl;

    if (bilangan1 > bilangan2)
    {
        cout << "Bilangan pertama lebih besar dari bilangan kedua" << endl;
    }
    else if (bilangan1 == bilangan2)
    {
        cout << "Kedua Bilangan Sama" << endl;
    }
    else
    {
        cout << "Bilangan pertama Lebih kecil" << endl;
    }
}


