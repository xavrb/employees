public:

  void CARGA_DATOS();
  empleados();
  void CALCULAR(int);
  ~empleados();
  void MOSTRAR();


};



int main()
{
  empleados worker[50];
  char opc = ' '; 
  int x = 0;
  while (opc!='n') {
    worker[x].CARGA_DATOS();
    worker[x].CALCULAR(x);
    worker[x].MOSTRAR();
    cout « "Hay mas trabajadores?";
    cin » opc;
    x++; // Hay que poner el incremento para poder hacer un avance en la memoria.
  }

  system("PAUSE");
    return 0;
}



void empleados::CARGA_DATOS()
{
  cout « "Dame tu nombre";
  cin » nombre;
  cin » departamento;
  cin » num_empl;
  cin » sueldo;

  return;
}

void empleados::CALCULAR(int x)
