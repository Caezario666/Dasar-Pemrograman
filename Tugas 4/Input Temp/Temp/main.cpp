/*
Caezario Rafie AZ
A11.2022.14608
DASPRO 7
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
   float temperature = 115 ;

   if(temperature > 100) {
        cout << "gas,karena temperartur lebih dari 100°C " << endl;
   } else if(temperature <= 1) {
        cout << "ice,karena suhu dibawah 1°C" << endl;
   } else {
        cout << "liquid,karena suhu di antara 1-100°C" << endl;
   }





    return 0;
}
