#include "Middleman.h"

// ----------------- Constructores


template <class InfoType> 
Middleman<InfoType>::Middleman(string file_name) {
  file_name_ = file_name;
}

// ----------------- Metodos BASICOS

template <class InfoType> 
bool Middleman<InfoType>::open() {
  file_.open(file_name_);
  return file_.is_open();
}

template <class InfoType> 
bool Middleman<InfoType>::open(string type) {
  std::ios_base::openmode mode;
  // Lectura parametros permisos
  for (size_t i = 0; i < type; i++) {
    switch (type[i]) {
      case 'r': mode |= fstream::in break;
      case 'w': mode |= fstream::out break;
      case 'e': mode |= fstream::ate break;
      case 't': mode |= fstream::trunc break;
      default: return false; break; // error al introducir los parametros de apertura
    }
  }
  file_.open(file_name_, mode);
  return file_.is_open();
}

template <class InfoType> 
bool Middleman<InfoType>::open(bool, bool, bool, bool) {
  file_.open(file_name_);
  return file_.is_open();
}

template <class InfoType> 
bool Middleman<InfoType>::close() {
  file_.close();
  return !file_.is_open();
}

template <class InfoType> 
bool Middleman<InfoType>::change_file(string new_file_name) {
  if (!close()) { return false; }
  file_name_ = new_file_name;
  return open();
}

template <class InfoType> 
bool Middleman<InfoType>::refresh() {
  if (!close()) { return false; }
  return open();
}

// ----------------- Metodos INSERCION

template <class InfoType> 
bool Middleman<InfoType>::insert(InfoType info) {
  if (!open()) { return false; }
  file_ << info;
}

template <class InfoType> 
bool Middleman<InfoType>::insert_front(InfoType info) {
  if (!refresh()) { return false; }
  file__ << info;
}

template <class InfoType> 
bool Middleman<InfoType>::insert_back(InfoType info) {

  file__ << info;
}