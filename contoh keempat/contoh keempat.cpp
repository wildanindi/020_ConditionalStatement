#include <iostream>
using namespace std;

int main()
{
    int bilangan1, bilangan2;
    string status;
    srand(time(0));

    bilangan1 = rand() % 10;
    cout << "bilangan pertama = " << bilangan1 << endl;
    bilangan2 = rand() % 10;
    cout << "bilangan kedua = " << bilangan2 << endl;
    

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

   
    
    cout << "Status Bilangan = " << status;
}


