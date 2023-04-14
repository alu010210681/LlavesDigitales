# Aplicación de gestión de cerraduras inteligentes
Esta aplicación se ha desarrollado completamente en C++, simulando una arquitectura enfocada en los microservicios, es decir cada servicio está diseñado para cumplir con una única tarea. Para ello se han simulado 3 servicios:

1. Interfaz Gráfica de Usuario (./BaseDatos/main.cc): todas las interacciones que harán los usuarios del sistema (cliente, administrador, empleado, ...) se llevarán acabo en ese fichero

2. Middleware (./BaseDatos/Middleman.cc): será el servicio encargado de actúar de intermediario entre la base de datos y la interfaz gráfica para ello se definirán un seria de reglas que permitirán la comunicación entre los dos servicios

3. Base de Datos (./Source/): este servicio tendrá la estructura de clases que utilizará la base de datos para organizar toda la información de la aplicación

En el directorio "./BaseDatos/informacionprueba.basedato" se encontrará guardada toda la información de la aplicación, que puede ser aumentada y reducida a medida que se mantenga el servicio de gestión de cerradura en ejecución. Es importante destacar, que la información guardada será persistente

## Imagen que muestra la arquitectura de una aplicación web

![Imagen que muestra la arquitectura](https://www.astera.com/wp-content/uploads/2020/01/rest.png)



  