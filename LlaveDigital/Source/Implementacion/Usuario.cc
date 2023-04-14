#pragma once

#include <iostream>
#include <list>
#include <map>

#include "../Headers/RegistroAccesos.h"
#include "../Headers/Llave.h"

using namespace std;

class Usuario {
 public:
  Usuario(string, string);

  Llave SeleccionarLlave(string);
  void SistemaSoporte();

 private:
  string user_name_;
  string password_;
  map<string, Llave> llaves_;
};