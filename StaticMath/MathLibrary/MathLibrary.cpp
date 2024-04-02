#include "MathLibrary.h"
#include <string>

std::string predecirFuturo(std::string nombre, int edad) {
    std::string prediccion = "Hola " + nombre + ", ahora mismo tienes " + std::to_string(edad) + " anos y, "; 
    if (edad < 10) {
        prediccion += "Vas a tener un ano lleno de diversion y aprendizaje.";
    }
    else if (edad < 20) {
        prediccion += "Vas a tener un futuro brillante.";
    }
    else if (edad < 30) {
        prediccion += "Vas a viajar mucho.";
    }
    else if (edad < 40) {
        prediccion += "Vas a hacer un algun descubrimiento .";
    }
    else if (edad < 50) {
        prediccion += "Vas a tener una nueva mascota.";
    }
    else if (edad < 60) {
        prediccion += "Vas a descubrir nuevos gustos.";
    }
    else if (edad < 70) {
        prediccion += "Vas a disfrutar de momentos con la familia.";
    }
    else {
        prediccion += "Vas a tener una vida.";
    }
    return prediccion;
}
