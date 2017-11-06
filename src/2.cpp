// 011117.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

int main()
{
  char Ap_p[20];
  char Ap_m[20];
  char Nombre_1[20];
  char RFC[10];
  char dia[2];
  char mes[2];
  char anio[2];


  cout « "Bienvenidos"« endl;
  cout « "/n Dame tu apellido paterno: ";
  cin » Ap_p;
  cout « "/n Dame tu apellido materno: ";
  cin » Ap_m;
  cout « "/n Dame tu primer nombre: ";
  cin » Nombre_1;
  cout « "/n Dame tu dia de nacimiento: ";
  cin » dia;
  cout « "/n Dame tu mes de nacimiento: ";
  cin » mes;
  cout « "/n Dame tu año de nacimiento (Solo los dos ultimos digitos): ";
  cin » anio;
  cout « Nombre_1 « " " « Ap_p « " " « Ap_m « "/n " « endl;
  cout « dia « " " « mes « " " « anio « " " « endl;



  cout « RFC;

  
  





  system("PAUSE");
    return 0;
}
