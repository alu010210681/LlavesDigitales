#pragma once

#include <iostream>
#include <list>

#include "RegistroAccesos.h"
#include "Usuario.h"

using namespace std;

class Llave {
 public:
  Llave();

  bool Abrir();
  bool CheckState();
  void ConfiguracionCerradura();
  list<RegistroAcceso> GetHistorial();


 private:
  bool abierto;
  list<Usuario> AccesoLlave;
  list<RegistroAcceso> HistorialRegistrosAcceso;
};