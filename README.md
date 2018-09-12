# Sistema alertizador salvaguarda humano-coche

Consiste en un sistema que simula un Semáforo Interactivo usando Arduino. Este muestra un conjunto de semáforos que cambia de verde a ámbar y a rojo, luego de un período de tiempo establecido, utilizando el sistema de cuatro estados de los semáforos en México. Este se extiende para incluir un conjunto de luces y un botón peatonal para solicitar cruzar la calle.
La funcionalidad del botón peatonal es reconocer una orden para cerrar el paso de los vehículos con el fin de que el viandante pueda cruzar con seguridad hasta el otro lado de la calle. Una vez que se acaba el tiempo estipulado para que el peatón cruce, ese semáforo permanecerá abierto para mejorar la movilidad de los vehículos. 
El sistema deberá de contener una perilla para controlar el tiempo mínimo en que el semáforo vehicular va a durar en verde. Esto quiere decir que habrá un tiempo en el que el botón no tendrá su funcionalidad sino hasta que el tiempo mínimo controlado por el potenciómetro haya llegado.

## Comenzando 🚀

A continuación se explicarán los pre-requisitos, su instalación, etc.

### Pre-requisitos 📋

Para poder ejecutar satisfactoriamente el sistema se necesita de lo siguiente:

**Material físico**:
```
-1 placa arduino (UNO) con su cable para conectar
-1 protoboard
-6 leds (2 verdes, 2 rojos, 1 ámbar y uno de cualquier color)
-6 resistencias de 220 Ohms
-1 resistencia de 10k
-1 potenciómetro de 10k
-1 Botón
-Cables
```
**Software**:
```
-1 equipo con arduino IDE instalado
-Darle permisos dialout al usuario del equipo (Linux)
-Driver instalado de la placa (Windows)
```

### Instalación 🔧

Para ejecutar el archivo.ino siga estos pasos:
- Abre el arduino IDE en tu equipo
- Carga en el IDE el archivo.ino
- Conecta la placa arduino a tu equipo
- Compila el código en el Arduino IDE
- Selecciona el puerto para la placa
```
    Ejemplo: /dev/ttyUSB
```
- Carga el programa a la placa arduino
- Listo <br />


## Construido con 🛠️

Arduino IDE

* [Arduino](http://www.arduino.cc/) <br />


## Autor ✒️

* **Jorge Enrique Aguado Guaní** - [jorgeguani](https://github.com/JorgeGuani)
