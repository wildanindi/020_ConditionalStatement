#include <iostream>
using namespace std;

int main()
{
    int bilangan1, bilangan2;
    string status;
    srand(time(0));

    bilangan1 = rand() % 10;
    bilangan2 = rand() % 10;
    

    if (bilangan1 > bilangan2)
    {
        status = "Bilangan pertama lebih besar dari bilangan kedua";
    }
    else if (bilangan1 == bilangan2)
    {
        status = "Kedua Bilangan Sama";
    }
    else
    {
        status = "Bilangan pertama Lebih kecil";
    }

    cout << "bilangan pertama = " << bilangan1 << endl;
    cout << "bilangan kedua = " << bilangan2 << endl;
    cout << "Status Bilangan = " << status;
}


