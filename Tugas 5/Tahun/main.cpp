#include <iostream>

using namespace std;

int main()
{
    int date, month;

    cout << "Masukkan Tanggal: ";
    cin >> date;
    cout << "Masukkan Bulan: ";
    cin >> month;

    if ((month < 12 && month > 0) && ((month % 2 == 0 && date < 31 && date > 0) ||
        (month % 2 == 1 && date <= 31 && date > 0)));
   {
       cout << "Tanggal Valid" << endl;
   }
    {
        cout << "Tanggal Tidak Valid" << endl;
    }

    return 0;
}
