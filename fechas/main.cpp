#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std; 

int main() 
{ 
int dia, mes, year; 
time_t tiempo = time (NULL); 
struct tm *fecha = localtime (&tiempo); 
do { 
cout << "Ingrese el a\244o de nacimiento: "; 
cin >> year; 
year -= 1900; 
if (year<0 || year>fecha->tm_year) 
cout << "A\244o incorrecto." << endl; 
} while (year<0 || year>fecha->tm_year); 
do { 
cout << "Ingrese el mes de nacimiento: "; 
cin >> mes; 
mes--; 
if (mes<0 || mes>11) 
cout << "Mes incorrecto." << endl; 
} while (mes<0 || mes>11); 
do { 
cout << "Ingrese el d\241a de nacimiento: "; 
cin >> dia; 
if (dia<1 || dia>31) 
cout << "D\241a incorrecto." << endl; 
} while (dia<1 || dia>31); 
if (dia>fecha->tm_mday) 
{ 
mes++; 
if (fecha->tm_mon==1) 
dia-=28; 
else if (fecha->tm_mon==3 || fecha->tm_mon==5 || fecha->tm_mon==6 || fecha->tm_mon==11) 
dia-=30; 
else 
dia-=31; 
} 
if (mes>fecha->tm_mon) 
year++; 
cout << endl << "Edad: " << fecha->tm_year-year << " a\244os, " << (12+fecha->tm_mon-mes)%12 << " meses, " << fecha->tm_mday-dia << " d\241as." << endl << endl; 
system("pause"); 
return EXIT_SUCCESS; 
}
