#include <iostream>
#include <fstream>

using namespace std;

template <class InfoType>
class Middleman {
 public:
  // constructores 
  Middleman();
  Middleman(string); // nombre del archivo

  // ----------------- Metodos BASICOS
  /*
   cambiar de archivo
  */
  bool change_file(string); 
  /*
    abrir el archivo con sus permisos/restricciones

    RESTRICCIONES:
      r -> Read
      w -> Write
      e -> End
      t -> Truncate
  */


  bool open(); // se abre en formato escritura y lectura
  bool open(string); // "Formato -> rw o r"
  bool open(bool, bool, bool, bool); // 1,0 = r y !w  
  /*
    cerrar el archivo 
  */
  bool close(); 
  /*
    Vuelve a cargar el archivo en el programa
  */
  bool refresh(); 
  // ----------------- Metodos INSERCION
  /*
    Insertar en la posicion del puntero contenplado en el fichero fstream
  */
  bool insert(InfoType);
  /*
    Insertar al inicio del archivo
  */
  bool insert_front(InfoType);
  /*
    Insertar al final del archivo
  */
  bool insert_back(InfoType);
  /*
    Insertar en una linea en concreto del archivo
  */
  bool insert_in_line(int, InfoType);
  /*
    insertar con la ultima linea del conjunto encontrada que 
    empiece por el tag pasado por parametro
  */
  bool insert_sorted(string, InfoType); 

 private:
  string file_name_;
  fstream file_;
};
